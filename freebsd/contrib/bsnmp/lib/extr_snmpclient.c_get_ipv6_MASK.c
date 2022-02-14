
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {int dummy; } ;
struct addrinfo {int ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int FUNC_4 (struct snmp_client*,char*,...) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static inline const char *
FUNC_6(struct snmp_client *VAR_7, const char **VAR_8)
{
 char VAR_9[VAR_4 + VAR_3];
 struct addrinfo VAR_10, *VAR_11;
 int VAR_12;

 if (**VAR_8 != '[')
  return (*VAR_8 + 1);

 const char *VAR_13 = *VAR_8 + 1;
 while (*VAR_13 != ']' ) {
  if (*VAR_13 == '\0') {
   FUNC_4(VAR_7, "unterminated IPv6 address '%.*s'",
       VAR_13 - *VAR_8, *VAR_8);
   return (((void*)0));
  }
  VAR_13++;
 }

 if (VAR_13 - *VAR_8 > VAR_4 + VAR_3) {
  FUNC_4(VAR_7, "IPv6 address too long '%.*s'", VAR_13 - *VAR_8, *VAR_8);
  return (((void*)0));
 }

 FUNC_5(VAR_9, *VAR_8 + 1, VAR_13 - (*VAR_8 + 1));
 VAR_9[VAR_13 - (*VAR_8 + 1)] = '\0';

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_flags = VAR_1 | VAR_2;
 VAR_10.ai_family = VAR_0;
 VAR_10.ai_socktype = VAR_6;
 VAR_10.ai_protocol = VAR_5;
 VAR_12 = FUNC_2(VAR_9, ((void*)0), &VAR_10, &VAR_11);
 if (VAR_12 != 0) {
  FUNC_4(VAR_7, "%s: %s", VAR_9, FUNC_1(VAR_12));
  return (((void*)0));
 }
 FUNC_0(VAR_11);
 *VAR_8 = VAR_13 + 1;
 return (VAR_13);
}
