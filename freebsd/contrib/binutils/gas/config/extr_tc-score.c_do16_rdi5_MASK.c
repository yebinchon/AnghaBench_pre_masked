
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int instruction; int relax_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char**,int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_3)
{
  FUNC_4 (VAR_3);

  if (FUNC_2 (&VAR_3, 8) == (int) VAR_0
      || FUNC_3 (&VAR_3) == (int) VAR_0
      || FUNC_0 (&VAR_3, 3, VAR_1) == (int) VAR_0
      || FUNC_1 (VAR_3) == (int) VAR_0)
    return;
  else
    {
      VAR_2.relax_inst |= (((VAR_2.instruction >> 8) & 0xf) << 20)
        | (((VAR_2.instruction >> 8) & 0xf) << 15) | (((VAR_2.instruction >> 3) & 0x1f) << 10);
      VAR_2.relax_size = 4;
    }
}
