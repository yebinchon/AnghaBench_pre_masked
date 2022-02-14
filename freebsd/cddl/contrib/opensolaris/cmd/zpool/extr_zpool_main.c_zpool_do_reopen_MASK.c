
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(int VAR_4, char **VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 zpool_handle_t *VAR_8;
 char *VAR_9;


 while ((VAR_6 = FUNC_1(VAR_4, VAR_5, "")) != -1) {
  switch (VAR_6) {
  case '?':
   (void) FUNC_0(VAR_3, FUNC_2("invalid option '%c'\n"),
       VAR_2);
   FUNC_3(VAR_0);
  }
 }

 VAR_4--;
 VAR_5++;

 if (VAR_4 < 1) {
  (void) FUNC_0(VAR_3, "%s", FUNC_2("missing pool name\n"));
  FUNC_3(VAR_0);
 }

 if (VAR_4 > 1) {
  (void) FUNC_0(VAR_3, "%s", FUNC_2("too many arguments\n"));
  FUNC_3(VAR_0);
 }

 VAR_9 = VAR_5[0];
 if ((VAR_8 = FUNC_5(VAR_1, VAR_9)) == ((void*)0))
  return (1);

 VAR_7 = FUNC_6(VAR_8);
 FUNC_4(VAR_8);
 return (VAR_7);
}
