
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {size_t size; } ;
typedef TYPE_1__ FILE ;


 size_t FUNC_0 (char*,int,size_t,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (size_t) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_0)
{
 FILE **VAR_1;
 size_t VAR_2, VAR_3;
 char * VAR_4;

 if (FUNC_2(VAR_0) < 1 || FUNC_2(VAR_0) > 2) {
  FUNC_5(VAR_0);
  FUNC_3(VAR_0, 0);
  return 2;
 }

 VAR_1 = (FILE**)FUNC_7(VAR_0, 1);

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0)) {
  FUNC_5(VAR_0);
  FUNC_3(VAR_0, 0);
  return 2;
 }

 if (FUNC_2(VAR_0) == 2)
  VAR_2 = (size_t)FUNC_6(VAR_0, 2);
 else
  VAR_2 = (*VAR_1)->size;


 VAR_4 = (char*)FUNC_8(VAR_2);
 VAR_3 = FUNC_0(VAR_4, 1, VAR_2, *VAR_1);
 FUNC_4(VAR_0, VAR_4, VAR_3);
 FUNC_1(VAR_4);
 FUNC_3(VAR_0, VAR_3);

 return 2;
}
