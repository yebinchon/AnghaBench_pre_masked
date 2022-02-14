
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;

int
FUNC_7(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 char *VAR_10;
 zpool_handle_t *VAR_11;
 int VAR_12 = 0;
 boolean_t VAR_13 = VAR_0;


 while ((VAR_8 = FUNC_1(VAR_6, VAR_7, "ft")) != -1) {
  switch (VAR_8) {
  case 't':
   VAR_13 = VAR_1;
   break;
  case 'f':
  case '?':
   (void) FUNC_0(VAR_5, FUNC_2("invalid option '%c'\n"),
       VAR_4);
   FUNC_3(VAR_0);
  }
 }

 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;


 if (VAR_6 < 1) {
  (void) FUNC_0(VAR_5, "%s", FUNC_2("missing pool name\n"));
  FUNC_3(VAR_0);
 }
 if (VAR_6 < 2) {
  (void) FUNC_0(VAR_5, "%s", FUNC_2("missing device name\n"));
  FUNC_3(VAR_0);
 }

 VAR_10 = VAR_7[0];

 if ((VAR_11 = FUNC_5(VAR_2, VAR_10)) == ((void*)0))
  return (1);

 for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
  if (FUNC_6(VAR_11, VAR_7[VAR_9], VAR_13) != 0)
   VAR_12 = 1;
 }

 FUNC_4(VAR_11);

 return (VAR_12);
}
