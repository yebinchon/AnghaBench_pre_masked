
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_fixture {int decoder; } ;
struct ptunit_result {int dummy; } ;
struct pt_config {int dummy; } ;


 struct pt_config* FUNC_0 (int *) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (struct pt_config const*) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct test_fixture *VAR_0)
{
 const struct pt_config *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->decoder);
 FUNC_2(VAR_1);

 return FUNC_1();
}
