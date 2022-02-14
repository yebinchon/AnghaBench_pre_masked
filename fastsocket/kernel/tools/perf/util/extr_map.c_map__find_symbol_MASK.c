
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int symbol_filter_t ;
struct symbol {int dummy; } ;
struct map {int type; int dso; } ;


 struct symbol* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct map*,int ) ;

struct symbol *FUNC_2(struct map *VAR_0, u64 VAR_1,
    symbol_filter_t VAR_2)
{
 if (FUNC_1(VAR_0, VAR_2) < 0)
  return ((void*)0);

 return FUNC_0(VAR_0->dso, VAR_0->type, VAR_1);
}
