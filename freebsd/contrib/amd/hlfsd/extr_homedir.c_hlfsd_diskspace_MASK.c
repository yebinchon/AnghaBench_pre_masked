
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (char*,int,char*,char*,long) ;

__attribute__((used)) static int
FUNC_8(char *VAR_4)
{
  char VAR_5[VAR_0];
  int VAR_6, VAR_7;

  FUNC_7(VAR_5, sizeof(VAR_5), "%s/._hlfstmp_%lu", VAR_4, (long) FUNC_1());
  if ((VAR_6 = FUNC_2(VAR_5, VAR_2 | VAR_1, 0600)) < 0) {
    FUNC_3(VAR_3, "cannot open %s: %m", VAR_5);
    return -1;
  }
  VAR_7 = FUNC_4(VAR_5);
  if (FUNC_6(VAR_6, VAR_5, VAR_7) < VAR_7) {
    FUNC_3(VAR_3, "cannot write \"%s\" (%d bytes) to %s : %m", VAR_5, VAR_7, VAR_5);
    FUNC_0(VAR_6);
    FUNC_5(VAR_5);
    return -1;
  }
  if (FUNC_5(VAR_5) < 0) {
    FUNC_3(VAR_3, "cannot unlink %s : %m", VAR_5);
  }
  FUNC_0(VAR_6);
  return 0;
}
