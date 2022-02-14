
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct name_cache {int size; TYPE_1__* cache; int hits; int probes; } ;
typedef char* lookup_fn ;
typedef int id_t ;
struct TYPE_2__ {char const* name; int id; } ;


 char const* VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static const char *
FUNC_1(struct name_cache *VAR_1,
    const char * (*VAR_2)(struct name_cache *, id_t), id_t VAR_3)
{
 const char *VAR_4;
 int VAR_5;


 VAR_1->probes++;

 VAR_5 = VAR_3 % VAR_1->size;
 if (VAR_1->cache[VAR_5].name != ((void*)0)) {
  if (VAR_1->cache[VAR_5].id == VAR_3) {
   VAR_1->hits++;
   if (VAR_1->cache[VAR_5].name == VAR_0)
    return (((void*)0));
   return (VAR_1->cache[VAR_5].name);
  }
  if (VAR_1->cache[VAR_5].name != VAR_0)
   FUNC_0((void *)(uintptr_t)VAR_1->cache[VAR_5].name);
  VAR_1->cache[VAR_5].name = ((void*)0);
 }

 VAR_4 = (VAR_2)(VAR_1, VAR_3);
 if (VAR_4 == ((void*)0)) {

  VAR_1->cache[VAR_5].name = VAR_0;
  VAR_1->cache[VAR_5].id = VAR_3;
  return (((void*)0));
 }

 VAR_1->cache[VAR_5].name = VAR_4;
 VAR_1->cache[VAR_5].id = VAR_3;
 return (VAR_1->cache[VAR_5].name);
}
