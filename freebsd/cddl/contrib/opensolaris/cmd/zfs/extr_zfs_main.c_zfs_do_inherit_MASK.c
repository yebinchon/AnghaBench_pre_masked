
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_3__ {char* cb_propname; scalar_t__ cb_received; int member_0; } ;
typedef TYPE_1__ inherit_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char**,int,int ,int *,int *,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_16, char **VAR_17)
{
 int VAR_18;
 zfs_prop_t VAR_19;
 inherit_cbdata_t VAR_20 = { 0 };
 char *VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 boolean_t VAR_24 = VAR_0;


 while ((VAR_18 = FUNC_1(VAR_16, VAR_17, "rS")) != -1) {
  switch (VAR_18) {
  case 'r':
   VAR_23 |= VAR_2;
   break;
  case 'S':
   VAR_24 = VAR_1;
   break;
  case '?':
  default:
   (void) FUNC_0(VAR_15, FUNC_2("invalid option '%c'\n"),
       VAR_14);
   FUNC_3(VAR_0);
  }
 }

 VAR_16 -= VAR_13;
 VAR_17 += VAR_13;


 if (VAR_16 < 1) {
  (void) FUNC_0(VAR_15, "%s", FUNC_2("missing property argument\n"));
  FUNC_3(VAR_0);
 }
 if (VAR_16 < 2) {
  (void) FUNC_0(VAR_15, "%s", FUNC_2("missing dataset argument\n"));
  FUNC_3(VAR_0);
 }

 VAR_21 = VAR_17[0];
 VAR_16--;
 VAR_17++;

 if ((VAR_19 = FUNC_5(VAR_21)) != VAR_10) {
  if (FUNC_7(VAR_19)) {
   (void) FUNC_0(VAR_15, FUNC_2(
       "%s property is read-only\n"),
       VAR_21);
   return (1);
  }
  if (!FUNC_6(VAR_19) && !VAR_24) {
   (void) FUNC_0(VAR_15, FUNC_2("'%s' property cannot "
       "be inherited\n"), VAR_21);
   if (VAR_19 == VAR_3 ||
       VAR_19 == VAR_6 ||
       VAR_19 == VAR_4 ||
       VAR_19 == VAR_5) {
    (void) FUNC_0(VAR_15, FUNC_2("use 'zfs set "
        "%s=none' to clear\n"), VAR_21);
    (void) FUNC_0(VAR_15, FUNC_2("use 'zfs "
        "inherit -S %s' to revert to received "
        "value\n"), VAR_21);
   }
   return (1);
  }
  if (VAR_24 && (VAR_19 == VAR_8 ||
      VAR_19 == VAR_7)) {
   (void) FUNC_0(VAR_15, FUNC_2("'%s' property cannot "
       "be reverted to a received value\n"), VAR_21);
   return (1);
  }
 } else if (!FUNC_8(VAR_21)) {
  (void) FUNC_0(VAR_15, FUNC_2("invalid property '%s'\n"),
      VAR_21);
  FUNC_3(VAR_0);
 }

 VAR_20.cb_propname = VAR_21;
 VAR_20.cb_received = VAR_24;

 if (VAR_23 & VAR_2) {
  VAR_22 = FUNC_4(VAR_16, VAR_17, VAR_23, VAR_9,
      ((void*)0), ((void*)0), 0, VAR_12, &VAR_20);
 } else {
  VAR_22 = FUNC_4(VAR_16, VAR_17, VAR_23, VAR_9,
      ((void*)0), ((void*)0), 0, VAR_11, &VAR_20);
 }

 return (VAR_22);
}
