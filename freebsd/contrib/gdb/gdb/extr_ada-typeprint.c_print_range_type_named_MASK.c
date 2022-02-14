
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*) ;
 struct type* FUNC_2 (char*) ;
 struct type* VAR_1 ;
 int FUNC_3 (struct ui_file*,char*) ;
 int FUNC_4 (struct type*,char*,int,char*,struct ui_file*) ;
 int FUNC_5 (struct type*,struct ui_file*) ;
 int FUNC_6 (struct type*,char*,int*,struct ui_file*) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_2, struct ui_file *VAR_3)
{
  struct type *VAR_4 = FUNC_2 (VAR_2);
  struct type *VAR_5;
  LONGEST VAR_6, VAR_7;
  char *VAR_8;

  if (VAR_4 == ((void*)0))
    VAR_5 = VAR_1;
  else if (FUNC_0 (VAR_4) == VAR_0)
    VAR_5 = FUNC_1 (VAR_4);
  else
    VAR_5 = VAR_4;

  VAR_8 = FUNC_8 (VAR_2, "___XD");
  if (VAR_8 == ((void*)0) && VAR_4 == ((void*)0))
    FUNC_3 (VAR_3, "? .. ?");
  else if (VAR_8 == ((void*)0))
    FUNC_5 (VAR_4, VAR_3);
  else
    {
      int VAR_9 = VAR_8 - VAR_2;
      char *VAR_10;
      int VAR_11;

      VAR_8 += 5;
      VAR_10 = FUNC_7 (VAR_8, '_');
      VAR_11 = 1;

      if (*VAR_8 == 'L')
 {
   FUNC_6 (VAR_4, VAR_10, &VAR_11, VAR_3);
   VAR_8 += 1;
 }
      else
 FUNC_4 (VAR_4, VAR_2, VAR_9, "___L",
       VAR_3);

      FUNC_3 (VAR_3, " .. ");

      if (*VAR_8 == 'U')
 FUNC_6 (VAR_4, VAR_10, &VAR_11, VAR_3);
      else
 FUNC_4 (VAR_4, VAR_2, VAR_9, "___U",
       VAR_3);
    }
}
