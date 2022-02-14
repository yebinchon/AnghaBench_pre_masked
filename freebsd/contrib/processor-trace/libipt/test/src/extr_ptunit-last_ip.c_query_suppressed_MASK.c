
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_last_ip {unsigned long long ip; int have_ip; int suppressed; } ;


 int FUNC_0 (unsigned long long*,struct pt_last_ip*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (unsigned long long,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_last_ip VAR_1;
 uint64_t VAR_2 = 13ull;
 int VAR_3;

 VAR_1.ip = 42ull;
 VAR_1.have_ip = 1;
 VAR_1.suppressed = 1;

 VAR_3 = FUNC_0(&VAR_2, &VAR_1);
 FUNC_1(VAR_3, -VAR_0);
 FUNC_3(VAR_2, 0ull);

 return FUNC_2();
}
