
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_last_ip {int have_ip; scalar_t__ suppressed; } ;


 int FUNC_0 (int *,struct pt_last_ip*) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(void)
{
 struct pt_last_ip VAR_0;
 int VAR_1;

 VAR_0.have_ip = 1;
 VAR_0.suppressed = 0;

 VAR_1 = FUNC_0(((void*)0), &VAR_0);
 FUNC_1(VAR_1, 0);

 return FUNC_2();
}
