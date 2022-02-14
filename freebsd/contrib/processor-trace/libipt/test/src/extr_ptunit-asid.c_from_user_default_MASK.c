
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_asid {int vmcs; int cr3; int size; } ;
typedef int asid ;


 int FUNC_0 (struct pt_asid*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_asid VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2, ((void*)0));
 FUNC_1(VAR_3, 0);
 FUNC_3(VAR_2.size, sizeof(VAR_2));
 FUNC_3(VAR_2.cr3, VAR_0);
 FUNC_3(VAR_2.vmcs, VAR_1);

 return FUNC_2();
}
