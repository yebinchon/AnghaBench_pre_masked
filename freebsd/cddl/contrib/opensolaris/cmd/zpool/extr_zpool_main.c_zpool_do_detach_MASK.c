
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*) ;

int
FUNC_7(int VAR_5, char **VAR_6)
{
 int VAR_7;
 char *VAR_8, *VAR_9;
 zpool_handle_t *VAR_10;
 int VAR_11;


 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "f")) != -1) {
  switch (VAR_7) {
  case 'f':
  case '?':
   (void) FUNC_0(VAR_4, FUNC_2("invalid option '%c'\n"),
       VAR_3);
   FUNC_3(VAR_0);
  }
 }

 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;


 if (VAR_5 < 1) {
  (void) FUNC_0(VAR_4, "%s", FUNC_2("missing pool name argument\n"));
  FUNC_3(VAR_0);
 }

 if (VAR_5 < 2) {
  (void) FUNC_0(VAR_4,
      "%s", FUNC_2("missing <device> specification\n"));
  FUNC_3(VAR_0);
 }

 VAR_8 = VAR_6[0];
 VAR_9 = VAR_6[1];

 if ((VAR_10 = FUNC_5(VAR_1, VAR_8)) == ((void*)0))
  return (1);

 VAR_11 = FUNC_6(VAR_10, VAR_9);

 FUNC_4(VAR_10);

 return (VAR_11);
}
