
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {char* ifname; TYPE_1__* conf; } ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct group {scalar_t__ gr_gid; } ;
struct ctrl_iface_priv {int sock; int android_control_socket; } ;
typedef scalar_t__ gid_t ;
typedef int addr ;
struct TYPE_2__ {char* ctrl_interface_group; int ctrl_interface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,int ,struct wpa_supplicant*,struct ctrl_iface_priv*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_6 (int,int ,...) ;
 struct group* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct sockaddr_un*,int ,int) ;
 int FUNC_12 (int ,int,char*,int ) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 char* FUNC_17 (char*,char*) ;
 int FUNC_18 (int ,int ,int ) ;
 char* FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (char*,char**,int) ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,char*,...) ;
 int VAR_18 ;
 char* FUNC_24 (struct wpa_supplicant*) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_25(struct wpa_supplicant *VAR_20,
         struct ctrl_iface_priv *VAR_21)
{
 struct sockaddr_un VAR_22;
 char *VAR_23 = ((void*)0);
 gid_t VAR_24 = 0;
 int VAR_25 = 0;
 char *VAR_26, *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
 struct group *VAR_29;
 char *VAR_30;
 int VAR_31;

 VAR_26 = FUNC_13(VAR_20->conf->ctrl_interface);
 if (VAR_26 == ((void*)0))
  goto fail;
 if (FUNC_16(VAR_26, "DIR=", 4) == 0) {
  VAR_27 = VAR_26 + 4;
  VAR_28 = FUNC_17(VAR_27, " GROUP=");
  if (VAR_28) {
   *VAR_28 = '\0';
   VAR_28 += 7;
  }
 } else {
  VAR_27 = VAR_26;
  VAR_28 = VAR_20->conf->ctrl_interface_group;
 }

 if (FUNC_9(VAR_27, VAR_13 | VAR_12) < 0) {
  if (VAR_17 == VAR_1) {
   FUNC_23(VAR_4, "Using existing control "
       "interface directory.");
  } else {
   FUNC_23(VAR_5, "mkdir[ctrl_interface=%s]: %s",
       VAR_27, FUNC_19(VAR_17));
   goto fail;
  }
 }
 if (VAR_28) {
  VAR_29 = FUNC_7(VAR_28);
  if (VAR_29) {
   VAR_24 = VAR_29->gr_gid;
   VAR_25 = 1;
   FUNC_23(VAR_4, "ctrl_interface_group=%d"
       " (from group name '%s')",
       (int) VAR_24, VAR_28);
  } else {

   VAR_24 = FUNC_20(VAR_28, &VAR_30, 10);
   if (*VAR_28 == '\0' || *VAR_30 != '\0') {
    FUNC_23(VAR_5, "CTRL: Invalid group "
        "'%s'", VAR_28);
    goto fail;
   }
   VAR_25 = 1;
   FUNC_23(VAR_4, "ctrl_interface_group=%d",
       (int) VAR_24);
  }
 }

 if (VAR_25 && FUNC_8(VAR_27, -1, VAR_24) < 0) {
  FUNC_23(VAR_5, "lchown[ctrl_interface=%s,gid=%d]: %s",
      VAR_27, (int) VAR_24, FUNC_19(VAR_17));
  goto fail;
 }


 if (VAR_25 &&
     FUNC_2(VAR_27, VAR_11 | VAR_14 | VAR_16 | VAR_10 | VAR_15) < 0) {
  FUNC_23(VAR_5, "CTRL: chmod[ctrl_interface]: %s",
      FUNC_19(VAR_17));
  goto fail;
 }

 if (FUNC_15(VAR_27) + 1 + FUNC_15(VAR_20->ifname) >=
     sizeof(VAR_22.sun_path)) {
  FUNC_23(VAR_5, "ctrl_iface path limit exceeded");
  goto fail;
 }

 VAR_21->sock = FUNC_18(VAR_8, VAR_9, 0);
 if (VAR_21->sock < 0) {
  FUNC_23(VAR_5, "socket(PF_UNIX): %s", FUNC_19(VAR_17));
  goto fail;
 }

 FUNC_11(&VAR_22, 0, sizeof(VAR_22));



 VAR_22.sun_family = VAR_0;
 VAR_23 = FUNC_24(VAR_20);
 if (VAR_23 == ((void*)0))
  goto fail;
 FUNC_14(VAR_22.sun_path, VAR_23, sizeof(VAR_22.sun_path));
 if (FUNC_1(VAR_21->sock, (struct sockaddr *) &VAR_22, sizeof(VAR_22)) < 0) {
  FUNC_23(VAR_4, "ctrl_iface bind(PF_UNIX) failed: %s",
      FUNC_19(VAR_17));
  if (FUNC_4(VAR_21->sock, (struct sockaddr *) &VAR_22,
       sizeof(VAR_22)) < 0) {
   FUNC_23(VAR_4, "ctrl_iface exists, but does not"
       " allow connections - assuming it was left"
       "over from forced program termination");
   if (FUNC_21(VAR_23) < 0) {
    FUNC_23(VAR_5,
        "Could not unlink existing ctrl_iface socket '%s': %s",
        VAR_23, FUNC_19(VAR_17));
    goto fail;
   }
   if (FUNC_1(VAR_21->sock, (struct sockaddr *) &VAR_22,
     sizeof(VAR_22)) < 0) {
    FUNC_23(VAR_5, "supp-ctrl-iface-init: bind(PF_UNIX): %s",
        FUNC_19(VAR_17));
    goto fail;
   }
   FUNC_23(VAR_4, "Successfully replaced leftover "
       "ctrl_iface socket '%s'", VAR_23);
  } else {
   FUNC_23(VAR_6, "ctrl_iface exists and seems to "
       "be in use - cannot override it");
   FUNC_23(VAR_6, "Delete '%s' manually if it is "
       "not used anymore", VAR_23);
   FUNC_10(VAR_23);
   VAR_23 = ((void*)0);
   goto fail;
  }
 }

 if (VAR_25 && FUNC_8(VAR_23, -1, VAR_24) < 0) {
  FUNC_23(VAR_5, "lchown[ctrl_interface=%s,gid=%d]: %s",
      VAR_23, (int) VAR_24, FUNC_19(VAR_17));
  goto fail;
 }

 if (FUNC_2(VAR_23, VAR_13 | VAR_12) < 0) {
  FUNC_23(VAR_5, "chmod[ctrl_interface=%s]: %s",
      VAR_23, FUNC_19(VAR_17));
  goto fail;
 }
 FUNC_10(VAR_23);
 VAR_31 = FUNC_6(VAR_21->sock, VAR_2);
 if (VAR_31 >= 0) {
  VAR_31 |= VAR_7;
  if (FUNC_6(VAR_21->sock, VAR_3, VAR_31) < 0) {
   FUNC_23(VAR_6, "fcntl(ctrl, O_NONBLOCK): %s",
       FUNC_19(VAR_17));

  }
 }

 FUNC_5(VAR_21->sock, VAR_19,
     VAR_20, VAR_21);
 FUNC_22(VAR_18);

 FUNC_10(VAR_26);
 return 0;

fail:
 if (VAR_21->sock >= 0) {
  FUNC_3(VAR_21->sock);
  VAR_21->sock = -1;
 }
 if (VAR_23) {
  FUNC_21(VAR_23);
  FUNC_10(VAR_23);
 }
 FUNC_10(VAR_26);
 return -1;
}
