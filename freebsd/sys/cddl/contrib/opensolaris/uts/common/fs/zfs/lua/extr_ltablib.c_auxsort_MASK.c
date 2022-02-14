
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_0, int VAR_1, int VAR_2) {
  while (VAR_1 < VAR_2) {
    int VAR_3, VAR_4;

    FUNC_3(VAR_0, 1, VAR_1);
    FUNC_3(VAR_0, 1, VAR_2);
    if (FUNC_5(VAR_0, -1, -2))
      FUNC_4(VAR_0, VAR_1, VAR_2);
    else
      FUNC_1(VAR_0, 2);
    if (VAR_2-VAR_1 == 1) break;
    VAR_3 = (VAR_1+VAR_2)/2;
    FUNC_3(VAR_0, 1, VAR_3);
    FUNC_3(VAR_0, 1, VAR_1);
    if (FUNC_5(VAR_0, -2, -1))
      FUNC_4(VAR_0, VAR_3, VAR_1);
    else {
      FUNC_1(VAR_0, 1);
      FUNC_3(VAR_0, 1, VAR_2);
      if (FUNC_5(VAR_0, -1, -2))
        FUNC_4(VAR_0, VAR_3, VAR_2);
      else
        FUNC_1(VAR_0, 2);
    }
    if (VAR_2-VAR_1 == 2) break;
    FUNC_3(VAR_0, 1, VAR_3);
    FUNC_2(VAR_0, -1);
    FUNC_3(VAR_0, 1, VAR_2-1);
    FUNC_4(VAR_0, VAR_3, VAR_2-1);

    VAR_3 = VAR_1; VAR_4 = VAR_2-1;
    for (;;) {

      while (FUNC_3(VAR_0, 1, ++VAR_3), FUNC_5(VAR_0, -1, -2)) {
        if (VAR_3>=VAR_2) FUNC_0(VAR_0, "invalid order function for sorting");
        FUNC_1(VAR_0, 1);
      }

      while (FUNC_3(VAR_0, 1, --VAR_4), FUNC_5(VAR_0, -3, -1)) {
        if (VAR_4<=VAR_1) FUNC_0(VAR_0, "invalid order function for sorting");
        FUNC_1(VAR_0, 1);
      }
      if (VAR_4<VAR_3) {
        FUNC_1(VAR_0, 3);
        break;
      }
      FUNC_4(VAR_0, VAR_3, VAR_4);
    }
    FUNC_3(VAR_0, 1, VAR_2-1);
    FUNC_3(VAR_0, 1, VAR_3);
    FUNC_4(VAR_0, VAR_2-1, VAR_3);


    if (VAR_3-VAR_1 < VAR_2-VAR_3) {
      VAR_4=VAR_1; VAR_3=VAR_3-1; VAR_1=VAR_3+2;
    }
    else {
      VAR_4=VAR_3+1; VAR_3=VAR_2; VAR_2=VAR_4-2;
    }
    FUNC_6(VAR_0, VAR_4, VAR_3);
  }
}
