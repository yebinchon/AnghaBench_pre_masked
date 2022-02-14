
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int symbol_filter_t ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct machine {int kmaps; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 struct symbol* FUNC_0 (int *,int,int ,struct map**,int ) ;

__attribute__((used)) static inline
struct symbol *FUNC_1(struct machine *VAR_0,
        enum map_type VAR_1, u64 VAR_2,
        struct map **VAR_3,
        symbol_filter_t VAR_4)
{
 return FUNC_0(&VAR_0->kmaps, VAR_1, VAR_2,
           VAR_3, VAR_4);
}
