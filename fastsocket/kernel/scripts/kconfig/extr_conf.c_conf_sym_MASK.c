
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tristate ;
struct symbol {char* name; } ;
struct menu {TYPE_1__* prompt; struct symbol* sym; } ;
struct TYPE_2__ {int text; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct symbol*,int ) ;
 char* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_2 (struct menu*) ;


 int FUNC_3 (struct menu*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int*,char*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (struct symbol*) ;
 int FUNC_9 (struct symbol*) ;
 int FUNC_10 (struct symbol*) ;
 scalar_t__ FUNC_11 (struct symbol*,int) ;
 scalar_t__ FUNC_12 (struct symbol*,int const) ;


__attribute__((used)) static int FUNC_13(struct menu *VAR_2)
{
 struct symbol *VAR_3 = VAR_2->sym;
 int VAR_4;
 tristate VAR_5, VAR_6;

 while (1) {
  FUNC_4("%*s%s ", VAR_0 - 1, "", FUNC_0(VAR_2->prompt->text));
  if (VAR_3->name)
   FUNC_4("(%s) ", VAR_3->name);
  VAR_4 = FUNC_10(VAR_3);
  FUNC_5('[');
  VAR_5 = FUNC_9(VAR_3);
  switch (VAR_5) {
  case 129:
   FUNC_5('N');
   break;
  case 130:
   FUNC_5('M');
   break;
  case 128:
   FUNC_5('Y');
   break;
  }
  if (VAR_5 != 129 && FUNC_12(VAR_3, 129))
   FUNC_4("/n");
  if (VAR_5 != 130 && FUNC_12(VAR_3, 130))
   FUNC_4("/m");
  if (VAR_5 != 128 && FUNC_12(VAR_3, 128))
   FUNC_4("/y");
  if (FUNC_2(VAR_2))
   FUNC_4("/?");
  FUNC_4("] ");
  if (!FUNC_1(VAR_3, FUNC_8(VAR_3)))
   return 0;
  FUNC_7(VAR_1);

  switch (VAR_1[0]) {
  case 'n':
  case 'N':
   VAR_6 = 129;
   if (!VAR_1[1] || !FUNC_6(&VAR_1[1], "o"))
    break;
   continue;
  case 'm':
  case 'M':
   VAR_6 = 130;
   if (!VAR_1[1])
    break;
   continue;
  case 'y':
  case 'Y':
   VAR_6 = 128;
   if (!VAR_1[1] || !FUNC_6(&VAR_1[1], "es"))
    break;
   continue;
  case 0:
   VAR_6 = VAR_5;
   break;
  case '?':
   goto help;
  default:
   continue;
  }
  if (FUNC_11(VAR_3, VAR_6))
   return 0;
help:
  FUNC_3(VAR_2);
 }
}
