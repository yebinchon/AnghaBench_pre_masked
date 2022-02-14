
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,int,char*,char const*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (int VAR_1, int VAR_2, int VAR_3,
      char const *VAR_4)
{
  int VAR_5 = (! VAR_1 && FUNC_1 (VAR_2)
  ? FUNC_0 (VAR_2)
  : VAR_0);

  if (VAR_3 < VAR_5)
    {
      FUNC_3 (0, VAR_1,
      FUNC_2(VAR_5 == 126
        ? "subsidiary program `%s' could not be invoked"
        : VAR_5 == 127
        ? "subsidiary program `%s' not found"
        : VAR_5 == VAR_0
        ? "subsidiary program `%s' failed"
        : "subsidiary program `%s' failed (exit status %d)"),
      VAR_4, VAR_5);
      FUNC_4 ();
    }
}
