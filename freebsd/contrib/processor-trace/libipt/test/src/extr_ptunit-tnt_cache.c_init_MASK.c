
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tnt_cache ;
struct ptunit_result {int dummy; } ;
struct pt_tnt_cache {int index; int tnt; } ;


 int FUNC_0 (struct pt_tnt_cache*,int,int) ;
 int FUNC_1 (struct pt_tnt_cache*) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_tnt_cache VAR_0;

 FUNC_0(&VAR_0, 0xcd, sizeof(VAR_0));

 FUNC_1(&VAR_0);

 FUNC_3(VAR_0.tnt, 0ull);
 FUNC_3(VAR_0.index, 0ull);

 return FUNC_2();
}
