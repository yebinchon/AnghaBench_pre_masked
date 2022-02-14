
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tables; } ;
struct net {TYPE_1__ xt; } ;
struct mutex {int dummy; } ;
struct ebt_table {int dummy; } ;


 size_t VAR_0 ;
 struct ebt_table* FUNC_0 (int *,char const*,char*,int*,struct mutex*) ;

__attribute__((used)) static inline struct ebt_table *
FUNC_1(struct net *VAR_1, const char *VAR_2, int *VAR_3,
  struct mutex *VAR_4)
{
 return FUNC_0(&VAR_1->xt.tables[VAR_0], VAR_2,
    "ebtable_", VAR_3, VAR_4);
}
