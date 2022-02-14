
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_userdata {int dummy; } ;
struct pmc_owner {int dummy; } ;
struct pmc_op_writelog {int pm_userdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc_owner*,int ) ;
 int FUNC_1 (struct pmc_owner*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pmc_owner*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_4(struct pmc_owner *VAR_3, struct pmc_op_writelog *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0,VAR_2,1, "writelog po=%p ud=0x%x", VAR_3, VAR_4->pm_userdata);

 VAR_5 = 0;

 FUNC_3(VAR_3, VAR_1,
     sizeof(struct pmclog_userdata));
 FUNC_2(VAR_4->pm_userdata);
 FUNC_1(VAR_3);

 error:
 return (VAR_5);
}
