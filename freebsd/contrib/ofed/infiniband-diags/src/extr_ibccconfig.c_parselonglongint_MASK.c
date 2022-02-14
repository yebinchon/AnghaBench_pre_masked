
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_2, uint64_t *VAR_3)
{
 char *VAR_4 = ((void*)0);

 VAR_1 = 0;
 *VAR_3 = FUNC_0(VAR_2, &VAR_4, 0);
 if ((VAR_4 && *VAR_4 != '\0')
     || VAR_1 != 0) {
  if (VAR_1 == VAR_0)
   return "value out of range";
  return "invalid integer input";
 }

 return ((void*)0);
}
