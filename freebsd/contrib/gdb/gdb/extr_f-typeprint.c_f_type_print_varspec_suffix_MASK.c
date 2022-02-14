
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct type*) ;
 int const FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*,int*) ;
 int FUNC_5 (struct type*,int*) ;
 int FUNC_6 (struct ui_file*,char*,...) ;

__attribute__((used)) static void
FUNC_7 (struct type *VAR_3, struct ui_file *VAR_4,
        int VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8, VAR_9;
  int VAR_10 = 0;
  static int VAR_11 = 0;
  int VAR_12;

  if (VAR_3 == 0)
    return;

  if (FUNC_2 (VAR_3) && VAR_5 <= 0)
    return;

  VAR_2;

  switch (FUNC_1 (VAR_3))
    {
    case 149:
      VAR_11++;

      if (VAR_11 == 1)
 FUNC_6 (VAR_4, "(");

      if (FUNC_1 (FUNC_3 (VAR_3)) == 149)
 FUNC_7 (FUNC_3 (VAR_3), VAR_4, 0, 0, 0);

      VAR_12 = FUNC_4 (VAR_3, &VAR_9);

      VAR_10 = 0;

      if (VAR_12 == VAR_1)
 FUNC_6 (VAR_4, "???");
      else if (VAR_9 == 1)
 VAR_10 = 1;
      else
 FUNC_6 (VAR_4, "%d", VAR_9);

      if (VAR_10)
 VAR_10 = 0;
      else
 FUNC_6 (VAR_4, ":");




      if (FUNC_0 (VAR_3) == VAR_0)
 FUNC_6 (VAR_4, "*");
      else
 {
   VAR_12 = FUNC_5 (VAR_3, &VAR_8);

   if (VAR_12 == VAR_1)
     FUNC_6 (VAR_4, "???");
   else
     FUNC_6 (VAR_4, "%d", VAR_8);
 }

      if (FUNC_1 (FUNC_3 (VAR_3)) != 149)
 FUNC_7 (FUNC_3 (VAR_3), VAR_4, 0, 0, 0);
      if (VAR_11 == 1)
 FUNC_6 (VAR_4, ")");
      else
 FUNC_6 (VAR_4, ",");
      VAR_11--;
      break;

    case 137:
    case 135:
      FUNC_7 (FUNC_3 (VAR_3), VAR_4, 0, 1, 0);
      FUNC_6 (VAR_4, ")");
      break;

    case 141:
      FUNC_7 (FUNC_3 (VAR_3), VAR_4, 0,
       VAR_6, 0);
      if (VAR_6)
 FUNC_6 (VAR_4, ")");

      FUNC_6 (VAR_4, "()");
      break;

    case 130:
    case 132:
    case 129:
    case 144:
    case 140:
    case 142:
    case 128:
    case 143:
    case 146:
    case 147:
    case 134:
    case 136:
    case 133:
    case 148:
    case 138:
    case 139:
    case 145:
    case 131:


      break;
    }
}
