
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucp_name ;
struct pmc_info {int pm_enabled; int pm_class; int pm_name; } ;
struct pmc_hw {int phw_state; struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
struct TYPE_2__ {struct pmc_hw* pc_uncorepmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int,int *) ;
 int FUNC_1 (char*,int,char*,int) ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int
FUNC_2(int VAR_6, int VAR_7, struct pmc_info *VAR_8, struct pmc **VAR_9)
{
 int VAR_10;
 struct pmc_hw *VAR_11;
 char VAR_12[VAR_2];

 VAR_11 = &VAR_5[VAR_6]->pc_uncorepmcs[VAR_7];

 (void) FUNC_1(VAR_12, sizeof(VAR_12), "UCP-%d", VAR_7);
 if ((VAR_10 = FUNC_0(VAR_12, VAR_8->pm_name, VAR_2,
     ((void*)0))) != 0)
  return (VAR_10);

 VAR_8->pm_class = VAR_1;

 if (VAR_11->phw_state & VAR_3) {
  VAR_8->pm_enabled = VAR_4;
  *VAR_9 = VAR_11->phw_pmc;
 } else {
  VAR_8->pm_enabled = VAR_0;
  *VAR_9 = ((void*)0);
 }

 return (0);
}
