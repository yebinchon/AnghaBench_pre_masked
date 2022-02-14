
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;
struct iscache_fixture {int iscache; int * section; } ;


 int FUNC_0 (int *,int ,unsigned long long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pt_section**,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 struct ptunit_result FUNC_5 () ;

__attribute__((used)) static struct ptunit_result FUNC_6(struct iscache_fixture *VAR_1)
{
 struct pt_section *VAR_2;
 uint64_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(&VAR_1->iscache, VAR_1->section[0], 0ull);
 FUNC_4(VAR_5, 0);

 VAR_4 = FUNC_1(&VAR_1->iscache);
 FUNC_3(VAR_4, 0);

 VAR_4 = FUNC_2(&VAR_1->iscache, &VAR_2, &VAR_3, VAR_5);
 FUNC_3(VAR_4, -VAR_0);

 return FUNC_5();
}
