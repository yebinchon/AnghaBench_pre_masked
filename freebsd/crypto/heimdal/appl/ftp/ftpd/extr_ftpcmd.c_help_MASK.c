
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tab {char* name; int help; scalar_t__ implemented; } ;
typedef int buf ;


 struct tab* FUNC_0 (struct tab*,char*) ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 struct tab* VAR_0 ;
 int FUNC_3 (char*,int,char*,char*,char) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct tab *VAR_1, char *VAR_2)
{
 struct tab *VAR_3;
 int VAR_4, VAR_5;
 char *VAR_6;
 char VAR_7[1024];

 if (VAR_1 == VAR_0)
  VAR_6 = "SITE ";
 else
  VAR_6 = "";
 VAR_4 = 0, VAR_5 = 0;
 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++) {
  int VAR_8 = FUNC_6(VAR_3->name);

  if (VAR_8 > VAR_4)
   VAR_4 = VAR_8;
  VAR_5++;
 }
 VAR_4 = (VAR_4 + 8) &~ 7;
 if (VAR_2 == 0) {
  int VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;

  FUNC_1(214, "The following %scommands are recognized %s.",
      VAR_6, "(* =>'s unimplemented)");
  VAR_12 = 76 / VAR_4;
  if (VAR_12 == 0)
   VAR_12 = 1;
  VAR_13 = (VAR_5 + VAR_12 - 1) / VAR_12;
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
      FUNC_5 (VAR_7, "   ", sizeof(VAR_7));
      for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   VAR_3 = VAR_1 + VAR_10 * VAR_13 + VAR_9;
   FUNC_3 (VAR_7 + FUNC_6(VAR_7),
      sizeof(VAR_7) - FUNC_6(VAR_7),
      "%s%c",
      VAR_3->name,
      VAR_3->implemented ? ' ' : '*');
   if (VAR_3 + VAR_13 >= &VAR_1[VAR_5])
       break;
   VAR_11 = FUNC_6(VAR_3->name) + 1;
   while (VAR_11 < VAR_4) {
       FUNC_4 (VAR_7,
          " ",
          sizeof(VAR_7));
       VAR_11++;
   }
      }
      FUNC_1(214, "%s", VAR_7);
  }
  FUNC_2(214, "Direct comments to kth-krb-bugs@pdc.kth.se");
  return;
 }
 FUNC_7(VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == (struct tab *)0) {
  FUNC_2(502, "Unknown command %s.", VAR_2);
  return;
 }
 if (VAR_3->implemented)
  FUNC_2(214, "Syntax: %s%s %s", VAR_6, VAR_3->name, VAR_3->help);
 else
  FUNC_2(214, "%s%-*s\t%s; unimplemented.", VAR_6, VAR_4,
      VAR_3->name, VAR_3->help);
}
