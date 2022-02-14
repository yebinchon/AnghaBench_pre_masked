
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,int,size_t*) ;
 double FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,char const*,size_t,int) ;
 int * FUNC_11 (int *,int) ;
 int * FUNC_12 (int ) ;

__attribute__((used)) static ucl_object_t *
FUNC_13 (lua_State *VAR_4, int VAR_5)
{
 ucl_object_t *VAR_6, *VAR_7 = ((void*)0);
 size_t VAR_8;
 const char *VAR_9;
 bool VAR_10 = 1;
 int VAR_11 = VAR_0;

 if (VAR_5 < 0) {

  VAR_5 = FUNC_1 (VAR_4) + VAR_5 + 1;
 }

 FUNC_5 (VAR_4);
 while (FUNC_2 (VAR_4, VAR_5) != 0) {
  if (FUNC_8 (VAR_4, -2) == VAR_1) {
   double VAR_12 = FUNC_7 (VAR_4, -2);
   if (VAR_12 == (int)VAR_12) {
    if (VAR_12 > VAR_11) {
     VAR_11 = VAR_12;
    }
   }
   else {

    FUNC_3 (VAR_4, 2);
    VAR_10 = 0;
    break;
   }
  }
  else {

   FUNC_3 (VAR_4, 2);
   VAR_10 = 0;
   break;
  }
  FUNC_3 (VAR_4, 1);
 }


 if (VAR_10) {
  int VAR_13;

  VAR_7 = FUNC_12 (VAR_2);
  for (VAR_13 = 1; VAR_13 <= VAR_11; VAR_13 ++) {
   FUNC_4 (VAR_4, VAR_13);
   FUNC_0 (VAR_4, VAR_5);
   VAR_6 = FUNC_11 (VAR_4, FUNC_1 (VAR_4));
   if (VAR_6 != ((void*)0)) {
    FUNC_9 (VAR_7, VAR_6);
   }
   FUNC_3 (VAR_4, 1);
  }
 }
 else {
  FUNC_5 (VAR_4);
  VAR_7 = FUNC_12 (VAR_3);
  while (FUNC_2 (VAR_4, VAR_5) != 0) {

   VAR_9 = FUNC_6 (VAR_4, -2, &VAR_8);
   VAR_6 = FUNC_11 (VAR_4, FUNC_1 (VAR_4));

   if (VAR_6 != ((void*)0)) {
    FUNC_10 (VAR_7, VAR_6, VAR_9, VAR_8, 1);
   }
   FUNC_3 (VAR_4, 1);
  }
 }

 return VAR_7;
}
