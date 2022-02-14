
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd ;
typedef int asection ;
struct TYPE_5__ {int address; int addend; TYPE_2__* howto; } ;
typedef TYPE_1__ arelent ;
struct TYPE_6__ {int size; } ;


 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int *,int) ;

__attribute__((used)) static int
FUNC_2 (bfd *VAR_2,
    asection *VAR_3,
    arelent *VAR_4,
    unsigned int VAR_5)
{
  bfd_vma VAR_6 = FUNC_0 (VAR_3) + VAR_4->address;
  bfd_vma VAR_7;
  bfd_vma VAR_8;
  bfd_vma VAR_9;
  unsigned int VAR_10;
  int VAR_11 = VAR_4->howto->size;






  VAR_8 = ((VAR_6 + VAR_11 ) & ~VAR_11) + VAR_11+1;


  VAR_9 = ((VAR_6 - VAR_5 + VAR_11) & ~VAR_11);


  VAR_7 = VAR_8 - ((VAR_6 + VAR_11) & ~VAR_11);

  VAR_10 = (VAR_8 - VAR_9) - VAR_5;

  if (VAR_10)
    {

      VAR_4->howto = VAR_1 + (VAR_4->howto - VAR_0);



      VAR_4->addend = VAR_8 - VAR_6 + VAR_4->address;


      FUNC_1 (VAR_2, VAR_10, VAR_3, VAR_4->address - VAR_5);
      VAR_5 += VAR_10;
    }

  return VAR_5;
}
