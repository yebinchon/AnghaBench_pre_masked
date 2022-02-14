
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct dictionary {int dummy; } ;
struct TYPE_2__ {int (* add_symbol ) (struct dictionary*,struct symbol*) ;} ;


 TYPE_1__* FUNC_0 (struct dictionary*) ;
 int FUNC_1 (struct dictionary*,struct symbol*) ;

void
FUNC_2 (struct dictionary *VAR_0, struct symbol *VAR_1)
{
  (FUNC_0 (VAR_0))->add_symbol (VAR_0, VAR_1);
}
