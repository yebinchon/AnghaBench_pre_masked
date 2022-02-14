
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int ev_ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,struct in6_addr*) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (int ,char const) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, const char *VAR_3)
{
 if (VAR_2 + 3 > VAR_3 || *VAR_2 != '[' || *(VAR_3-1) != ']')
  return 0;
 if (VAR_2[1] == 'v') {



  VAR_2 += 2;
  --VAR_3;
  if (!FUNC_1(*VAR_2))
   return 0;
  while (VAR_2 < VAR_3 && *VAR_2 != '.') {
   if (FUNC_1(*VAR_2))
    ++VAR_2;
   else
    return 0;
  }
  if (*VAR_2 != '.')
   return 0;
  ++VAR_2;
  while (VAR_2 < VAR_3) {
   if (FUNC_0(*VAR_2) ||
       FUNC_4(VAR_1, *VAR_2) ||
       *VAR_2 == ':')
    ++VAR_2;
   else
    return 0;
  }
  return 2;
 } else {

  char VAR_4[64];
  ev_ssize_t VAR_5 = VAR_3-VAR_2-2;
  struct in6_addr VAR_6;
  if (VAR_5 >= 64)
   return 0;
  FUNC_3(VAR_4, VAR_2+1, VAR_5);
  VAR_4[VAR_5]='\0';
  return (FUNC_2(VAR_0,VAR_4,&VAR_6)==1) ? 1 : 0;
 }
}
