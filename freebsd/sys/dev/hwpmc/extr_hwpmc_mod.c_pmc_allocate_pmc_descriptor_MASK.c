
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_pcpu_state {int dummy; } ;
struct pmc {void* pm_pcpu_state; int pm_runcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static struct pmc *
FUNC_3(void)
{
 struct pmc *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct pmc), VAR_1, VAR_2|VAR_3);
 VAR_6->pm_runcount = FUNC_1(VAR_2);
 VAR_6->pm_pcpu_state = FUNC_2(sizeof(struct pmc_pcpu_state)*VAR_5, VAR_1, VAR_2|VAR_3);
 FUNC_0(VAR_4,VAR_0,1, "allocate-pmc -> pmc=%p", VAR_6);

 return VAR_6;
}
