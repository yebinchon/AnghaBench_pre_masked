
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_hw {struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
typedef int register_t ;
struct TYPE_2__ {struct pmc_hw* pc_ppcpmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int
FUNC_2(int VAR_6, int VAR_7)
{
        struct pmc *VAR_8;
        struct pmc_hw *VAR_9;
        register_t VAR_10;

 VAR_9 = &VAR_5[VAR_6]->pc_ppcpmcs[VAR_7];
 VAR_8 = VAR_9->phw_pmc;




 switch (VAR_7) {
 case 0:
  VAR_10 = FUNC_0(VAR_1);
  VAR_10 |= VAR_0;
  FUNC_1(VAR_1, VAR_10);
  break;
 case 1:
  VAR_10 = FUNC_0(VAR_2);
  VAR_10 |= VAR_0;
  FUNC_1(VAR_2, VAR_10);
  break;
 case 2:
  VAR_10 = FUNC_0(VAR_3);
  VAR_10 |= VAR_0;
  FUNC_1(VAR_3, VAR_10);
  break;
 case 3:
  VAR_10 = FUNC_0(VAR_4);
  VAR_10 |= VAR_0;
  FUNC_1(VAR_4, VAR_10);
  break;
 default:
  break;
 }
 return 0;
}
