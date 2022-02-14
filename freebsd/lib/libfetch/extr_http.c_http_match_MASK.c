
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 && *VAR_1 &&
     FUNC_1((unsigned char)*VAR_0++) == FUNC_1((unsigned char)*VAR_1++))
               ;
 if (*VAR_0 || *VAR_1 != ':')
  return (((void*)0));
 while (*VAR_1 && FUNC_0((unsigned char)*++VAR_1))
               ;
 return (VAR_1);
}
