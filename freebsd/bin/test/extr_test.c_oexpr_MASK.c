
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum token { ____Placeholder_token } token ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_2(enum token VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_1 > 0 ? (--VAR_1, *++VAR_2) : ((void*)0)) == VAR_0)
  return FUNC_2(FUNC_1(VAR_1 > 0 ? (--VAR_1, *++VAR_2) : ((void*)0))) ||
      VAR_4;
 VAR_2--;
 VAR_1++;
 return VAR_4;
}
