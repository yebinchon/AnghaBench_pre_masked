
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;
typedef scalar_t__ CHAR_T ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__,char*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_4(SCR *VAR_0, EXCMD *VAR_1, CHAR_T *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5 = 1;

 if (*VAR_2) {
  FUNC_0(VAR_0, VAR_2, FUNC_1(VAR_2) + 1, VAR_3, VAR_4);
  VAR_5 = FUNC_2(VAR_3);
 }
 return (FUNC_3(VAR_0, ((void*)0), VAR_5));
}
