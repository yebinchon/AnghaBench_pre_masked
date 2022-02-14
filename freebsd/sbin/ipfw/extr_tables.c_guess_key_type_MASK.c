
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct in6_addr*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,struct in_addr*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_5(char *VAR_5, uint8_t *VAR_6)
{
 char *VAR_7;
 struct in6_addr VAR_8;
 uint32_t VAR_9;

 if (FUNC_1(*VAR_5) != 0 || *VAR_5 == ':') {

  if ((VAR_7 = FUNC_3(VAR_5, '/')) != ((void*)0))
   *VAR_7 = '\0';

  if ((FUNC_0(VAR_0, VAR_5, &VAR_8) == 1) ||
      (FUNC_0(VAR_1, VAR_5, &VAR_8) == 1)) {
   *VAR_6 = VAR_2;
   if (VAR_7 != ((void*)0))
    *VAR_7 = '/';
   return (0);
  } else {


   VAR_9 = FUNC_4(VAR_5, &VAR_7, 10);
   if (*VAR_7 == '\0') {
    *VAR_6 = VAR_4;
    return (0);
   } else if ((VAR_7 != VAR_5) && (*VAR_7 == '.')) {







    return (1);
   }
  }
 }

 if (FUNC_3(VAR_5, '.') == ((void*)0)) {
  *VAR_6 = VAR_3;
  return (0);
 }

 if (FUNC_2(VAR_5, (struct in_addr *)&VAR_8) != 0)
  return (1);

 *VAR_6 = VAR_2;
 return (0);
}
