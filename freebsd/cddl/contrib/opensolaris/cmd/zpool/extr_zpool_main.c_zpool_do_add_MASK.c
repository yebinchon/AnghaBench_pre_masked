
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int zpool_boot_label_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (int *,scalar_t__,int,scalar_t__,scalar_t__,int ,int ,int,char**) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int **) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,char*,int *,int ,scalar_t__) ;
 int FUNC_8 (char*,char*) ;
 int VAR_9 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,int *) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int * FUNC_17 (int ,char*) ;

int
FUNC_18(int VAR_10, char **VAR_11)
{
 boolean_t VAR_12 = VAR_0;
 boolean_t VAR_13 = VAR_0;
 int VAR_14;
 nvlist_t *VAR_15;
 char *VAR_16;
 zpool_boot_label_t VAR_17;
 uint64_t VAR_18;
 int VAR_19;
 zpool_handle_t *VAR_20;
 nvlist_t *VAR_21;


 while ((VAR_14 = FUNC_1(VAR_10, VAR_11, "fn")) != -1) {
  switch (VAR_14) {
  case 'f':
   VAR_12 = VAR_1;
   break;
  case 'n':
   VAR_13 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_9, FUNC_2("invalid option '%c'\n"),
       VAR_8);
   FUNC_9(VAR_0);
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;


 if (VAR_10 < 1) {
  (void) FUNC_0(VAR_9, "%s", FUNC_2("missing pool name argument\n"));
  FUNC_9(VAR_0);
 }
 if (VAR_10 < 2) {
  (void) FUNC_0(VAR_9, "%s", FUNC_2("missing vdev specification\n"));
  FUNC_9(VAR_0);
 }

 VAR_16 = VAR_11[0];

 VAR_10--;
 VAR_11++;

 if ((VAR_20 = FUNC_17(VAR_6, VAR_16)) == ((void*)0))
  return (1);

 if ((VAR_21 = FUNC_13(VAR_20, ((void*)0))) == ((void*)0)) {
  (void) FUNC_0(VAR_9, FUNC_2("pool '%s' is unavailable\n"),
      VAR_16);
  FUNC_12(VAR_20);
  return (1);
 }

 if (FUNC_16(VAR_20))
  VAR_17 = VAR_3;
 else
  VAR_17 = VAR_4;


 VAR_18 = FUNC_15(VAR_20, VAR_5, ((void*)0));
 VAR_15 = FUNC_3(VAR_20, VAR_12, !VAR_12, VAR_0, VAR_13,
     VAR_17, VAR_18, VAR_10, VAR_11);
 if (VAR_15 == ((void*)0)) {
  FUNC_12(VAR_20);
  return (1);
 }

 if (VAR_13) {
  nvlist_t *VAR_22;

  FUNC_10(FUNC_6(VAR_21, VAR_2,
      &VAR_22) == 0);

  (void) FUNC_8(FUNC_2("would update '%s' to the following "
      "configuration:\n"), FUNC_14(VAR_20));


  FUNC_7(VAR_20, VAR_16, VAR_22, 0, VAR_0);
  FUNC_7(VAR_20, ((void*)0), VAR_15, 0, VAR_0);


  if (FUNC_4(VAR_22) > 0) {
   FUNC_7(VAR_20, "logs", VAR_22, 0, VAR_1);
   FUNC_7(VAR_20, ((void*)0), VAR_15, 0, VAR_1);
  } else if (FUNC_4(VAR_15) > 0) {
   FUNC_7(VAR_20, "logs", VAR_15, 0, VAR_1);
  }

  VAR_19 = 0;
 } else {
  VAR_19 = (FUNC_11(VAR_20, VAR_15) != 0);
 }

 FUNC_5(VAR_15);
 FUNC_12(VAR_20);

 return (VAR_19);
}
