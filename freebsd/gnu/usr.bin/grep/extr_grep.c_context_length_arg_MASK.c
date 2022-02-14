
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,int ,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,int ,int,int*,char*) ;

__attribute__((used)) static void
FUNC_3 (char const *VAR_1, int *VAR_2)
{
  uintmax_t VAR_3;
  if (! (FUNC_2 (VAR_1, 0, 10, &VAR_3, "") == VAR_0
  && 0 <= (*VAR_2 = VAR_3)
  && *VAR_2 == VAR_3))
    {
      FUNC_1 (2, 0, "%s: %s\n", VAR_1, FUNC_0("invalid context length argument"));
    }
}
