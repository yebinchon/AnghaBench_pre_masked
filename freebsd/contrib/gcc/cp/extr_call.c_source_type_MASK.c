
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {TYPE_2__* next; } ;
struct TYPE_5__ {scalar_t__ kind; int type; TYPE_1__ u; } ;
typedef TYPE_2__ conversion ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static tree
FUNC_1 (conversion *VAR_3)
{
  for (;; VAR_3 = VAR_3->u.next)
    {
      if (VAR_3->kind == VAR_2
   || VAR_3->kind == VAR_0
   || VAR_3->kind == VAR_1)
 return VAR_3->type;
    }
  FUNC_0 ();
}
