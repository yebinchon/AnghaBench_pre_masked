
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int b1 ;
struct TYPE_3__ {void* len; int * bp; } ;
typedef int SCR ;
typedef int CHAR_T ;
typedef TYPE_1__ ARGS ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int *,int,int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__**,int *) ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_0, size_t VAR_1, size_t VAR_2)
{
 ARGS *VAR_3[2], VAR_4, VAR_5;
 CHAR_T VAR_6[1024];

 VAR_4.bp = VAR_6;
 VAR_5.bp = ((void*)0);
 VAR_4.len = VAR_5.len = 0;
 VAR_3[0] = &VAR_4;
 VAR_3[1] = &VAR_5;

 VAR_4.len = FUNC_1(VAR_6, sizeof(VAR_6), FUNC_0("lines=%lu"), (u_long)VAR_1);
 if (FUNC_2(VAR_0, VAR_3, ((void*)0)))
  return (1);
 VAR_4.len = FUNC_1(VAR_6, sizeof(VAR_6), FUNC_0("columns=%lu"), (u_long)VAR_2);
 if (FUNC_2(VAR_0, VAR_3, ((void*)0)))
  return (1);
 return (0);
}
