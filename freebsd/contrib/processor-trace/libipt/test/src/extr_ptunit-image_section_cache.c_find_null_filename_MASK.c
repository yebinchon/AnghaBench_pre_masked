
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; } ;


 int FUNC_0 (int *,int *,unsigned long long,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct iscache_fixture *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->iscache, ((void*)0), 0ull, 0ull, 0ull);
 FUNC_1(VAR_2, -VAR_0);

 return FUNC_2();
}
