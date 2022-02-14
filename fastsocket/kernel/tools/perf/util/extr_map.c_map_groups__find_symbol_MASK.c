
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int symbol_filter_t ;
struct symbol {int dummy; } ;
struct map_groups {int dummy; } ;
struct map {int (* map_ip ) (struct map*,int ) ;} ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct symbol* FUNC_0 (struct map*,int ,int ) ;
 struct map* FUNC_1 (struct map_groups*,int,int ) ;
 int FUNC_2 (struct map*,int ) ;

struct symbol *FUNC_3(struct map_groups *VAR_0,
           enum map_type VAR_1, u64 VAR_2,
           struct map **VAR_3,
           symbol_filter_t VAR_4)
{
 struct map *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_5 != ((void*)0)) {
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_5;
  return FUNC_0(VAR_5, VAR_5->map_ip(VAR_5, VAR_2), VAR_4);
 }

 return ((void*)0);
}
