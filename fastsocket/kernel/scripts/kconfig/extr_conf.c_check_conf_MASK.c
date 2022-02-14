
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; } ;
struct menu {struct menu* next; struct menu* list; struct symbol* sym; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct menu*) ;
 int FUNC_4 (struct menu*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*) ;
 scalar_t__ FUNC_8 (struct symbol*) ;
 scalar_t__ FUNC_9 (struct symbol*) ;
 int FUNC_10 (struct symbol*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_11(struct menu *VAR_8)
{
 struct symbol *VAR_9;
 struct menu *VAR_10;

 if (!FUNC_4(VAR_8))
  return;

 VAR_9 = VAR_8->sym;
 if (VAR_9 && !FUNC_7(VAR_9)) {
  if (FUNC_8(VAR_9) ||
      (FUNC_9(VAR_9) && FUNC_6(VAR_9) == VAR_7)) {
   if (VAR_3 == VAR_1 ||
       VAR_3 == VAR_2) {
    if (VAR_3 == VAR_1 &&
        VAR_9->name && !FUNC_10(VAR_9)) {
     FUNC_2(VAR_6,"CONFIG_%s\n",VAR_9->name);
     ++VAR_4;
    }
   } else {
   if (!VAR_0++)
    FUNC_5(FUNC_0("*\n* Restart config...\n*\n"));
   VAR_5 = FUNC_3(VAR_8);
   FUNC_1(VAR_5);
  }
 }
 }

 for (VAR_10 = VAR_8->list; VAR_10; VAR_10 = VAR_10->next)
  FUNC_11(VAR_10);
}
