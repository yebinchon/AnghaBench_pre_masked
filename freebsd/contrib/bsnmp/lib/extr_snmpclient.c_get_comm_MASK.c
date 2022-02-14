
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snmp_client*,char*,int,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static inline const char *
FUNC_2(struct snmp_client *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = FUNC_1(*VAR_2, '@');

 if (VAR_3 == ((void*)0))

  return (*VAR_2);

 if (VAR_3 - *VAR_2 > VAR_0) {
  FUNC_0(VAR_1, "community string too long '%.*s'",
      VAR_3 - *VAR_2, *VAR_2);
  return (((void*)0));
 }

 *VAR_2 = VAR_3 + 1;
 return (VAR_3);
}
