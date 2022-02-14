
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; } ;
struct property {char* text; TYPE_1__ visible; struct expr* expr; TYPE_2__* menu; } ;
struct expr {int dummy; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;
struct TYPE_4__ {struct property* prompt; int sym; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct expr*) ;
 struct property* FUNC_2 (int,int ) ;
 int FUNC_3 (struct property*,char*) ;

struct property *FUNC_4(enum prop_type VAR_1, char *VAR_2, struct expr *VAR_3, struct expr *VAR_4)
{
 struct property *VAR_5 = FUNC_2(VAR_1, VAR_0->sym);

 VAR_5->menu = VAR_0;
 VAR_5->expr = VAR_3;
 VAR_5->visible.expr = FUNC_1(VAR_4);

 if (VAR_2) {
  if (FUNC_0(*VAR_2)) {
   FUNC_3(VAR_5, "leading whitespace ignored");
   while (FUNC_0(*VAR_2))
    VAR_2++;
  }
  if (VAR_0->prompt)
   FUNC_3(VAR_5, "prompt redefined");
  VAR_0->prompt = VAR_5;
 }
 VAR_5->text = VAR_2;

 return VAR_5;
}
