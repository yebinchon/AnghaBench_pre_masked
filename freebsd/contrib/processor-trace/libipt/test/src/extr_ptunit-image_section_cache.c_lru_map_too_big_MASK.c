
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_6__ {int used; int lru; scalar_t__ limit; } ;
struct iscache_fixture {TYPE_3__ iscache; TYPE_1__** section; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_8(struct iscache_fixture *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->iscache.limit = VAR_0->section[0]->size - 1;
 FUNC_7(VAR_0->iscache.used, 0ull);
 FUNC_5(VAR_0->iscache.lru);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_4(VAR_2, 0);

 VAR_1 = FUNC_1(VAR_0->section[0]);
 FUNC_3(VAR_1, 0);

 VAR_1 = FUNC_2(VAR_0->section[0]);
 FUNC_3(VAR_1, 0);

 FUNC_5(VAR_0->iscache.lru);
 FUNC_7(VAR_0->iscache.used, 0ull);

 return FUNC_6();
}
