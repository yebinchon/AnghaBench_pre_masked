
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int ng_ID_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static ng_ID_t
FUNC_3(const char *VAR_1)
{
 const int VAR_2 = FUNC_1(VAR_1);
 char *VAR_3;
 u_long VAR_4;


 if ((VAR_2 < 3) || (VAR_1[0] != '[') || (VAR_1[VAR_2 - 1] != ']') ||
     (!FUNC_0(VAR_1[1])))
  return ((ng_ID_t)0);


 VAR_4 = FUNC_2(VAR_1 + 1, &VAR_3, 16);
 if ((VAR_3 - VAR_1 != VAR_2 - 1) || (VAR_4 == VAR_0) || (VAR_4 == 0))
  return ((ng_ID_t)0);

 return ((ng_ID_t)VAR_4);
}
