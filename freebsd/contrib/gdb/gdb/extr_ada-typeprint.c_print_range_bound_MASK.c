
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*,int ,struct ui_file*) ;
 scalar_t__ FUNC_1 (char*,int,int *,int*) ;
 int FUNC_2 (struct ui_file*,char*,int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5 (struct type *VAR_0, char *VAR_1, int *VAR_2,
     struct ui_file *VAR_3)
{
  LONGEST VAR_4;
  if (FUNC_1 (VAR_1, *VAR_2, &VAR_4, VAR_2))
    {
      FUNC_0 (VAR_0, VAR_4, VAR_3);
      if (VAR_1[*VAR_2] == '_')
 *VAR_2 += 2;
    }
  else
    {
      int VAR_5;
      char *VAR_6 = VAR_1 + *VAR_2;
      char *VAR_7;

      VAR_7 = FUNC_4 (VAR_6, "__");
      if (VAR_7 == ((void*)0))
 *VAR_2 += VAR_5 = FUNC_3 (VAR_6);
      else
 {
   VAR_5 = VAR_7 - VAR_6;
   *VAR_2 += VAR_5 + 2;
 }
      FUNC_2 (VAR_3, "%.*s", VAR_5, VAR_6);
    }
}
