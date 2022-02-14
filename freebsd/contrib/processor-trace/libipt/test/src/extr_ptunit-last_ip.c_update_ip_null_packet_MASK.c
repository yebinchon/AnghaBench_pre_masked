
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct pt_last_ip {int ip; int have_ip; int suppressed; } ;


 int FUNC_0 (struct pt_last_ip*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static struct ptunit_result FUNC_4(uint32_t VAR_1)
{
 struct pt_last_ip VAR_2;
 int VAR_3;

 VAR_2.ip = 0x7fffffffffffffffull;
 VAR_2.have_ip = VAR_1;
 VAR_2.suppressed = 0;

 VAR_3 = FUNC_0(&VAR_2, ((void*)0), ((void*)0));
 FUNC_1(VAR_3, -VAR_0);
 FUNC_3(VAR_2.ip, 0x7fffffffffffffffull);
 FUNC_3(VAR_2.have_ip, VAR_1);
 FUNC_3(VAR_2.suppressed, 0);

 return FUNC_2();
}
