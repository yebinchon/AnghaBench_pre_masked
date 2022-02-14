
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {int dummy; } ;


 int FUNC_0 (struct snmp_client*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline const char *
FUNC_2(struct snmp_client *VAR_0, const char **VAR_1)
{
 if (**VAR_1 != ':')
  return (*VAR_1 + 1);

 if ((*VAR_1)[1] == '\0') {
  FUNC_0(VAR_0, "empty port name");
  return (((void*)0));
 }

 *VAR_1 += FUNC_1(*VAR_1);
 return (*VAR_1);
}
