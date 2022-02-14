
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_lua_funcdata {int idx; int * ret; int * L; } ;
typedef int lua_State ;
typedef double int64_t ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 double FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ucl_lua_funcdata* FUNC_13 (int) ;
 int VAR_4 ;
 int * FUNC_14 (int ) ;
 int * FUNC_15 (double) ;
 int * FUNC_16 (double) ;
 int * FUNC_17 (int ,int ,int ) ;
 int * FUNC_18 (int *,int) ;
 int * FUNC_19 (int ,int ,void*) ;
 int * FUNC_20 (int ) ;

__attribute__((used)) static ucl_object_t *
FUNC_21 (lua_State *VAR_5, int VAR_6)
{
 int VAR_7;
 double VAR_8;
 ucl_object_t *VAR_9 = ((void*)0);
 struct ucl_lua_funcdata *VAR_10;

 VAR_7 = FUNC_12 (VAR_5, VAR_6);

 switch (VAR_7) {
 case 131:
  VAR_9 = FUNC_17 (FUNC_11 (VAR_5, VAR_6), 0, 0);
  break;
 case 132:
  VAR_8 = FUNC_9 (VAR_5, VAR_6);
  if (VAR_8 == (int64_t)VAR_8) {
   VAR_9 = FUNC_16 (VAR_8);
  }
  else {
   VAR_9 = FUNC_15 (VAR_8);
  }
  break;
 case 134:
  VAR_9 = FUNC_14 (FUNC_8 (VAR_5, VAR_6));
  break;
 case 128:
  if (FUNC_10 (VAR_5, VAR_6) == VAR_4) {
   VAR_9 = FUNC_20 (VAR_1);
  }
  break;
 case 130:
 case 133:
 case 129:
  if (FUNC_0 (VAR_5, VAR_6, "__gen_ucl")) {
   if (FUNC_4 (VAR_5, -1)) {
    FUNC_7 (VAR_5, 3);
    FUNC_3 (VAR_5, 1);
    FUNC_3 (VAR_5, 2);
    FUNC_2(VAR_5, 2, 1);
    VAR_9 = FUNC_21 (VAR_5, 1);
   }
   FUNC_5 (VAR_5, 2);
  }
  else {
   if (VAR_7 == 130) {
    VAR_9 = FUNC_18 (VAR_5, VAR_6);
   }
   else if (VAR_7 == 133) {
    VAR_10 = FUNC_13 (sizeof (*VAR_10));
    if (VAR_10 != ((void*)0)) {
     FUNC_6 (VAR_5, VAR_6);
     VAR_10->L = VAR_5;
     VAR_10->ret = ((void*)0);
     VAR_10->idx = FUNC_1 (VAR_5, VAR_0);

     VAR_9 = FUNC_19 (VAR_2,
       VAR_3, (void *)VAR_10);
    }
   }
  }
  break;
 }

 return VAR_9;
}
