
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef enum nss_lookup_type { ____Placeholder_nss_lookup_type } nss_lookup_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (char const*) ;
 unsigned long FUNC_2 (char const*,char**,int) ;

int
FUNC_3(const char *VAR_4, size_t VAR_5, enum nss_lookup_type VAR_6,
    const char *VAR_7, uid_t VAR_8)
{
 const char *VAR_9, *VAR_10;
 char *VAR_11;
 size_t VAR_12;
 unsigned long VAR_13;

 VAR_10 = VAR_4 + VAR_5;
 for (VAR_9 = VAR_4; VAR_9 < VAR_10; VAR_9++)
  if (*VAR_9 == ':')
   break;
 if (*VAR_9 != ':')
  return (VAR_0);
 if (VAR_6 == VAR_2)
  return (VAR_1);
 if (VAR_6 == VAR_3) {
  VAR_12 = FUNC_1(VAR_7);
  if (VAR_12 == (VAR_9 - VAR_4) && FUNC_0(VAR_7, VAR_4, VAR_12) == 0)
   return (VAR_1);
  else
   return (VAR_0);
 }
 for (VAR_9++; VAR_9 < VAR_10; VAR_9++)
  if (*VAR_9 == ':')
   break;
 if (*VAR_9 != ':')
  return (VAR_0);
 VAR_13 = FUNC_2(++VAR_9, &VAR_11, 10);
 if (VAR_11[0] != ':' || (uid_t)VAR_13 != VAR_8)
  return (VAR_0);
 else
  return (VAR_1);
}
