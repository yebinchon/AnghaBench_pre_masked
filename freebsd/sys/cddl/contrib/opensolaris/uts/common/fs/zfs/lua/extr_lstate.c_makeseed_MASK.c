
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int lua_State ;
typedef int buff ;


 int FUNC_0 (char*,int,unsigned int*) ;
 unsigned int* VAR_0 ;
 unsigned int FUNC_1 (char*,int,unsigned int) ;
 int FUNC_2 (int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static unsigned int FUNC_4 (lua_State *VAR_2) {
  char VAR_3[4 * sizeof(size_t)];
  unsigned int VAR_4 = FUNC_3();
  int VAR_5 = 0;
  FUNC_0(VAR_3, VAR_5, VAR_2);
  FUNC_0(VAR_3, VAR_5, &VAR_4);
  FUNC_0(VAR_3, VAR_5, VAR_0);
  FUNC_0(VAR_3, VAR_5, &VAR_1);
  FUNC_2(VAR_5 == sizeof(VAR_3));
  return FUNC_1(VAR_3, VAR_5, VAR_4);
}
