
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int n_alternatives; } ;


 char* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (VAR_2)
    {
      int VAR_5 = FUNC_0 (VAR_2);
      FUNC_2 (VAR_1, "\t%s %d\t%s",
        VAR_0, FUNC_1 (VAR_2),
        VAR_3[VAR_5].name);
      if (VAR_3[VAR_5].n_alternatives > 1)
 FUNC_2 (VAR_1, "/%d", VAR_4 + 1);






      VAR_2 = 0;
    }
}
