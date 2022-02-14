
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct ptunit_result {int dummy; } ;
struct pt_asid {int size; int cr3; int vmcs; } ;
typedef int asid ;


 int FUNC_0 (struct pt_asid*,struct pt_asid*) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_asid VAR_0, VAR_1;
 int VAR_2;

 VAR_1.size = sizeof(VAR_1) + 4;
 VAR_1.cr3 = 0x4200ull;
 VAR_1.vmcs = 0x23000ull;

 VAR_2 = FUNC_0(&VAR_0, &VAR_1);
 FUNC_1(VAR_2, 0);
 FUNC_3(VAR_0.size, sizeof(VAR_0));
 FUNC_3(VAR_0.cr3, 0x4200ull);
 FUNC_3(VAR_0.vmcs, 0x23000ull);

 return FUNC_2();
}
