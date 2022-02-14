
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct name_cache {size_t size; TYPE_1__* cache; } ;
struct TYPE_2__ {struct name_cache* name; } ;


 int FUNC_0 (struct name_cache*) ;

__attribute__((used)) static void
FUNC_1(struct name_cache *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 != ((void*)0)) {
  for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   FUNC_0(VAR_0->cache[VAR_1].name);
  FUNC_0(VAR_0);
 }
}
