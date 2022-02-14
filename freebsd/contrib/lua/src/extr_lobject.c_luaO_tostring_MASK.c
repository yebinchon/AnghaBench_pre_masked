
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int buff ;
typedef int StkId ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int ) ;
 char FUNC_4 () ;
 size_t FUNC_5 (char*,int,int ) ;
 size_t FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 size_t FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11 (lua_State *VAR_1, StkId VAR_2) {
  char VAR_3[VAR_0];
  size_t VAR_4;
  FUNC_3(FUNC_10(VAR_2));
  if (FUNC_9(VAR_2))
    VAR_4 = FUNC_5(VAR_3, sizeof(VAR_3), FUNC_1(VAR_2));
  else {
    VAR_4 = FUNC_6(VAR_3, sizeof(VAR_3), FUNC_0(VAR_2));

    if (VAR_3[FUNC_8(VAR_3, "-0123456789")] == '\0') {
      VAR_3[VAR_4++] = FUNC_4();
      VAR_3[VAR_4++] = '0';
    }

  }
  FUNC_7(VAR_1, VAR_2, FUNC_2(VAR_1, VAR_3, VAR_4));
}
