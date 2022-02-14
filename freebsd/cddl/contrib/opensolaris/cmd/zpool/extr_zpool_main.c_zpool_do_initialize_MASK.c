
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
struct option {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef int pool_initialize_func_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_5 (int,char**,char*,struct option*,int *) ;
 char* FUNC_6 (char*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int *) ;
 int * FUNC_12 (int ,char*) ;

int
FUNC_13(int VAR_10, char **VAR_11)
{
 int VAR_12;
 char *VAR_13;
 zpool_handle_t *VAR_14;
 nvlist_t *VAR_15;
 int VAR_16 = 0;

 struct option VAR_17[] = {
  {"cancel", VAR_6, ((void*)0), 'c'},
  {"suspend", VAR_6, ((void*)0), 's'},
  {0, 0, 0, 0}
 };

 pool_initialize_func_t VAR_18 = VAR_2;
 while ((VAR_12 = FUNC_5(VAR_10, VAR_11, "cs", VAR_17, ((void*)0))) != -1) {
  switch (VAR_12) {
  case 'c':
   if (VAR_18 != VAR_2) {
    (void) FUNC_4(VAR_9, "%s", FUNC_6("-c cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_18 = VAR_1;
   break;
  case 's':
   if (VAR_18 != VAR_2) {
    (void) FUNC_4(VAR_9, "%s", FUNC_6("-s cannot be "
        "combined with other options\n"));
    FUNC_7(VAR_0);
   }
   VAR_18 = VAR_3;
   break;
  case '?':
   if (VAR_8 != 0) {
    (void) FUNC_4(VAR_9,
        FUNC_6("invalid option '%c'\n"), VAR_8);
   } else {
    (void) FUNC_4(VAR_9,
        FUNC_6("invalid option '%s'\n"),
        VAR_11[VAR_7 - 1]);
   }
   FUNC_7(VAR_0);
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;

 if (VAR_10 < 1) {
  (void) FUNC_4(VAR_9, "%s", FUNC_6("missing pool name argument\n"));
  FUNC_7(VAR_0);
  return (-1);
 }

 VAR_13 = VAR_11[0];
 VAR_14 = FUNC_12(VAR_5, VAR_13);
 if (VAR_14 == ((void*)0))
  return (-1);

 VAR_15 = FUNC_1();
 if (VAR_10 == 1) {

  nvlist_t *VAR_19 = FUNC_10(VAR_14, ((void*)0));
  nvlist_t *VAR_20 = FUNC_3(VAR_19,
      VAR_4);
  FUNC_9(VAR_14, VAR_20, VAR_15);
 } else {
  int VAR_21;
  for (VAR_21 = 1; VAR_21 < VAR_10; VAR_21++) {
   FUNC_0(VAR_15, VAR_11[VAR_21]);
  }
 }

 VAR_16 = FUNC_11(VAR_14, VAR_18, VAR_15);

 FUNC_2(VAR_15);
 FUNC_8(VAR_14);

 return (VAR_16);
}
