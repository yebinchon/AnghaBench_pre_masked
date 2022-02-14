
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int uid2 ;
typedef int uid ;
typedef enum nss_lookup_type { ____Placeholder_nss_lookup_type } nss_lookup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_4, size_t VAR_5, enum nss_lookup_type VAR_6,
    const char *VAR_7, uid_t VAR_8)
{
 const char *VAR_9, *VAR_10;
 uid_t VAR_11;

 VAR_10 = &VAR_4[VAR_5];
 for (VAR_9 = VAR_4; VAR_9 < VAR_10; VAR_9++)
  if (*VAR_9 == '\0')
   break;
 if (*VAR_9 != '\0')
  return (VAR_0);
 if (VAR_6 == VAR_2)
  return (VAR_1);
 if (VAR_6 == VAR_3)
  return (FUNC_1(VAR_7, VAR_4) == 0 ? VAR_1 : VAR_0);
 for (VAR_9++; VAR_9 < VAR_10; VAR_9++)
  if (*VAR_9 == '\0')
   break;
 if (*VAR_9 != '\0' || (++VAR_9) + sizeof(VAR_8) >= VAR_10)
  return (VAR_0);
 FUNC_0(&VAR_11, VAR_9, sizeof(VAR_11));
 return (VAR_8 == VAR_11 ? VAR_1 : VAR_0);
}
