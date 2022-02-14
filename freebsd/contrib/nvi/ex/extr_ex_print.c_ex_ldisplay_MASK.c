
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int const*,size_t*,int,scalar_t__,int ) ;
 int FUNC_4 (int *,char*) ;

int
FUNC_5(SCR *VAR_1, const CHAR_T *VAR_2, size_t VAR_3, size_t VAR_4, u_int VAR_5)
{
 if (VAR_3 > 0 && FUNC_3(VAR_1, VAR_2, &VAR_4, VAR_3, FUNC_2(VAR_0), 0))
  return (1);
 if (!FUNC_0(VAR_1) && FUNC_2(VAR_0)) {
  VAR_2 = FUNC_1("$");
  if (FUNC_3(VAR_1, VAR_2, &VAR_4, 1, FUNC_2(VAR_0), 0))
   return (1);
 }
 if (!FUNC_0(VAR_1))
  (void)FUNC_4(VAR_1, "\n");
 return (0);
}
