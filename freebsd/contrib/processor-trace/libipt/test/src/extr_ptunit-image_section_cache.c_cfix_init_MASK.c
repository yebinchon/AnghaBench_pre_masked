
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct iscache_fixture {int iscache; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,struct iscache_fixture*) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct iscache_fixture *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0, VAR_1);

 VAR_2 = FUNC_0(&VAR_1->iscache, ((void*)0));
 FUNC_1(VAR_2, 0);

 return FUNC_2();
}
