
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct powerpc_cpu {int dummy; } ;
struct pmc_mdep {int pmd_switch_out; int pmd_switch_in; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pmc_mdep*) ;
 struct pmc_mdep* FUNC_4 (int) ;
 int FUNC_5 (struct pmc_mdep*) ;
 int FUNC_6 (struct pmc_mdep*) ;
 int FUNC_7 (struct pmc_mdep*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct pmc_mdep *
FUNC_8()
{
 struct pmc_mdep *VAR_6;
 int VAR_7;
 uint16_t VAR_8;





 VAR_3 = FUNC_0(sizeof(struct powerpc_cpu *) * FUNC_2(), VAR_0,
      VAR_1|VAR_2);


 VAR_6 = FUNC_4(1);

 VAR_8 = FUNC_1() >> 16;

 VAR_6->pmd_switch_in = VAR_4;
 VAR_6->pmd_switch_out = VAR_5;

 switch (VAR_8) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_7 = FUNC_6(VAR_6);
  break;
 case 135:
 case 134:
 case 133:
  VAR_7 = FUNC_7(VAR_6);
  break;
 case 138:
 case 137:
 case 139:
 case 136:
  VAR_7 = FUNC_3(VAR_6);
  break;
 default:
  VAR_7 = -1;
  break;
 }

 if (VAR_7 != 0) {
  FUNC_5(VAR_6);
  VAR_6 = ((void*)0);
 }

 return (VAR_6);
}
