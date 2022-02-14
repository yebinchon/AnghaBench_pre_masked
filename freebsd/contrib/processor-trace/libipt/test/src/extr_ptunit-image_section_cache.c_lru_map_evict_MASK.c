
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_10__ {unsigned long long limit; int used; TYPE_2__* lru; } ;
struct iscache_fixture {TYPE_1__** section; TYPE_6__ iscache; } ;
struct TYPE_9__ {struct TYPE_9__* next; int section; } ;
struct TYPE_8__ {unsigned long long size; } ;


 int FUNC_0 (TYPE_6__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 struct ptunit_result FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_10(struct iscache_fixture *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_0->iscache.limit = VAR_0->section[0]->size +
  VAR_0->section[1]->size - 1;
 FUNC_9(VAR_0->iscache.used, 0ull);
 FUNC_5(VAR_0->iscache.lru);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_4(VAR_2, 0);

 VAR_2 = FUNC_0(&VAR_0->iscache, VAR_0->section[1], 0xa000ull);
 FUNC_4(VAR_2, 0);

 VAR_1 = FUNC_1(VAR_0->section[0]);
 FUNC_3(VAR_1, 0);

 VAR_1 = FUNC_2(VAR_0->section[0]);
 FUNC_3(VAR_1, 0);

 VAR_1 = FUNC_1(VAR_0->section[1]);
 FUNC_3(VAR_1, 0);

 VAR_1 = FUNC_2(VAR_0->section[1]);
 FUNC_3(VAR_1, 0);

 FUNC_7(VAR_0->iscache.lru);
 FUNC_8(VAR_0->iscache.lru->section, VAR_0->section[1]);
 FUNC_5(VAR_0->iscache.lru->next);
 FUNC_9(VAR_0->iscache.used, VAR_0->section[1]->size);

 return FUNC_6();
}
