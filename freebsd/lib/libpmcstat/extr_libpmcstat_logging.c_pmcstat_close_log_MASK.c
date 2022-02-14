
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_args {int pa_logfd; int pa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(struct pmcstat_args *VAR_4)
{




 if (VAR_4->pa_logfd != -1) {
  if (FUNC_1() < 0)
   FUNC_0(VAR_0, "ERROR: logging failed");
 }

 return (VAR_4->pa_flags & VAR_1 ? VAR_2 :
     VAR_3);
}
