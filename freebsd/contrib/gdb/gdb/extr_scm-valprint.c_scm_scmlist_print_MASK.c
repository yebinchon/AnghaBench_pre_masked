
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int LONGEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,struct ui_file*) ;
 unsigned int VAR_0 ;
 int FUNC_6 (int ,struct ui_file*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_7 (LONGEST VAR_1, struct ui_file *VAR_2, int VAR_3,
     int VAR_4, int VAR_5, enum val_prettyprint VAR_6)
{
  unsigned int VAR_7 = VAR_0;
  if (VAR_5 > 6)
    {
      FUNC_5 ("...", VAR_2);
      return;
    }
  FUNC_6 (FUNC_0 (VAR_1), VAR_2, VAR_3,
      VAR_4, VAR_5 + 1, VAR_6);
  VAR_1 = FUNC_1 (VAR_1);
  for (; FUNC_3 (VAR_1); VAR_1 = FUNC_1 (VAR_1))
    {
      if (FUNC_2 (VAR_1))
 break;
      FUNC_5 (" ", VAR_2);
      if (--VAR_7 == 0)
 {
   FUNC_5 ("...", VAR_2);
   return;
 }
      FUNC_6 (FUNC_0 (VAR_1), VAR_2, VAR_3,
   VAR_4, VAR_5 + 1, VAR_6);
    }
  if (FUNC_4 (VAR_1))
    {
      FUNC_5 (" . ", VAR_2);
      FUNC_6 (VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5 + 1, VAR_6);
    }
}
