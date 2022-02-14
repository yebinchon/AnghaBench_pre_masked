
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_fixture {int image; int mcache; } ;
struct ptunit_result {int dummy; } ;
struct pt_mapped_section {int dummy; } ;


 int FUNC_0 (int *,struct pt_mapped_section const**,int *,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct pt_mapped_section const*) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct test_fixture *VAR_1)
{
 const struct pt_mapped_section *VAR_2;
 int VAR_3;

 VAR_2 = ((void*)0);

 VAR_3 = FUNC_0(&VAR_1->mcache, &VAR_2, &VAR_1->image, 0ull);
 FUNC_1(VAR_3, -VAR_0);
 FUNC_2(VAR_2);

 return FUNC_3();
}
