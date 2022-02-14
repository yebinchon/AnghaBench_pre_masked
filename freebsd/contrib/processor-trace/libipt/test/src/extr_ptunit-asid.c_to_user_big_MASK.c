
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct ptunit_result {int dummy; } ;
struct pt_asid {int cr3; int vmcs; int size; } ;
typedef int asid ;


 int FUNC_0 (struct pt_asid*,int,int) ;
 int FUNC_1 (struct pt_asid*) ;
 int FUNC_2 (struct pt_asid*,struct pt_asid*,int) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_6(void)
{
 struct pt_asid VAR_0, VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1, 0xcc, sizeof(VAR_1));
 FUNC_1(&VAR_0);
 VAR_0.cr3 = 0x4200ull;
 VAR_0.vmcs = 0x23000ull;

 VAR_2 = FUNC_2(&VAR_1, &VAR_0, sizeof(VAR_1) + 8);
 FUNC_3(VAR_2, 0);
 FUNC_5(VAR_1.size, sizeof(VAR_0));
 FUNC_5(VAR_1.cr3, 0x4200ull);
 FUNC_5(VAR_1.vmcs, 0x23000ull);

 return FUNC_4();
}
