
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (char**) ;
 int FUNC_1 (struct snmp_client*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static inline int
FUNC_4(struct snmp_client *VAR_2, const char **VAR_3)
{
 const char *VAR_4;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5] == ((void*)0) || *VAR_1[VAR_5] == '\0')
   continue;
  VAR_4 = FUNC_3(*VAR_3, VAR_1[VAR_5]);
  if (VAR_4 == *VAR_3) {
   *VAR_3 += FUNC_2(VAR_1[VAR_5]);
   return ((int)VAR_5);
  }
 }

 VAR_4 = *VAR_3;
 if (VAR_4[0] == ':' && VAR_4[1] == ':') {
  FUNC_1(VAR_2, "empty transport specifier");
  return (-1);
 }

 return (VAR_0);
}
