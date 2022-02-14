
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {char const* perf; scalar_t__ json; } ;
typedef int jsmntok_t ;


 scalar_t__ FUNC_0 (char*,int *,scalar_t__) ;

__attribute__((used)) static const char *FUNC_1(struct map *VAR_0, char *VAR_1, jsmntok_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].json; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_2, VAR_0[VAR_3].json))
   return VAR_0[VAR_3].perf;
 }
 return ((void*)0);
}
