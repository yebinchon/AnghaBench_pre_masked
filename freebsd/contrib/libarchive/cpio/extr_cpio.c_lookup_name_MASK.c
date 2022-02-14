
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct name_cache {int size; TYPE_1__* cache; int hits; int probes; } ;
struct cpio {int dummy; } ;
typedef int id_t ;
typedef int asnum ;
struct TYPE_2__ {char const* name; int id; } ;


 int VAR_0 ;
 struct name_cache* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,unsigned int) ;
 char const* FUNC_4 (char const*) ;

__attribute__((used)) static const char *
FUNC_5(struct cpio *VAR_2, struct name_cache **VAR_3,
    int (*VAR_4)(struct cpio *, const char **, id_t), id_t VAR_5)
{
 char VAR_6[16];
 struct name_cache *VAR_7;
 const char *VAR_8;
 int VAR_9;


 if (*VAR_3 == ((void*)0)) {
  *VAR_3 = FUNC_0(1, sizeof(struct name_cache));
  if (*VAR_3 == ((void*)0))
   FUNC_2(1, VAR_0, "No more memory");
  (*VAR_3)->size = VAR_1;
 }

 VAR_7 = *VAR_3;
 VAR_7->probes++;

 VAR_9 = VAR_5 % VAR_7->size;
 if (VAR_7->cache[VAR_9].name != ((void*)0)) {
  if (VAR_7->cache[VAR_9].id == VAR_5) {
   VAR_7->hits++;
   return (VAR_7->cache[VAR_9].name);
  }
  FUNC_1(VAR_7->cache[VAR_9].name);
  VAR_7->cache[VAR_9].name = ((void*)0);
 }

 if (VAR_4(VAR_2, &VAR_8, VAR_5)) {

  FUNC_3(VAR_6, sizeof(VAR_6), "%u", (unsigned)VAR_5);
  VAR_8 = VAR_6;
 }

 VAR_7->cache[VAR_9].name = FUNC_4(VAR_8);
 if (VAR_7->cache[VAR_9].name != ((void*)0)) {
  VAR_7->cache[VAR_9].id = VAR_5;
  return (VAR_7->cache[VAR_9].name);
 }






 return (((void*)0));
}
