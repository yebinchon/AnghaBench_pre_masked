
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; } ;


 int FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct iscache_fixture *VAR_0)
{
 const char *VAR_1;

 FUNC_0(&VAR_0->iscache, ((void*)0));

 VAR_1 = FUNC_1(&VAR_0->iscache);
 FUNC_2(VAR_1);

 return FUNC_3();
}
