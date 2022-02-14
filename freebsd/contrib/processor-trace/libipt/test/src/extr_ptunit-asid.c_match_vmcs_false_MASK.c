
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_asid {int vmcs; } ;


 int FUNC_0 (struct pt_asid*) ;
 int FUNC_1 (struct pt_asid*,struct pt_asid*) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_asid VAR_0, VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0);
 FUNC_0(&VAR_1);

 VAR_0.vmcs = 0x42000ull;
 VAR_1.vmcs = 0x23000ull;

 VAR_2 = FUNC_1(&VAR_0, &VAR_1);
 FUNC_2(VAR_2, 0);

 return FUNC_3();
}
