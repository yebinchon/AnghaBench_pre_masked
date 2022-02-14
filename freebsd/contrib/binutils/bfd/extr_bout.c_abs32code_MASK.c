
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef unsigned int bfd_vma ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int address; int * howto; } ;
typedef TYPE_1__ arelent ;


 unsigned int FUNC_0 (TYPE_1__*,struct bfd_link_info*,int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int *,unsigned int) ;

__attribute__((used)) static int
FUNC_3 (bfd *VAR_1,
    asection *VAR_2,
    arelent *VAR_3,
    unsigned int VAR_4,
    struct bfd_link_info *VAR_5)
{
  bfd_vma VAR_6 = FUNC_0 (VAR_3, VAR_5, VAR_2);
  bfd_vma VAR_7 = FUNC_1 (VAR_2) + VAR_3->address;
  bfd_vma VAR_8;




  VAR_8 = VAR_6 - (VAR_7 - VAR_4);

  if (-1 << 23 < (long)VAR_8 && (long)VAR_8 < 1 << 23)
    {


      VAR_3->howto = &VAR_0;

      VAR_3->address -=4;


      VAR_4 += 4 ;
      FUNC_2 (VAR_1, 4, VAR_2, VAR_3->address-VAR_4 + 4);
    }

  return VAR_4;
}
