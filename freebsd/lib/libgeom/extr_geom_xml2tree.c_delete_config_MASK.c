
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gconfig {struct gconfig* lg_val; struct gconfig* lg_name; } ;
struct gconf {int dummy; } ;


 struct gconfig* FUNC_0 (struct gconf*) ;
 int FUNC_1 (struct gconfig*,int ) ;
 int FUNC_2 (struct gconfig*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct gconf *VAR_1)
{
 struct gconfig *VAR_2;

 for (;;) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 == ((void*)0))
   return;
  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2->lg_name);
  FUNC_2(VAR_2->lg_val);
  FUNC_2(VAR_2);
 }
}
