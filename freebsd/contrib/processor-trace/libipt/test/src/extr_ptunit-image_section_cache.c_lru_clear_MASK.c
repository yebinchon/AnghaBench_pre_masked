
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_7__ {int used; int lru; int limit; } ;
struct iscache_fixture {TYPE_3__ iscache; TYPE_1__** section; } ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 struct ptunit_result FUNC_7 () ;
 int FUNC_8 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_9(struct iscache_fixture *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->iscache.limit = VAR_0->section[0]->size;
 FUNC_8(VAR_0->iscache.used, 0ull);
 FUNC_6(VAR_0->iscache.lru);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_5(VAR_2, 0);

 VAR_1 = FUNC_2(VAR_0->section[0]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_3(VAR_0->section[0]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_1(&VAR_0->iscache);
 FUNC_4(VAR_1, 0);

 FUNC_6(VAR_0->iscache.lru);
 FUNC_8(VAR_0->iscache.used, 0ull);

 return FUNC_7();
}
