
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

const char *
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;




 if (*VAR_0 == '/')
  VAR_0++;

 if (*VAR_1 == '/')
  VAR_1++;


 VAR_2 = FUNC_0(VAR_0);
 if (FUNC_1(VAR_0, VAR_1, VAR_2) != 0)
  return (((void*)0));


 if (VAR_2 == 0)
  return (VAR_1);


 if (VAR_1[VAR_2] == '\0')
  return (VAR_1 + VAR_2);


 if (VAR_1[VAR_2] == '/')
  return (VAR_1 + VAR_2 + 1);


 return (((void*)0));
}
