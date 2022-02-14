
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_asid {int vmcs; int cr3; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt_asid* FUNC_0 (struct pt_mapped_section*) ;
 int FUNC_1 (struct pt_mapped_section*,int *,int *,int,int,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (struct pt_asid const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_5(void)
{
 struct pt_mapped_section VAR_2;
 const struct pt_asid *VAR_3;

 FUNC_1(&VAR_2, ((void*)0), ((void*)0), 0x2000ull, 0x100ull, 0x1000ull);

 VAR_3 = FUNC_0(&VAR_2);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3->cr3, VAR_0);
 FUNC_4(VAR_3->vmcs, VAR_1);

 return FUNC_2();
}
