
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,char*,int ,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int ,int*,int ) ;

void
FUNC_10 (void)
{
  if (VAR_3 != 0 && VAR_3 != VAR_6)
    {
      int VAR_7;
      int VAR_8;
      int VAR_9 = 0;
      if (FUNC_6 (VAR_3))
 FUNC_4 ("write failed");

      VAR_8 = FUNC_7 (VAR_3);
      if (VAR_8 == -1)
 VAR_9 = VAR_2;






      VAR_7 = (! VAR_9 && FUNC_1 (VAR_8)
  ? FUNC_0 (VAR_8)
  : VAR_1);
      if (VAR_7)
 FUNC_3 (VAR_0, VAR_9,
        FUNC_2(VAR_7 == 126
   ? "subsidiary program `%s' could not be invoked"
   : VAR_7 == 127
   ? "subsidiary program `%s' not found"
   : VAR_7 == VAR_1
   ? "subsidiary program `%s' failed"
   : "subsidiary program `%s' failed (exit status %d)"),
        VAR_5, VAR_7);
    }

  VAR_3 = 0;
}
