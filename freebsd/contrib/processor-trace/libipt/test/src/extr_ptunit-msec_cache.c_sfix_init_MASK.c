
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_fixture {int image; int mcache; int section; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;
 struct ptunit_result FUNC_1 () ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct test_fixture *VAR_0)
{
 FUNC_0(&VAR_0->section, 0, sizeof(VAR_0->section));
 FUNC_0(&VAR_0->mcache, 0, sizeof(VAR_0->mcache));
 FUNC_0(&VAR_0->image, 0, sizeof(VAR_0->image));

 return FUNC_1();
}
