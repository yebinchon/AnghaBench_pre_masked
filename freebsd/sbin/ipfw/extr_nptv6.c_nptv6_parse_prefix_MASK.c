
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,struct in6_addr*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3, struct in6_addr *VAR_4, int *VAR_5)
{
 char *VAR_6, *VAR_7;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 == ((void*)0))
  FUNC_0(VAR_1, ((void*)0));
 if ((VAR_7 = FUNC_4(VAR_6, '/')) != ((void*)0))
  *VAR_7++ = '\0';
 if (FUNC_3(VAR_0, VAR_6, VAR_4) != 1)
  FUNC_1(VAR_2, "Bad prefix: %s", VAR_6);
 if (VAR_7 != ((void*)0)) {
  *VAR_5 = (int)FUNC_6(VAR_7, &VAR_7, 10);
  if (*VAR_7 != '\0' || *VAR_5 <= 0 || *VAR_5 > 64)
   FUNC_1(VAR_2, "Bad prefix length: %s", VAR_3);
 } else
  *VAR_5 = 0;
 FUNC_2(VAR_6);
}
