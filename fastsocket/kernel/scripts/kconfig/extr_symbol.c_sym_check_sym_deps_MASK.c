
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int expr; } ;
struct symbol {struct property* prop; TYPE_2__ rev_dep; } ;
struct TYPE_3__ {int expr; } ;
struct property {scalar_t__ type; int expr; TYPE_1__ visible; struct property* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct symbol* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct symbol*) ;

__attribute__((used)) static struct symbol *FUNC_2(struct symbol *VAR_3)
{
 struct symbol *VAR_4;
 struct property *VAR_5;

 VAR_4 = FUNC_0(VAR_3->rev_dep.expr);
 if (VAR_4)
  return VAR_4;

 for (VAR_5 = VAR_3->prop; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->type == VAR_0 || VAR_5->type == VAR_2)
   continue;
  VAR_4 = FUNC_0(VAR_5->visible.expr);
  if (VAR_4)
   break;
  if (VAR_5->type != VAR_1 || FUNC_1(VAR_3))
   continue;
  VAR_4 = FUNC_0(VAR_5->expr);
  if (VAR_4)
   break;
 }

 return VAR_4;
}
