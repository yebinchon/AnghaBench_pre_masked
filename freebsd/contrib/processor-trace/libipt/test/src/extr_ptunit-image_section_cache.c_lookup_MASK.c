
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;
struct iscache_fixture {int * section; int iscache; } ;


 int FUNC_0 (int *,int ,unsigned long long) ;
 int FUNC_1 (int *,struct pt_section**,int *,int) ;
 int FUNC_2 (struct pt_section*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (struct pt_section*,int ) ;
 int FUNC_7 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct iscache_fixture *VAR_0)
{
 struct pt_section *VAR_1;
 uint64_t VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0ull);
 FUNC_4(VAR_4, 0);

 VAR_3 = FUNC_1(&VAR_0->iscache, &VAR_1, &VAR_2, VAR_4);
 FUNC_3(VAR_3, 0);
 FUNC_6(VAR_1, VAR_0->section[0]);
 FUNC_7(VAR_2, 0ull);

 VAR_3 = FUNC_2(VAR_1);
 FUNC_3(VAR_3, 0);

 return FUNC_5();
}
