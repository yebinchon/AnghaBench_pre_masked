
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_11__ {unsigned long long limit; int used; TYPE_2__* lru; } ;
struct iscache_fixture {TYPE_1__** section; TYPE_6__ iscache; } ;
struct TYPE_10__ {struct TYPE_10__* next; int section; } ;
struct TYPE_9__ {unsigned long long size; } ;


 int FUNC_0 (TYPE_6__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_6__*,unsigned long long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 struct ptunit_result FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_11(struct iscache_fixture *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->iscache.limit = VAR_0->section[0]->size + VAR_0->section[1]->size;
 FUNC_10(VAR_0->iscache.used, 0ull);
 FUNC_6(VAR_0->iscache.lru);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_5(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[1], 0xa000ull);
 FUNC_5(VAR_2, 0);

 VAR_1 = FUNC_2(VAR_0->section[0]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_3(VAR_0->section[0]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_2(VAR_0->section[1]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_3(VAR_0->section[1]);
 FUNC_4(VAR_1, 0);

 VAR_1 = FUNC_1(&VAR_0->iscache,
          VAR_0->section[0]->size +
          VAR_0->section[1]->size - 1);
 FUNC_4(VAR_1, 0);

 FUNC_8(VAR_0->iscache.lru);
 FUNC_9(VAR_0->iscache.lru->section, VAR_0->section[1]);
 FUNC_6(VAR_0->iscache.lru->next);
 FUNC_10(VAR_0->iscache.used, VAR_0->section[1]->size);

 return FUNC_7();
}
