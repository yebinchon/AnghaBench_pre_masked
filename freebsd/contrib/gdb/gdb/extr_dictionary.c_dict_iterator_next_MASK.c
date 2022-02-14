
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct dict_iterator {int dummy; } ;
struct TYPE_2__ {struct symbol* (* iterator_next ) (struct dict_iterator*) ;} ;


 int FUNC_0 (struct dict_iterator*) ;
 TYPE_1__* FUNC_1 (int ) ;
 struct symbol* FUNC_2 (struct dict_iterator*) ;

struct symbol *
FUNC_3 (struct dict_iterator *VAR_0)
{
  return (FUNC_1 (FUNC_0 (VAR_0)))
    ->iterator_next (VAR_0);
}
