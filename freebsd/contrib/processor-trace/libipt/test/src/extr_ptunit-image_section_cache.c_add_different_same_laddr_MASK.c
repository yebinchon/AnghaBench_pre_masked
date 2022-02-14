
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct iscache_fixture {int * section; int iscache; } ;


 int FUNC_0 (int *,int ,unsigned long long) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result
FUNC_4(struct iscache_fixture *VAR_0)
{
 int VAR_1[2];

 VAR_1[0] = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0ull);
 FUNC_1(VAR_1[0], 0);

 VAR_1[1] = FUNC_0(&VAR_0->iscache, VAR_0->section[1], 0ull);
 FUNC_1(VAR_1[1], 0);


 FUNC_2(VAR_1[1], VAR_1[0]);

 return FUNC_3();
}
