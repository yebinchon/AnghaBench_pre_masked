
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_8__ {TYPE_1__* cfm; scalar_t__ map_data; } ;
typedef TYPE_2__ mnt_map ;
typedef int filter ;
struct TYPE_10__ {int ldap_base; } ;
struct TYPE_9__ {int * ldap; } ;
struct TYPE_7__ {int cfm_flags; } ;
typedef int LDAPMessage ;
typedef TYPE_3__ ALD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_4__ VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int *) ;
 char** FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,char*,int ,int ,struct timeval*,int **) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (int ,char*,...) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,int,int ,char*,char*) ;
 char* FUNC_14 (char*) ;

int
FUNC_15(mnt_map *VAR_11, char *VAR_12, char *VAR_13, char **VAR_14, time_t *VAR_15)
{
  char **VAR_16, VAR_17[VAR_8], VAR_18[2 * VAR_8];
  char *VAR_19, *VAR_20;
  struct timeval VAR_21;
  int VAR_22, VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
  LDAPMessage *VAR_26, *VAR_27 = ((void*)0);
  ALD *VAR_28 = (ALD *) (VAR_11->map_data);

  FUNC_2("-> amu_ldap_search: map <%s>, key <%s>\n", VAR_12, VAR_13);

  VAR_21.tv_sec = 2;
  VAR_21.tv_usec = 0;
  if (VAR_28 == ((void*)0)) {
    FUNC_11(VAR_9, "LDAP panic: no map data\n");
    return (VAR_4);
  }
  if (FUNC_0(VAR_28))
    return (VAR_5);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_1, VAR_12, VAR_13);

  VAR_19 = VAR_17; VAR_20 = VAR_18;
  while (*VAR_19) {
    if (*VAR_19 == '*') {
      *VAR_20++ = '\\'; *VAR_20++ = '2'; *VAR_20++ = 'a';
      VAR_19++;
    } else {
      *VAR_20++ = *VAR_19++;
    }
  }
  *VAR_20 = '\0';
  FUNC_2("Search with filter: <%s>\n", VAR_18);
  for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
    VAR_23 = FUNC_9(VAR_28->ldap,
    VAR_10.ldap_base,
    VAR_6,
    VAR_18,
    0,
    0,
    &VAR_21,
    &VAR_27);
    if (VAR_23 == 128)
      break;
    if (VAR_27) {
      FUNC_8(VAR_27);
      VAR_27 = ((void*)0);
    }
    FUNC_11(VAR_9, "LDAP search attempt %d failed: %s\n",
        VAR_22 + 1, FUNC_5(VAR_23));
    if (VAR_23 != VAR_7) {
      FUNC_2("amu_ldap_search: unbinding...\n");
      FUNC_1(VAR_28->ldap);
      VAR_28->ldap = ((void*)0);
      if (FUNC_0(VAR_28))
        return (VAR_5);
    }
  }

  switch (VAR_23) {
  case 128:
    break;
  case 129:
    FUNC_2("No object\n");
    if (VAR_27)
      FUNC_8(VAR_27);
    return (VAR_5);
  default:
    FUNC_11(VAR_9, "LDAP search failed: %s\n",
  FUNC_5(VAR_23));
    if (VAR_27)
      FUNC_8(VAR_27);
    return (VAR_4);
  }

  VAR_25 = FUNC_3(VAR_28->ldap, VAR_27);
  FUNC_2("Search found %d entries\n", VAR_25);
  if (VAR_25 == 0) {
    FUNC_8(VAR_27);
    return (VAR_5);
  }
  VAR_26 = FUNC_6(VAR_28->ldap, VAR_27);
  VAR_16 = FUNC_7(VAR_28->ldap, VAR_26, VAR_0);
  VAR_24 = FUNC_4(VAR_16);
  if (VAR_24 == 0) {
    FUNC_11(VAR_9, "Missing value for %s in map %s\n", VAR_13, VAR_12);
    FUNC_10(VAR_16);
    FUNC_8(VAR_27);
    return (VAR_4);
  }
  FUNC_2("Map %s, %s => %s\n", VAR_12, VAR_13, VAR_16[0]);
  if (VAR_16[0]) {
    if (VAR_11->cfm && (VAR_11->cfm->cfm_flags & VAR_3))
      *VAR_14 = FUNC_12(VAR_13, VAR_16[0]);
    else
      *VAR_14 = FUNC_14(VAR_16[0]);
    VAR_23 = 0;
  } else {
    FUNC_11(VAR_9, "Empty value for %s in map %s\n", VAR_13, VAR_12);
    VAR_23 = VAR_5;
  }
  FUNC_8(VAR_27);
  FUNC_10(VAR_16);

  return (VAR_23);
}
