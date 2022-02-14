
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccupdate_struct {struct array_cache** new; TYPE_1__* cachep; } ;
struct array_cache {int dummy; } ;
struct TYPE_2__ {struct array_cache** array; } ;


 int FUNC_0 () ;
 struct array_cache* FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ccupdate_struct *VAR_1 = VAR_0;
 struct array_cache *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_1(VAR_1->cachep);

 VAR_1->cachep->array[FUNC_2()] = VAR_1->new[FUNC_2()];
 VAR_1->new[FUNC_2()] = VAR_2;
}
