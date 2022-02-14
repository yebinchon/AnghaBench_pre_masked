
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_hw {struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
typedef int register_t ;
struct TYPE_2__ {struct pmc_hw* pc_ppcpmcs; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int
FUNC_8(int VAR_3, int VAR_4)
{
        struct pmc *VAR_5;
        struct pmc_hw *VAR_6;
        register_t VAR_7;

 VAR_6 = &VAR_2[VAR_3]->pc_ppcpmcs[VAR_4];
 VAR_5 = VAR_6->phw_pmc;




 switch (VAR_4) {
 case 0:
  VAR_7 = FUNC_6(VAR_0);
  VAR_7 = FUNC_0(VAR_7, 0);
  FUNC_7(VAR_0, VAR_7);
  break;
 case 1:
  VAR_7 = FUNC_6(VAR_0);
  VAR_7 = FUNC_1(VAR_7, 0);
  FUNC_7(VAR_0, VAR_7);
  break;
 case 2:
  VAR_7 = FUNC_6(VAR_1);
  VAR_7 = FUNC_2(VAR_7, 0);
  FUNC_7(VAR_1, VAR_7);
  break;
 case 3:
  VAR_7 = FUNC_6(VAR_0);
  VAR_7 = FUNC_3(VAR_7, 0);
  FUNC_7(VAR_0, VAR_7);
  break;
 case 4:
  VAR_7 = FUNC_6(VAR_1);
  VAR_7 = FUNC_4(VAR_7, 0);
  FUNC_7(VAR_1, VAR_7);
  break;
 case 5:
  VAR_7 = FUNC_6(VAR_1);
  VAR_7 = FUNC_5(VAR_7, 0);
  FUNC_7(VAR_1, VAR_7);
  break;
 default:
  break;
 }
 return 0;
}
