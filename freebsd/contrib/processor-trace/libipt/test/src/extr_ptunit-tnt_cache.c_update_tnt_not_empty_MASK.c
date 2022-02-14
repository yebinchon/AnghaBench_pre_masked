
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_tnt_cache {unsigned long long tnt; unsigned long long index; } ;
struct pt_packet_tnt {int dummy; } ;


 int FUNC_0 (struct pt_tnt_cache*,struct pt_packet_tnt*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (unsigned long long,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_tnt_cache VAR_1;
 struct pt_packet_tnt VAR_2;
 int VAR_3;

 VAR_1.tnt = 42ull;
 VAR_1.index = 12ull;

 VAR_3 = FUNC_0(&VAR_1, &VAR_2, ((void*)0));
 FUNC_1(VAR_3, -VAR_0);
 FUNC_3(VAR_1.tnt, 42ull);
 FUNC_3(VAR_1.index, 12ull);

 return FUNC_2();
}
