
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;
typedef enum nss_lookup_type { ____Placeholder_nss_lookup_type } nss_lookup_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char const*,char const*,size_t) ;



 size_t FUNC_2 (char const*) ;
 unsigned long FUNC_3 (char const*,char**,int) ;

int
FUNC_4(const char *VAR_2, size_t VAR_3, enum nss_lookup_type VAR_4,
    const char *VAR_5, gid_t VAR_6)
{
 size_t VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 if (VAR_3 == 0 || FUNC_0(VAR_2, VAR_3))
  return (VAR_0);
 switch (VAR_4) {
 case 128: VAR_13 = 1; break;
 case 129: VAR_13 = 2; break;
 default: VAR_13 = 2; break;
 }
 VAR_9 = &VAR_2[VAR_3];
 for (VAR_8 = VAR_2, VAR_12 = 0; VAR_12 < VAR_13 && VAR_8 < VAR_9; VAR_8++)
  if (*VAR_8 == ':')
   VAR_12++;
 if (VAR_12 < VAR_13)
  return (VAR_0);
 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7 + 1 == (size_t)(VAR_8 - VAR_2) &&
      FUNC_1(VAR_2, VAR_5, VAR_7) == 0)
   return (VAR_1);
  break;
 case 129:
  VAR_11 = FUNC_3(VAR_8, &VAR_10, 10);
  if (VAR_10 < VAR_9 && *VAR_10 == ':' && VAR_6 == (gid_t)VAR_11)
   return (VAR_1);
  break;
 case 130:
  return (VAR_1);
 default:
  break;
 }
 return (VAR_0);
}
