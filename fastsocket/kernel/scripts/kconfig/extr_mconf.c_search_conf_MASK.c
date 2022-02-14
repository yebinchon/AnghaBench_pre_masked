
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct gstr {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* VAR_0 ;
 int FUNC_2 (int ,int ,int,int,char*) ;
 int FUNC_3 (struct symbol**) ;
 struct gstr FUNC_4 (struct symbol**) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct gstr*) ;
 int FUNC_8 (struct gstr*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 struct symbol** FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
 struct symbol **VAR_2;
 struct gstr VAR_3;
 char *VAR_4;
 int VAR_5;
again:
 FUNC_1();
 VAR_5 = FUNC_2(FUNC_0("Search Configuration Parameter"),
         FUNC_0("Enter CONFIG_ (sub)string to search for "
    "(with or without \"CONFIG\")"),
         10, 75, "");
 switch (VAR_5) {
 case 0:
  break;
 case 1:
  FUNC_5(FUNC_0("Search Configuration"), VAR_1);
  goto again;
 default:
  return;
 }


 VAR_4 = VAR_0;
 if (FUNC_9(VAR_0, "CONFIG_", 7) == 0)
  VAR_4 += 7;

 VAR_2 = FUNC_10(VAR_4);
 VAR_3 = FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(FUNC_0("Search Results"), FUNC_8(&VAR_3), 0, 0);
 FUNC_7(&VAR_3);
}
