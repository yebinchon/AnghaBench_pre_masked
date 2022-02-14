
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_3) {
  int VAR_4, VAR_5;
  unsigned int VAR_6;
  FUNC_0(VAR_3, 1, VAR_1);
  VAR_4 = FUNC_4(VAR_3, 2, 1);
  VAR_5 = FUNC_3(VAR_3, VAR_2, 3, FUNC_2(VAR_3, 1));
  if (VAR_4 > VAR_5) return 0;
  VAR_6 = (unsigned int)VAR_5 - (unsigned int)VAR_4;
  if (VAR_6 > (VAR_0 - 10) || !FUNC_5(VAR_3, ++VAR_6))
    return FUNC_1(VAR_3, "too many results to unpack");
  FUNC_6(VAR_3, 1, VAR_4);
  while (VAR_4++ < VAR_5)
    FUNC_6(VAR_3, 1, VAR_4);
  return VAR_6;
}
