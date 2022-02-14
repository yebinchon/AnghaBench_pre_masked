
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int zpool_boot_label_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (int *,int ,int ,int,int ,int ,int ,int,char**) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,char*,char*,int *,int) ;

__attribute__((used)) static int
FUNC_12(int VAR_9, char **VAR_10, int VAR_11)
{
 boolean_t VAR_12 = VAR_0;
 int VAR_13;
 nvlist_t *VAR_14;
 char *VAR_15, *VAR_16, *VAR_17;
 zpool_handle_t *VAR_18;
 zpool_boot_label_t VAR_19;
 uint64_t VAR_20;
 int VAR_21;


 while ((VAR_13 = FUNC_1(VAR_9, VAR_10, "f")) != -1) {
  switch (VAR_13) {
  case 'f':
   VAR_12 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_8, FUNC_2("invalid option '%c'\n"),
       VAR_7);
   FUNC_5(VAR_0);
  }
 }

 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;


 if (VAR_9 < 1) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("missing pool name argument\n"));
  FUNC_5(VAR_0);
 }

 VAR_15 = VAR_10[0];

 if (VAR_9 < 2) {
  (void) FUNC_0(VAR_8,
      "%s", FUNC_2("missing <device> specification\n"));
  FUNC_5(VAR_0);
 }

 VAR_16 = VAR_10[1];

 if (VAR_9 < 3) {
  if (!VAR_11) {
   (void) FUNC_0(VAR_8,
       "%s", FUNC_2("missing <new_device> specification\n"));
   FUNC_5(VAR_0);
  }
  VAR_17 = VAR_16;
  VAR_9 -= 1;
  VAR_10 += 1;
 } else {
  VAR_17 = VAR_10[2];
  VAR_9 -= 2;
  VAR_10 += 2;
 }

 if (VAR_9 > 1) {
  (void) FUNC_0(VAR_8, "%s", FUNC_2("too many arguments\n"));
  FUNC_5(VAR_0);
 }

 if ((VAR_18 = FUNC_10(VAR_5, VAR_15)) == ((void*)0))
  return (1);

 if (FUNC_7(VAR_18, ((void*)0)) == ((void*)0)) {
  (void) FUNC_0(VAR_8, FUNC_2("pool '%s' is unavailable\n"),
      VAR_15);
  FUNC_6(VAR_18);
  return (1);
 }

 if (FUNC_9(VAR_18))
  VAR_19 = VAR_2;
 else
  VAR_19 = VAR_3;

 VAR_20 = FUNC_8(VAR_18, VAR_4, ((void*)0));
 VAR_14 = FUNC_3(VAR_18, VAR_12, VAR_0, VAR_11, VAR_0,
     VAR_19, VAR_20, VAR_9, VAR_10);
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_18);
  return (1);
 }

 VAR_21 = FUNC_11(VAR_18, VAR_16, VAR_17, VAR_14, VAR_11);

 FUNC_4(VAR_14);
 FUNC_6(VAR_18);

 return (VAR_21);
}
