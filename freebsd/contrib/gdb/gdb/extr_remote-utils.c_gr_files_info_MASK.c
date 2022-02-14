
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int to_shortname; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;

void
FUNC_3 (struct target_ops *VAR_2)
{



  FUNC_1 ("\tAttached to %s", FUNC_2 ());
  if (VAR_0 != -1)
    FUNC_1 ("at %d baud", VAR_0);
  FUNC_1 ("\n");


  if (VAR_1)
    {
      FUNC_1 ("\tand running program %s\n",
         FUNC_0 (VAR_1));
    }
  FUNC_1 ("\tusing the %s protocol.\n", VAR_2->to_shortname);
}
