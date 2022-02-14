
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_9__ {unsigned long long limit; int used; TYPE_2__* lru; } ;
struct iscache_fixture {TYPE_1__** section; TYPE_4__ iscache; } ;
struct TYPE_8__ {struct TYPE_8__* next; int section; } ;
struct TYPE_7__ {unsigned long long size; } ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_4__*,int*,unsigned long long,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct ptunit_result FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_9(struct iscache_fixture *VAR_0)
{
 uint8_t VAR_1[] = { 0xcc, 0xcc, 0xcc };
 int VAR_2, VAR_3;

 VAR_0->iscache.limit = VAR_0->section[0]->size;
 FUNC_8(VAR_0->iscache.used, 0ull);
 FUNC_4(VAR_0->iscache.lru);

 VAR_3 = FUNC_0(&VAR_0->iscache, VAR_0->section[0], 0xa000ull);
 FUNC_3(VAR_3, 0);

 VAR_2 = FUNC_1(&VAR_0->iscache, VAR_1, 2ull, VAR_3, 0xa008ull);
 FUNC_2(VAR_2, 2);

 FUNC_6(VAR_0->iscache.lru);
 FUNC_7(VAR_0->iscache.lru->section, VAR_0->section[0]);
 FUNC_4(VAR_0->iscache.lru->next);
 FUNC_8(VAR_0->iscache.used, VAR_0->section[0]->size);

 return FUNC_5();
}
