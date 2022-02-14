
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long FUNC_0 (unsigned long long) ;
 unsigned long long VAR_1 ;
 unsigned long long FUNC_1 (char*,char**) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;

int FUNC_3(const char *VAR_2,
     unsigned long long *VAR_3)
{
 char *VAR_4;


 if (*VAR_2 == '-') {
  *VAR_3 = FUNC_2(VAR_2 + 1, &VAR_4, 10);
  if (*VAR_3 != 1 || *VAR_4 != '\0')
   return -VAR_0;
  *VAR_3 = VAR_1;
  return 0;
 }


 *VAR_3 = FUNC_1((char *)VAR_2, &VAR_4);
 if (*VAR_4 != '\0')
  return -VAR_0;

 *VAR_3 = FUNC_0(*VAR_3);
 return 0;
}
