
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (char*,char const*,char) ;
 int VAR_2 ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,size_t) ;

int
FUNC_3(char *VAR_3, const char *VAR_4, char **VAR_5)
{
 u_int VAR_6;
 char *VAR_7, *VAR_8;
 int VAR_9;
 char *VAR_10;




 if ((VAR_7 = FUNC_0(VAR_3, VAR_4, '=')) == ((void*)0))
  return (-1);





 if ((VAR_10 = FUNC_1(VAR_1)) == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-2);
 }
 VAR_6 = VAR_1;
 VAR_8 = VAR_10;

 while (*VAR_7 != ':' && *VAR_7 != '\0') {






  *VAR_8++ = *VAR_7++;
  VAR_6--;





  if (VAR_6 == 0) {
   size_t VAR_11 = VAR_8 - VAR_10;

   if ((VAR_10 = FUNC_2(VAR_10, VAR_11 + VAR_1)) == ((void*)0))
    return (-2);
   VAR_6 = VAR_1;
   VAR_8 = VAR_10 + VAR_11;
  }
 }
 *VAR_8++ = '\0';
 VAR_6--;
 VAR_9 = VAR_8 - VAR_10 - 1;




 if (VAR_6 != 0)
  if ((VAR_10 = FUNC_2(VAR_10, (size_t)(VAR_8 - VAR_10))) == ((void*)0))
   return (-2);
 *VAR_5 = VAR_10;
 return (VAR_9);
}
