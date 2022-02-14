
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*,int,size_t,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,size_t) ;
 char* FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_2)
{
 FILE **VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6;
 size_t VAR_7, VAR_8, VAR_9;

 VAR_4 = ((void*)0);
 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 2) {
  VAR_1 = VAR_0;
  return FUNC_1(VAR_2, 0, ((void*)0));
 }

 VAR_3 = (FILE**)FUNC_6(VAR_2, 1);

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return FUNC_1(VAR_2, 0, ((void*)0));
 }


 for (VAR_5 = 0; VAR_5 < VAR_6 - 1; VAR_5++) {





  if (!FUNC_3(VAR_2, VAR_5 + 2)) {
   VAR_1 = VAR_0;
   return FUNC_1(VAR_2, 0, ((void*)0));
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_6 - 1; VAR_5++) {

  VAR_4 = FUNC_5(VAR_2, VAR_5 + 2, &VAR_7);
  VAR_9 = FUNC_0(VAR_4, 1, VAR_7, *VAR_3);
  if (VAR_9 < VAR_7)
   return FUNC_1(VAR_2, 0, ((void*)0));
  VAR_8 += VAR_9;
 }
 FUNC_4(VAR_2, VAR_8);
 return 1;
}
