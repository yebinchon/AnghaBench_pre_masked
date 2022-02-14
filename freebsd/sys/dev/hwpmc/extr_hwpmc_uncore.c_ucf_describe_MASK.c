
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucf_name ;
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
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(int VAR_7, int VAR_8, struct pmc_info *VAR_9, struct pmc **VAR_10)
{
 int VAR_11;
 struct pmc_hw *VAR_12;
 char VAR_13[VAR_2];

 VAR_12 = &VAR_5[VAR_7]->pc_uncorepmcs[VAR_8 + VAR_6];

 (void) FUNC_1(VAR_13, sizeof(VAR_13), "UCF-%d", VAR_8);
 if ((VAR_11 = FUNC_0(VAR_13, VAR_9->pm_name, VAR_2,
     ((void*)0))) != 0)
  return (VAR_11);

 VAR_9->pm_class = VAR_1;

 if (VAR_12->phw_state & VAR_3) {
  VAR_9->pm_enabled = VAR_4;
  *VAR_10 = VAR_12->phw_pmc;
 } else {
  VAR_9->pm_enabled = VAR_0;
  *VAR_10 = ((void*)0);
 }

 return (0);
}
