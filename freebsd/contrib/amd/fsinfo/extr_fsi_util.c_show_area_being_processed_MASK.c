
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_8(char *VAR_6, int VAR_7)
{
  static char *VAR_8 = ((void*)0);

  if (VAR_5 < 0)
    return;
  if (VAR_8) {
    if (VAR_4)
      FUNC_6();
    FUNC_5(")", VAR_2);
    VAR_0 += 1;
  }

  if (!VAR_8 || !FUNC_0(VAR_6, VAR_8)) {
    if (VAR_8) {
      FUNC_1(0);
      VAR_4 = 0;
      VAR_3 = VAR_1 + 1;
    }
    (void) FUNC_2(FUNC_7(VAR_6) + 2);
    FUNC_4(VAR_2, "[%s", VAR_6);
    VAR_8 = VAR_6;
  }

  FUNC_5(" (", VAR_2);
  VAR_0 += 2;
  VAR_1 = VAR_7;
  VAR_3 = VAR_7 + 1;

  FUNC_3(VAR_2);
}
