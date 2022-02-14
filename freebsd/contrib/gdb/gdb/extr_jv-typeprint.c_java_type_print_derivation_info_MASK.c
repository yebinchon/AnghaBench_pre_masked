
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct ui_file*,char*,char*) ;
 int FUNC_4 (char*,struct ui_file*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (struct ui_file *VAR_0, struct type *VAR_1)
{
  char *VAR_2;
  int VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_4 = FUNC_2 (VAR_1);

  for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_4; VAR_3++)
    {
      int VAR_6;

      VAR_6 = FUNC_0 (VAR_1, VAR_3) ? 'I' : 'E';

      FUNC_4 (VAR_6 == VAR_5 ? ", "
        : VAR_6 == 'I' ? " implements "
        : " extends ",
        VAR_0);
      VAR_5 = VAR_6;
      VAR_2 = FUNC_5 (FUNC_1 (VAR_1, VAR_3));

      FUNC_3 (VAR_0, "%s", VAR_2 ? VAR_2 : "(null)");
    }

  if (VAR_3 > 0)
    FUNC_4 (" ", VAR_0);
}
