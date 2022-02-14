
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int instruction; int relax_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char**,int,int ) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3)
{
  FUNC_3 (VAR_3);

  if (FUNC_1 (&VAR_3, 20, VAR_1) == (int) VAR_0
      || FUNC_2 (&VAR_3) == (int) VAR_0
      || FUNC_1 (&VAR_3, 10, VAR_1) == (int) VAR_0
      || FUNC_0 (VAR_3) == (int) VAR_0)
    return;

  if ((VAR_2.relax_inst != 0x8000) && (((VAR_2.instruction >> 10) & 0x10) == 0)
      && (((VAR_2.instruction >> 20) & 0x10) == 0))
    {
      VAR_2.relax_inst |= (((VAR_2.instruction >> 10) & 0xf) << 4) | (((VAR_2.instruction >> 20) & 0xf) << 8);
      VAR_2.relax_size = 2;
    }
  else
    VAR_2.relax_inst = 0x8000;
}
