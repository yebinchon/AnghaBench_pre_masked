
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_last_ip {int dummy; } ;


 int FUNC_0 (struct pt_last_ip*) ;
 int FUNC_1 (int *,struct pt_last_ip*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_last_ip VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1);

 VAR_2 = FUNC_1(((void*)0), &VAR_1);
 FUNC_2(VAR_2, -VAR_0);

 return FUNC_3();
}
