
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_last_ip {int suppressed; int have_ip; int ip; } ;
typedef int last_ip ;


 int FUNC_0 (struct pt_last_ip*,int,int) ;
 int FUNC_1 (struct pt_last_ip*) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_last_ip VAR_0;

 FUNC_0(&VAR_0, 0xcd, sizeof(VAR_0));

 FUNC_1(&VAR_0);

 FUNC_3(VAR_0.ip, 0ull);
 FUNC_3(VAR_0.have_ip, 0);
 FUNC_3(VAR_0.suppressed, 0);

 return FUNC_2();
}
