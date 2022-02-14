
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_asid {int cr3; int vmcs; } ;


 int FUNC_0 (struct pt_asid*) ;
 struct pt_asid* FUNC_1 (struct pt_mapped_section*) ;
 int FUNC_2 (struct pt_mapped_section*,int *,struct pt_asid*,int,int,int) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_asid const*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(void)
{
 struct pt_mapped_section VAR_0;
 struct pt_asid VAR_1;
 const struct pt_asid *VAR_2;

 FUNC_0(&VAR_1);
 VAR_1.cr3 = 0xa00000ull;
 VAR_1.vmcs = 0xb00000ull;

 FUNC_2(&VAR_0, ((void*)0), &VAR_1, 0x2000ull, 0x100ull, 0x1000ull);

 VAR_2 = FUNC_1(&VAR_0);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2->cr3, VAR_1.cr3);
 FUNC_5(VAR_2->vmcs, VAR_1.vmcs);

 return FUNC_3();
}
