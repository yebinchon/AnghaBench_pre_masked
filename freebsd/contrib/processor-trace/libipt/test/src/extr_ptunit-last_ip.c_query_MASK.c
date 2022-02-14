
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_last_ip {unsigned long long ip; int have_ip; scalar_t__ suppressed; } ;


 int FUNC_0 (unsigned long long*,struct pt_last_ip*) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (unsigned long long,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_last_ip VAR_0;
 uint64_t VAR_1, VAR_2 = 42ull;
 int VAR_3;

 VAR_0.ip = 42ull;
 VAR_0.have_ip = 1;
 VAR_0.suppressed = 0;

 VAR_3 = FUNC_0(&VAR_1, &VAR_0);
 FUNC_1(VAR_3, 0);
 FUNC_3(VAR_0.ip, VAR_2);

 return FUNC_2();
}
