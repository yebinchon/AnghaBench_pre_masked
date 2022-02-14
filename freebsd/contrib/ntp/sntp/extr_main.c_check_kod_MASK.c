
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char kod_entry ;
struct addrinfo {int dummy; } ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (struct addrinfo const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char**) ;

int
FUNC_5(
 const struct addrinfo * VAR_0
 )
{
 char *VAR_1;
 struct kod_entry *VAR_2;


 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(2, ("check_kod: checking <%s>\n", VAR_1));
 if (FUNC_4(VAR_1, &VAR_2)) {
  FUNC_3("prior KoD for %s, skipping.\n",
   VAR_1);
  FUNC_2(VAR_2);
  FUNC_2(VAR_1);

  return 1;
 }
 FUNC_2(VAR_1);

 return 0;
}
