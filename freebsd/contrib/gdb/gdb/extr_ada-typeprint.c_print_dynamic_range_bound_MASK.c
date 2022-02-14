
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (char*,size_t,scalar_t__) ;
 int FUNC_1 (struct type*,int ,struct ui_file*) ;
 int FUNC_2 (struct ui_file*,char*) ;
 int FUNC_3 (char*,int ,int*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_7 (struct type *VAR_0, const char *VAR_1, int VAR_2,
      const char *VAR_3, struct ui_file *VAR_4)
{
  static char *VAR_5 = ((void*)0);
  static size_t VAR_6 = 0;
  LONGEST VAR_7;
  int VAR_8;

  FUNC_0 (VAR_5, VAR_6, VAR_2 + FUNC_5 (VAR_3) + 1);
  FUNC_6 (VAR_5, VAR_1, VAR_2);
  FUNC_4 (VAR_5 + VAR_2, VAR_3);

  VAR_7 = FUNC_3 (VAR_5, 0, &VAR_8);
  if (VAR_8)
    FUNC_1 (VAR_0, VAR_7, VAR_4);
  else
    FUNC_2 (VAR_4, "?");
}
