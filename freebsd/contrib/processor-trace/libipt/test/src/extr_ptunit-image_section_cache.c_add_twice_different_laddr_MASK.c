
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct iscache_fixture {TYPE_1__** section; int iscache; } ;
struct TYPE_2__ {int acount; int ucount; } ;


 int FUNC_0 (int *,TYPE_1__*,unsigned long long) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result
FUNC_5(struct iscache_fixture *VAR_0)
{
 int VAR_1[2];

 VAR_1[0] = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0ull);
 FUNC_2(VAR_1[0], 0);

 VAR_1[1] = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 1ull);
 FUNC_2(VAR_1[1], 0);


 FUNC_3(VAR_1[1], VAR_1[0]);


 FUNC_1(VAR_0->section[0]->ucount, 3);
 FUNC_1(VAR_0->section[0]->acount, 2);

 return FUNC_4();
}
