
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_0(char *VAR_2, int VAR_3)
{
 char *VAR_4;





 if (VAR_3 <= VAR_0)
  return(VAR_2);
 if (VAR_3 > VAR_1 + VAR_0)
  return(((void*)0));







 VAR_4 = VAR_2 + VAR_3 - VAR_0;
 while ((*VAR_4 != '\0') && (*VAR_4 != '/'))
  ++VAR_4;





 if (*VAR_4 == '\0')
  return(((void*)0));
 VAR_3 = VAR_4 - VAR_2;







 if ((VAR_3 > VAR_1) || (VAR_3 == 0))
  return(((void*)0));




 return(VAR_4);
}
