
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int instruction; int relax_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,int,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_4)
{
  FUNC_4 (VAR_4);

  if (FUNC_2 (&VAR_4, 15, VAR_1) == (int) VAR_0
      || FUNC_3 (&VAR_4) == (int) VAR_0
      || FUNC_0 (&VAR_4, 10, VAR_2) == (int) VAR_0
      || FUNC_1 (VAR_4) == (int) VAR_0)
    return;

  if ((VAR_3.relax_inst != 0x8000) && (((VAR_3.instruction >> 15) & 0x10) == 0))
    {
      VAR_3.relax_inst |= (((VAR_3.instruction >> 10) & 0x1f) << 3) | (((VAR_3.instruction >> 15) & 0xf) << 8);
      VAR_3.relax_size = 2;
    }
  else
    VAR_3.relax_inst = 0x8000;
}
