
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct test_fixture {int encoder; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long long) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct test_fixture *VAR_0)
{
 uint64_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->encoder, 1ull);
 FUNC_2(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_0->encoder, &VAR_1);
 FUNC_2(VAR_2, 0);
 FUNC_4(VAR_1, 1ull);

 return FUNC_3();
}
