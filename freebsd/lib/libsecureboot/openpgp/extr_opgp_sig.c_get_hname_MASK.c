
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_alg_map {int halg; char const* hname; } ;


 struct hash_alg_map* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_1)
{
 struct hash_alg_map *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->halg > 0; VAR_2++) {
  if (VAR_2->halg == VAR_1)
   return (VAR_2->hname);
 }
 return (((void*)0));
}
