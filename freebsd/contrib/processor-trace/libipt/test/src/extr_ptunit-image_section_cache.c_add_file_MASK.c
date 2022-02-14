
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; } ;


 int FUNC_0 (int *,char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct iscache_fixture *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->iscache, "name", 0ull, 1ull, 0ull);
 FUNC_1(VAR_1, 0);

 return FUNC_2();
}
