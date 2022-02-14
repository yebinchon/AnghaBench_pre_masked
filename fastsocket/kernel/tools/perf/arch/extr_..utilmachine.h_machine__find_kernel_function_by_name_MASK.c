
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct machine {int kmaps; } ;


 struct symbol* FUNC_0 (int *,char const*,struct map**,int ) ;

__attribute__((used)) static inline
struct symbol *FUNC_1(struct machine *VAR_0,
           const char *VAR_1,
           struct map **VAR_2,
           symbol_filter_t VAR_3)
{
 return FUNC_0(&VAR_0->kmaps, VAR_1, VAR_2,
       VAR_3);
}
