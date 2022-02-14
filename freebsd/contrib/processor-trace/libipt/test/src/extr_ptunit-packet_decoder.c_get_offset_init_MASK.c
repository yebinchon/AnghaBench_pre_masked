
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct test_fixture {int decoder; } ;
struct ptunit_result {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct test_fixture *VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->decoder, &VAR_2);
 FUNC_1(VAR_3, -VAR_0);

 return FUNC_2();
}
