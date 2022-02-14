
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 struct type* FUNC_1 (struct type*,char*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 int * FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct ui_file*,char*,...) ;
 scalar_t__ FUNC_7 (struct type*,struct type*,struct ui_file*,int,int) ;

__attribute__((used)) static void
FUNC_8 (struct type *VAR_1, struct ui_file *VAR_2, int VAR_3,
     int VAR_4)
{
  struct type *VAR_5;
  struct type *VAR_6;

  VAR_6 = VAR_1;
  if (FUNC_0 (VAR_6) & VAR_0)
    {
      struct type *VAR_7 = FUNC_1 (VAR_6, "___XVE");
      if (VAR_7 != ((void*)0))
 VAR_6 = VAR_7;
    }

  VAR_5 = FUNC_3 (VAR_6);
  if (FUNC_4 (VAR_5) != ((void*)0))
    FUNC_6 (VAR_2, "new %s with ",
        FUNC_5 (VAR_5));
  else if (VAR_5 == ((void*)0) && FUNC_2 (VAR_6))
    FUNC_6 (VAR_2, "tagged ");

  FUNC_6 (VAR_2, "record");

  if (VAR_3 < 0)
    FUNC_6 (VAR_2, " ... end record");
  else
    {
      int VAR_8;

      VAR_8 = 0;
      if (VAR_5 != ((void*)0) && FUNC_4 (VAR_5) == ((void*)0))
 VAR_8 += FUNC_7 (VAR_5, VAR_5,
       VAR_2, VAR_3, VAR_4);
      VAR_8 += FUNC_7 (VAR_6, VAR_6, VAR_2, VAR_3, VAR_4);

      if (VAR_8 > 0)
 FUNC_6 (VAR_2, "\n%*send record", VAR_4, "");
      else if (VAR_8 < 0)
 FUNC_6 (VAR_2, " <incomplete type> end record");
      else
 FUNC_6 (VAR_2, " null; end record");
    }
}
