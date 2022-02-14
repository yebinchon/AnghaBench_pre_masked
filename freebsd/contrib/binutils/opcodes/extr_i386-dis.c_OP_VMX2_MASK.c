
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3 (int VAR_4, int VAR_5)
{
  if (VAR_0.mod == 3)
    {
      FUNC_2 (VAR_1, "rdseed");
      FUNC_0 (VAR_3, VAR_5);
    }
  else
    {
      FUNC_2 (VAR_1, "vmptrst");
      FUNC_1 (VAR_2, VAR_5);
    }
}
