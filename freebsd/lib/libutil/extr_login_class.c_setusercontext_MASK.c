
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef char* u_long ;
struct rtprio {scalar_t__ prio; int type; } ;
struct passwd {char* pw_name; scalar_t__ pw_gid; } ;
typedef scalar_t__ rlim_t ;
typedef int mode_t ;
typedef int mac_t ;
struct TYPE_10__ {char* lc_class; } ;
typedef TYPE_1__ login_cap_t ;
struct TYPE_11__ {int def; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 char* FUNC_4 (TYPE_1__*,char*,int *,int *) ;
 TYPE_1__* FUNC_5 (struct passwd const*) ;
 TYPE_1__* FUNC_6 (struct passwd const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 TYPE_4__* VAR_24 ;
 scalar_t__ FUNC_11 (int ,int ,struct rtprio*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__*,struct passwd const*,int ,unsigned int) ;
 scalar_t__ FUNC_16 (int ,int ,int) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ,char*,char const*,...) ;
 int FUNC_20 (int ) ;

int
FUNC_21(login_cap_t *VAR_25, const struct passwd *VAR_26, uid_t VAR_27, unsigned int VAR_28)
{
    rlim_t VAR_29;
    mode_t VAR_30;
    login_cap_t *VAR_31 = ((void*)0);
    struct rtprio VAR_32;
    int VAR_33;

    if (VAR_25 == ((void*)0)) {
 if (VAR_26 != ((void*)0) && (VAR_25 = FUNC_5(VAR_26)) != ((void*)0))
     VAR_31 = VAR_25;
    }

    if (VAR_28 & VAR_7)
 VAR_24[0].def = VAR_27 ? VAR_21 : VAR_22;


    if (VAR_26 == ((void*)0))
 VAR_28 &= ~(VAR_3 | VAR_4 | VAR_6);


    if (VAR_28 & VAR_8) {
 VAR_29 = FUNC_3(VAR_25, "priority", VAR_1, VAR_1);

 if (VAR_29 > VAR_13) {
     VAR_32.type = VAR_16;
     VAR_29 -= VAR_13 + 1;
     VAR_32.prio = VAR_29 > VAR_17 ? VAR_17 : VAR_29;
     if (FUNC_11(VAR_20, 0, &VAR_32))
  FUNC_19(VAR_12, "rtprio '%s' (%s): %m",
      VAR_26 ? VAR_26->pw_name : "-",
      VAR_25 ? VAR_25->lc_class : VAR_0);
 } else if (VAR_29 < VAR_14) {
     VAR_32.type = VAR_19;
     VAR_29 -= VAR_14 - VAR_17;
     VAR_32.prio = VAR_29 < VAR_18 ? VAR_18 : VAR_29;
     if (FUNC_11(VAR_20, 0, &VAR_32))
  FUNC_19(VAR_12, "rtprio '%s' (%s): %m",
      VAR_26 ? VAR_26->pw_name : "-",
      VAR_25 ? VAR_25->lc_class : VAR_0);
 } else {
     if (FUNC_16(VAR_15, 0, (int)VAR_29) != 0)
  FUNC_19(VAR_12, "setpriority '%s' (%s): %m",
      VAR_26 ? VAR_26->pw_name : "-",
      VAR_25 ? VAR_25->lc_class : VAR_0);
 }
    }


    if (VAR_28 & VAR_3) {
 if (FUNC_12(VAR_26->pw_gid) != 0) {
     FUNC_19(VAR_11, "setgid(%lu): %m", (u_long)VAR_26->pw_gid);
     FUNC_2(VAR_31);
     return (-1);
 }
 if (FUNC_1(VAR_26->pw_name, VAR_26->pw_gid) == -1) {
     FUNC_19(VAR_11, "initgroups(%s,%lu): %m", VAR_26->pw_name,
     (u_long)VAR_26->pw_gid);
     FUNC_2(VAR_31);
     return (-1);
 }
    }


    if ((VAR_28 & VAR_6) && FUNC_9(((void*)0)) == 1) {
 const char *VAR_34;
 mac_t VAR_35;

 VAR_34 = FUNC_4(VAR_25, "label", ((void*)0), ((void*)0));
 if (VAR_34 != ((void*)0)) {
     if (FUNC_8(&VAR_35, VAR_34) == -1) {
  FUNC_19(VAR_11, "mac_from_text('%s') for %s: %m",
      VAR_26->pw_name, VAR_34);
  return (-1);
     }
     if (FUNC_10(VAR_35) == -1)
  VAR_33 = VAR_23;
     else
  VAR_33 = 0;
     FUNC_7(VAR_35);
     if (VAR_33 != 0) {
  FUNC_19(VAR_11, "mac_set_proc('%s') for %s: %s",
      VAR_34, VAR_26->pw_name, FUNC_18(VAR_33));
  return (-1);
     }
 }
    }


    if ((VAR_28 & VAR_4) && FUNC_13(VAR_26->pw_name) != 0) {
 FUNC_19(VAR_11, "setlogin(%s): %m", VAR_26->pw_name);
 FUNC_2(VAR_31);
 return (-1);
    }


    if (VAR_25 != ((void*)0) && VAR_25->lc_class != ((void*)0) && (VAR_28 & VAR_5)) {
 VAR_33 = FUNC_14(VAR_25->lc_class);
 if (VAR_33 != 0) {
     FUNC_19(VAR_11, "setloginclass(%s): %m", VAR_25->lc_class);




 }
    }

    VAR_30 = (VAR_28 & VAR_9) ? FUNC_20(VAR_2) : 0;
    VAR_30 = FUNC_15(VAR_25, VAR_26, VAR_30, VAR_28);
    FUNC_2(VAR_31);


    if ((VAR_28 & VAR_10) && FUNC_17(VAR_27) != 0) {
 FUNC_19(VAR_11, "setuid(%lu): %m", (u_long)VAR_27);
 return (-1);
    }




    if (FUNC_0() == VAR_27 && (VAR_25 = FUNC_6(VAR_26)) != ((void*)0)) {
 VAR_30 = FUNC_15(VAR_25, VAR_26, VAR_30, VAR_28);
 FUNC_2(VAR_25);
    }


    if (VAR_28 & VAR_9)
 FUNC_20(VAR_30);

    return (0);
}
