
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int filter ;
struct TYPE_6__ {int ldap_base; } ;
struct TYPE_5__ {int * ldap; } ;
typedef int LDAPMessage ;
typedef TYPE_1__ ALD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__ VAR_9 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (char**) ;
 char* FUNC_5 (int) ;
 int * FUNC_6 (int *,int *) ;
 char** FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,char*,int ,int ,struct timeval*,int **) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 (char*,char**,int) ;
 int FUNC_13 (char*,int,int ,char*) ;

__attribute__((used)) static int
FUNC_14(ALD *VAR_10, char *VAR_11, time_t *VAR_12)
{
  struct timeval VAR_13;
  char **VAR_14, *VAR_15;
  char VAR_16[VAR_7];
  int VAR_17, VAR_18 = 0, VAR_19 = 0;
  LDAPMessage *VAR_20 = ((void*)0), *VAR_21;

  FUNC_2("-> get_ldap_timestamp: map <%s>\n", VAR_11);

  VAR_13.tv_sec = 3;
  VAR_13.tv_usec = 0;
  FUNC_13(VAR_16, sizeof(VAR_16), VAR_2, VAR_11);
  FUNC_2("Getting timestamp for map %s\n", VAR_11);
  FUNC_2("Filter is: %s\n", VAR_16);
  FUNC_2("Base is: %s\n", VAR_9.ldap_base);
  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
    VAR_18 = FUNC_9(VAR_10->ldap,
    VAR_9.ldap_base,
    VAR_4,
    VAR_16,
    0,
    0,
    &VAR_13,
    &VAR_20);
    if (VAR_18 == VAR_5)
      break;
    if (VAR_20) {
      FUNC_8(VAR_20);
      VAR_20 = ((void*)0);
    }
    FUNC_11(VAR_8, "Timestamp LDAP search attempt %d failed: %s\n",
  VAR_17 + 1, FUNC_5(VAR_18));
    if (VAR_18 != VAR_6) {
      FUNC_2("get_ldap_timestamp: unbinding...\n");
      FUNC_1(VAR_10->ldap);
      VAR_10->ldap = ((void*)0);
      if (FUNC_0(VAR_10))
        return (VAR_3);
    }
    FUNC_2("Timestamp search failed, trying again...\n");
  }

  if (VAR_18 != VAR_5) {
    *VAR_12 = 0;
    FUNC_11(VAR_8, "LDAP timestamp search failed: %s\n",
  FUNC_5(VAR_18));
    if (VAR_20)
      FUNC_8(VAR_20);
    return (VAR_3);
  }

  VAR_19 = FUNC_3(VAR_10->ldap, VAR_20);
  if (VAR_19 == 0) {
    FUNC_11(VAR_8, "No timestamp entry for map %s\n", VAR_11);
    *VAR_12 = 0;
    FUNC_8(VAR_20);
    return (VAR_3);
  }

  VAR_21 = FUNC_6(VAR_10->ldap, VAR_20);
  VAR_14 = FUNC_7(VAR_10->ldap, VAR_21, VAR_1);
  if (FUNC_4(VAR_14) == 0) {
    FUNC_11(VAR_8, "Missing timestamp value for map %s\n", VAR_11);
    *VAR_12 = 0;
    FUNC_10(VAR_14);
    FUNC_8(VAR_20);
    return (VAR_3);
  }
  FUNC_2("TS value is:%s:\n", VAR_14[0]);

  if (VAR_14[0]) {
    *VAR_12 = (time_t) FUNC_12(VAR_14[0], &VAR_15, 10);
    if (VAR_15 == VAR_14[0]) {
      FUNC_11(VAR_8, "Unable to decode ldap timestamp %s for map %s\n",
    VAR_14[0], VAR_11);
      VAR_18 = VAR_3;
    }
    if (!(*VAR_12 > 0)) {
      FUNC_11(VAR_8, "Nonpositive timestamp %ld for map %s\n",
    (u_long) *VAR_12, VAR_11);
      VAR_18 = VAR_3;
    }
  } else {
    FUNC_11(VAR_8, "Empty timestamp value for map %s\n", VAR_11);
    *VAR_12 = 0;
    VAR_18 = VAR_3;
  }

  FUNC_10(VAR_14);
  FUNC_8(VAR_20);
  FUNC_2("The timestamp for %s is %ld (err=%d)\n", VAR_11, (u_long) *VAR_12, VAR_18);
  return (VAR_18);
}
