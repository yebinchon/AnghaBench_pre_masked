
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct pt_config {int addr_filter; } ;


 int FUNC_0 (int *,int,int) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (struct pt_config*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_7(uint8_t VAR_1)
{
 struct pt_config VAR_2;
 uint64_t VAR_3, VAR_4;
 uint32_t VAR_5;

 FUNC_1(&VAR_2);

 FUNC_0(&VAR_2.addr_filter, 0xcc, sizeof(VAR_2.addr_filter));

 VAR_5 = FUNC_4(&VAR_2.addr_filter, VAR_1);
 FUNC_6(VAR_5, VAR_0);

 VAR_3 = FUNC_2(&VAR_2.addr_filter, VAR_1);
 FUNC_6(VAR_3, 0ull);

 VAR_4 = FUNC_3(&VAR_2.addr_filter, VAR_1);
 FUNC_6(VAR_4, 0ull);

 return FUNC_5();
}
