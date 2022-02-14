
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_hw {struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
typedef int register_t ;
struct TYPE_2__ {struct pmc_hw* pc_ppcpmcs; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int
FUNC_4(int VAR_3, int VAR_4, int VAR_5)
{
 struct pmc *VAR_6;
 struct pmc_hw *VAR_7;
 register_t VAR_8;

 VAR_7 = &VAR_2[VAR_3]->pc_ppcpmcs[VAR_4];
 VAR_6 = VAR_7->phw_pmc;




 switch (VAR_4) {
 case 0:
 case 1:
  VAR_8 = FUNC_2(VAR_0);
  VAR_8 = FUNC_0(VAR_8, VAR_5, VAR_4);
  FUNC_3(VAR_0, VAR_8);
  break;
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
 case 7:
  VAR_8 = FUNC_2(VAR_1);
  VAR_8 = FUNC_1(VAR_8, VAR_5, VAR_4);
  FUNC_3(VAR_1, VAR_8);
  break;
 }
 return 0;
}
