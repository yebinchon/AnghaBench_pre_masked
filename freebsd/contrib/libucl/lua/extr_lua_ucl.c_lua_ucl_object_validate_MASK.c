
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_schema_error {char const* msg; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,char const*,char) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int const*,int *,int *,int *,struct ucl_schema_error*) ;

__attribute__((used)) static int
FUNC_12 (lua_State *VAR_4)
{
 ucl_object_t *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
 const ucl_object_t *VAR_8;
 bool VAR_9 = 0;
 struct ucl_schema_error VAR_10;
 const char *VAR_11 = ((void*)0);

 VAR_5 = FUNC_7 (VAR_4, 1);
 VAR_6 = FUNC_7 (VAR_4, 2);

 if (VAR_6 && VAR_5 && FUNC_10 (VAR_6) == VAR_3) {
  if (FUNC_0 (VAR_4) > 2) {
   if (FUNC_6 (VAR_4, 3) == VAR_0) {
    VAR_11 = FUNC_5 (VAR_4, 3);
    if (VAR_11[0] == '#') {
     VAR_11++;
    }
   }
   else if (FUNC_6 (VAR_4, 3) == VAR_2 || FUNC_6 (VAR_4, 3) ==
      VAR_1) {

    VAR_7 = FUNC_7 (VAR_4, 3);
   }

   if (FUNC_0 (VAR_4) > 3) {
    if (FUNC_6 (VAR_4, 4) == VAR_2 || FUNC_6 (VAR_4, 4) ==
      VAR_1) {

     VAR_7 = FUNC_7 (VAR_4, 4);
    }
   }
  }

  if (VAR_11) {
   VAR_8 = FUNC_9 (VAR_6, VAR_11, '/');
  }
  else {

   VAR_8 = VAR_6;
  }

  if (VAR_8) {
   VAR_9 = FUNC_11 (VAR_8, VAR_5, VAR_6,
     VAR_7, &VAR_10);

   if (VAR_9) {
    FUNC_1 (VAR_4, VAR_9);
    FUNC_3 (VAR_4);

    if (VAR_7) {
     FUNC_8 (VAR_4, VAR_7);
    }
   }
   else {
    FUNC_1 (VAR_4, VAR_9);
    FUNC_2 (VAR_4, "validation error: %s", VAR_10.msg);

    if (VAR_7) {
     FUNC_8 (VAR_4, VAR_7);
    }
   }
  }
  else {
   FUNC_1 (VAR_4, VAR_9);

   FUNC_2 (VAR_4, "cannot find the requested path: %s", VAR_11);

   if (VAR_7) {
    FUNC_8 (VAR_4, VAR_7);
   }
  }
 }
 else {
  FUNC_1 (VAR_4, VAR_9);
  FUNC_4 (VAR_4, "invalid object or schema");
 }

 if (VAR_7) {
  return 3;
 }

 return 2;
}
