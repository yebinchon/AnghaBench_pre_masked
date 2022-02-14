
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (char*) ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
  char VAR_5[VAR_0], *VAR_6;

  if (VAR_3 == 1) {
    VAR_6 = FUNC_2(VAR_5, sizeof(VAR_5));
    if (VAR_6 == ((void*)0)) {
      FUNC_1(VAR_1, "pawd: %s\n", VAR_5);
      FUNC_0(1);
    } else {
      FUNC_1(VAR_2, "%s\n", VAR_6);
    }
  } else {
    while (--VAR_3) {
      VAR_6 = FUNC_3(*++VAR_4);
      FUNC_1(VAR_2, "%s\n", VAR_6);
    }
  }
  FUNC_0(0);
}
