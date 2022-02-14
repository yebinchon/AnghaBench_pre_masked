
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_section {int dummy; } ;
struct iscache_fixture {int iscache; } ;
typedef int section ;


 int FUNC_0 (struct pt_section*,int ,int) ;
 int FUNC_1 (int *,struct pt_section*,unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct iscache_fixture *VAR_1)
{
 struct pt_section VAR_2;
 int VAR_3;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 VAR_3 = FUNC_1(&VAR_1->iscache, &VAR_2, 0ull);
 FUNC_2(VAR_3, -VAR_0);

 return FUNC_3();
}
