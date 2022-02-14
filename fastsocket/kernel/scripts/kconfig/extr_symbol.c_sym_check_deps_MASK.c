
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int flags; char* name; TYPE_2__* prop; } ;
struct property {int dummy; } ;
struct TYPE_4__ {int lineno; TYPE_1__* file; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct symbol* FUNC_1 (struct property*) ;
 int VAR_2 ;
 struct symbol* FUNC_2 (struct symbol*) ;
 struct symbol* FUNC_3 (struct symbol*) ;
 struct property* FUNC_4 (struct symbol*) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (struct symbol*) ;
 int VAR_3 ;

struct symbol *FUNC_7(struct symbol *VAR_4)
{
 struct symbol *VAR_5;
 struct property *VAR_6;

 if (VAR_4->flags & VAR_0) {
  FUNC_0(VAR_2, "%s:%d:error: found recursive dependency: %s",
          VAR_4->prop->file->name, VAR_4->prop->lineno,
   VAR_4->name ? VAR_4->name : "<choice>");
  return VAR_4;
 }
 if (VAR_4->flags & VAR_1)
  return ((void*)0);

 if (FUNC_6(VAR_4)) {

  VAR_6 = FUNC_4(VAR_4);
  VAR_5 = FUNC_7(FUNC_1(VAR_6));
 } else if (FUNC_5(VAR_4)) {
  VAR_5 = FUNC_2(VAR_4);
 } else {
  VAR_4->flags |= (VAR_0 | VAR_1);
  VAR_5 = FUNC_3(VAR_4);
  VAR_4->flags &= ~VAR_0;
 }

 if (VAR_5) {
  FUNC_0(VAR_2, " -> %s", VAR_4->name ? VAR_4->name : "<choice>");
  if (VAR_5 == VAR_4) {
   FUNC_0(VAR_2, "\n");
   VAR_3++;
   VAR_5 = ((void*)0);
  }
 }

 return VAR_5;
}
