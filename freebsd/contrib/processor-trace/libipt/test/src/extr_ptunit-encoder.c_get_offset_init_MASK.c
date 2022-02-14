
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct test_fixture {int encoder; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct test_fixture *VAR_0)
{
 uint64_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->encoder, &VAR_1);
 FUNC_1(VAR_2, 0);
 FUNC_3(VAR_1, 0ull);

 return FUNC_2();
}
