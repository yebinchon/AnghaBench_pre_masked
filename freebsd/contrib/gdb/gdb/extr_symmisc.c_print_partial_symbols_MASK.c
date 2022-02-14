
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct partial_symbol {int dummy; } ;


 int FUNC_0 (struct partial_symbol*) ;
 int FUNC_1 (struct partial_symbol*) ;
 int * FUNC_2 (struct partial_symbol*) ;
 int FUNC_3 (struct partial_symbol*) ;
 int FUNC_4 (struct partial_symbol*) ;


 int FUNC_5 (struct ui_file*,char*,...) ;
 int FUNC_6 (char*,struct ui_file*) ;
 int FUNC_7 (int ,int,struct ui_file*) ;

__attribute__((used)) static void
FUNC_8 (struct partial_symbol **VAR_0, int VAR_1, char *VAR_2,
         struct ui_file *VAR_3)
{
  FUNC_5 (VAR_3, "  %s partial symbols:\n", VAR_2);
  while (VAR_1-- > 0)
    {
      FUNC_5 (VAR_3, "    `%s'", FUNC_0 (*VAR_0));
      if (FUNC_2 (*VAR_0) != ((void*)0))
 {
   FUNC_5 (VAR_3, "  `%s'", FUNC_2 (*VAR_0));
 }
      FUNC_6 (", ", VAR_3);
      switch (FUNC_3 (*VAR_0))
 {
 case 129:
   FUNC_6 ("undefined domain, ", VAR_3);
   break;
 case 128:

   break;
 case 130:
   FUNC_6 ("struct domain, ", VAR_3);
   break;
 case 150:
   FUNC_6 ("label domain, ", VAR_3);
   break;
 default:
   FUNC_6 ("<invalid domain>, ", VAR_3);
   break;
 }
      switch (FUNC_1 (*VAR_0))
 {
 case 132:
   FUNC_6 ("undefined", VAR_3);
   break;
 case 145:
   FUNC_6 ("constant int", VAR_3);
   break;
 case 134:
   FUNC_6 ("static", VAR_3);
   break;
 case 143:
   FUNC_6 ("extern global", VAR_3);
   break;
 case 137:
   FUNC_6 ("register", VAR_3);
   break;
 case 149:
   FUNC_6 ("pass by value", VAR_3);
   break;
 case 138:
   FUNC_6 ("pass by reference", VAR_3);
   break;
 case 136:
   FUNC_6 ("register parameter", VAR_3);
   break;
 case 135:
   FUNC_6 ("register address parameter", VAR_3);
   break;
 case 141:
   FUNC_6 ("stack parameter", VAR_3);
   break;
 case 133:
   FUNC_6 ("type", VAR_3);
   break;
 case 142:
   FUNC_6 ("label", VAR_3);
   break;
 case 148:
   FUNC_6 ("function", VAR_3);
   break;
 case 144:
   FUNC_6 ("constant bytes", VAR_3);
   break;
 case 140:
   FUNC_6 ("shuffled arg", VAR_3);
   break;
 case 131:
   FUNC_6 ("unresolved", VAR_3);
   break;
 case 139:
   FUNC_6 ("optimized out", VAR_3);
   break;
 case 147:
 case 146:
   FUNC_6 ("computed at runtime", VAR_3);
   break;
 default:
   FUNC_6 ("<invalid location>", VAR_3);
   break;
 }
      FUNC_6 (", ", VAR_3);
      FUNC_7 (FUNC_4 (*VAR_0), 1, VAR_3);
      FUNC_5 (VAR_3, "\n");
      VAR_0++;
    }
}
