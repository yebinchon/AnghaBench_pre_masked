
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int searchers ;
typedef int lua_State ;
typedef int * lua_CFunction ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int * const,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,char*) ;





__attribute__((used)) static void FUNC_5 (lua_State *VAR_0) {
  static const lua_CFunction VAR_1[] =
    {128, 129, 131, 130, ((void*)0)};
  int VAR_2;

  FUNC_0(VAR_0, sizeof(VAR_1)/sizeof(VAR_1[0]) - 1, 0);

  for (VAR_2=0; VAR_1[VAR_2] != ((void*)0); VAR_2++) {
    FUNC_2(VAR_0, -2);
    FUNC_1(VAR_0, VAR_1[VAR_2], 1);
    FUNC_3(VAR_0, -2, VAR_2+1);
  }




  FUNC_4(VAR_0, -2, "searchers");
}
