
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int domainname ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_2, char *VAR_3[])
{
 int VAR_4;
 char VAR_5[VAR_0];

 while ((VAR_4 = FUNC_3(VAR_2, VAR_3, "")) != -1)
  switch (VAR_4) {
  case '?':

  default:
   FUNC_7();
  }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 > 1)
  FUNC_7();

 if (*VAR_3) {
  if (FUNC_5(*VAR_3, (int)FUNC_6(*VAR_3)))
   FUNC_0(1, "setdomainname");
 } else {
  if (FUNC_2(VAR_5, (int)sizeof(VAR_5)))
   FUNC_0(1, "getdomainname");
  (void)FUNC_4("%s\n", VAR_5);
 }
 FUNC_1(0);
}
