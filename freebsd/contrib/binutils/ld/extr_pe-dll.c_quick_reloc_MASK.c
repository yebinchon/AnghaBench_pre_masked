
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
typedef int arelent ;
struct TYPE_5__ {int address; scalar_t__ sym_ptr_ptr; int howto; scalar_t__ addend; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
  if (VAR_0 >= VAR_1 - 1)
    {
      VAR_1 += 10;
      if (VAR_2)
 VAR_2 = FUNC_2 (VAR_2, VAR_1 * sizeof (arelent));
      else
 VAR_2 = FUNC_1 (VAR_1 * sizeof (arelent));
    }
  VAR_2[VAR_0].address = VAR_5;
  VAR_2[VAR_0].addend = 0;
  VAR_2[VAR_0].howto = FUNC_0 (VAR_4, VAR_6);
  VAR_2[VAR_0].sym_ptr_ptr = VAR_3 + VAR_7;
  VAR_0++;
}
