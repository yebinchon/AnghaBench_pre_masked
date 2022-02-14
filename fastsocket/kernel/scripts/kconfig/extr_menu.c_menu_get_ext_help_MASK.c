
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ name; } ;
struct menu {struct symbol* sym; } ;
struct gstr {int dummy; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct gstr*,struct symbol*) ;
 int FUNC_2 (struct menu*) ;
 scalar_t__ FUNC_3 (struct menu*) ;
 char* VAR_0 ;
 int FUNC_4 (struct gstr*,char*) ;
 int FUNC_5 (struct gstr*,char*,scalar_t__) ;

void FUNC_6(struct menu *VAR_1, struct gstr *VAR_2)
{
 struct symbol *VAR_3 = VAR_1->sym;

 if (FUNC_3(VAR_1)) {
  if (VAR_3->name) {
   FUNC_5(VAR_2, "CONFIG_%s:\n\n", VAR_3->name);
   FUNC_4(VAR_2, FUNC_0(FUNC_2(VAR_1)));
   FUNC_4(VAR_2, "\n");
  }
 } else {
  FUNC_4(VAR_2, VAR_0);
 }
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);
}
