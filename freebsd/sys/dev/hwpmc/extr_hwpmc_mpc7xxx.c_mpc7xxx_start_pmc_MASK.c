
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_4__ {int pm_powerpc_evsel; } ;
struct TYPE_5__ {TYPE_1__ pm_powerpc; } ;
struct pmc {TYPE_2__ pm_md; } ;
typedef int register_t ;
struct TYPE_6__ {struct pmc_hw* pc_ppcpmcs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 TYPE_3__** VAR_4 ;

__attribute__((used)) static int
FUNC_8(int VAR_5, int VAR_6)
{
 uint32_t VAR_7;
        struct pmc *VAR_8;
        struct pmc_hw *VAR_9;
 register_t VAR_10;

 VAR_9 = &VAR_4[VAR_5]->pc_ppcpmcs[VAR_6];
 VAR_8 = VAR_9->phw_pmc;
 VAR_7 = VAR_8->pm_md.pm_powerpc.pm_powerpc_evsel & ~VAR_0;


 switch (VAR_6) {
 case 0:
  VAR_10 = FUNC_6(VAR_1);
  VAR_10 = FUNC_0(VAR_10, VAR_7);
  FUNC_7(VAR_1, VAR_10);
  break;
 case 1:
  VAR_10 = FUNC_6(VAR_1);
  VAR_10 = FUNC_1(VAR_10, VAR_7);
  FUNC_7(VAR_1, VAR_10);
  break;
 case 2:
  VAR_10 = FUNC_6(VAR_3);
  VAR_10 = FUNC_2(VAR_10, VAR_7);
  FUNC_7(VAR_3, VAR_10);
  break;
 case 3:
  VAR_10 = FUNC_6(VAR_1);
  VAR_10 = FUNC_3(VAR_10, VAR_7);
  FUNC_7(VAR_1, VAR_10);
  break;
 case 4:
  VAR_10 = FUNC_6(VAR_3);
  VAR_10 = FUNC_4(VAR_10, VAR_7);
  FUNC_7(VAR_3, VAR_10);
  break;
 case 5:
  VAR_10 = FUNC_6(VAR_3);
  VAR_10 = FUNC_5(VAR_10, VAR_7);
  FUNC_7(VAR_3, VAR_10);
  break;
 default:
  break;
 }




 VAR_7 = ~VAR_8->pm_md.pm_powerpc.pm_powerpc_evsel & VAR_0;

 VAR_10 = FUNC_6(VAR_1);
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_7;
 FUNC_7(VAR_1, VAR_10);

 return 0;
}
