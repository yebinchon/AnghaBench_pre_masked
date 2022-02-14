
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct pmc_process {int pp_flags; } ;
struct pmc_cpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,int ) ;
 int FUNC_1 (int ,int ,int,char*,struct pmc_cpu*,struct pmc_process*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct pmc_cpu *VAR_4, struct pmc_process *VAR_5)
{
 (void) VAR_4;

 FUNC_1(VAR_1,VAR_3,1, "pc=%p pp=%p enable-msr=%d", VAR_4, VAR_5,
     VAR_5->pp_flags & VAR_2);


 if (VAR_5->pp_flags & VAR_2)
  FUNC_2(FUNC_3() | VAR_0);

 FUNC_0(VAR_1,VAR_3,1, "cr4=0x%jx", (uintmax_t) FUNC_3());

 return 0;
}
