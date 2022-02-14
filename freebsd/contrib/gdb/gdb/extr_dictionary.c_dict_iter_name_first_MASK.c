
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct dictionary {int dummy; } ;
struct dict_iterator {int dummy; } ;
struct TYPE_2__ {struct symbol* (* iter_name_first ) (struct dictionary const*,char const*,struct dict_iterator*) ;} ;


 TYPE_1__* FUNC_0 (struct dictionary const*) ;
 struct symbol* FUNC_1 (struct dictionary const*,char const*,struct dict_iterator*) ;

struct symbol *
FUNC_2 (const struct dictionary *VAR_0,
        const char *VAR_1,
        struct dict_iterator *VAR_2)
{
  return (FUNC_0 (VAR_0))->iter_name_first (VAR_0, VAR_1, VAR_2);
}
