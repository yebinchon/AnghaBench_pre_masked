
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {char* cport; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

int
FUNC_4(struct snmp_client *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (VAR_1 == ((void*)0)) {
  if (VAR_0->cport != ((void*)0))
   FUNC_0(VAR_0->cport);
  VAR_0->cport = ((void*)0);
 } else {
  if ((VAR_2 = FUNC_1(FUNC_3(VAR_1) + 1)) == ((void*)0))
   return (-1);
  FUNC_2(VAR_2, VAR_1);
  if (VAR_0->cport != ((void*)0))
   FUNC_0(VAR_0->cport);
  VAR_0->cport = VAR_2;
 }
 return (0);
}
