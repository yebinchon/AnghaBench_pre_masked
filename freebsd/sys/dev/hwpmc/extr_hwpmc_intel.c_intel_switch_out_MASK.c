
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct pmc_process {int dummy; } ;
struct pmc_cpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc_cpu*,struct pmc_process*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct pmc_cpu *VAR_3, struct pmc_process *VAR_4)
{
 (void) VAR_3;
 (void) VAR_4;

 FUNC_0(VAR_1,VAR_2,1, "pc=%p pp=%p cr4=0x%jx", VAR_3, VAR_4,
     (uintmax_t) FUNC_2());


 FUNC_1(FUNC_2() & ~VAR_0);

 return 0;
}
