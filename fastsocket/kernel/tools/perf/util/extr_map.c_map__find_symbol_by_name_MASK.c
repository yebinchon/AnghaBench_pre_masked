
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct symbol {int dummy; } ;
struct map {int type; int dso; } ;


 struct symbol* FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct map*,int ) ;

struct symbol *FUNC_4(struct map *VAR_0, const char *VAR_1,
     symbol_filter_t VAR_2)
{
 if (FUNC_3(VAR_0, VAR_2) < 0)
  return ((void*)0);

 if (!FUNC_2(VAR_0->dso, VAR_0->type))
  FUNC_1(VAR_0->dso, VAR_0->type);

 return FUNC_0(VAR_0->dso, VAR_0->type, VAR_1);
}
