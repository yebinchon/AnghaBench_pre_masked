
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {int dummy; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct in_addr*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (struct snmp_client*,char*,...) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static inline const char *
FUNC_5(struct snmp_client *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = *VAR_2;

 while (FUNC_1(*VAR_3) && (FUNC_2(*VAR_3) || *VAR_3 == '.'))
  VAR_3++;

 if (VAR_3 - *VAR_2 > VAR_0) {
  FUNC_3(VAR_1, "IPv4 address too long '%.*s'", VAR_3 - *VAR_2, *VAR_2);
  return (((void*)0));
 }
 if (*VAR_2 == VAR_3)
  return *VAR_2;

 char VAR_4[VAR_0 + 1];
 FUNC_4(VAR_4, *VAR_2, VAR_3 - *VAR_2);
 VAR_4[VAR_3 - *VAR_2] = '\0';

 struct in_addr VAR_5;
 if (FUNC_0(VAR_4, &VAR_5) != 1) {
  FUNC_3(VAR_1, "illegal IPv4 address '%s'", VAR_4);
  return (((void*)0));
 }

 *VAR_2 = VAR_3;
 return (VAR_3);
}
