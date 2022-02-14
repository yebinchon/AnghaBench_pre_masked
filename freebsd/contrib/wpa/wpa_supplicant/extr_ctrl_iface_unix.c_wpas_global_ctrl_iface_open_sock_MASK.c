
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ctrl_interface; char* ctrl_interface_group; } ;
struct wpa_global {TYPE_1__ params; } ;
struct sockaddr_un {int sun_len; char* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct group {scalar_t__ gr_gid; } ;
struct ctrl_iface_global_priv {int sock; int android_control_socket; } ;
typedef scalar_t__ gid_t ;
typedef int addr ;


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
 int VAR_10 ;
 void* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,int ,struct wpa_global*,struct ctrl_iface_global_priv*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int,int ,...) ;
 struct group* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,int,scalar_t__) ;
 int FUNC_9 (struct sockaddr_un*,int ,int) ;
 int FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char*,char**,int) ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int ,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_17(struct wpa_global *VAR_13,
         struct ctrl_iface_global_priv *VAR_14)
{
 struct sockaddr_un VAR_15;
 const char *VAR_16 = VAR_13->params.ctrl_interface;
 int VAR_17;

 FUNC_16(VAR_3, "Global control interface '%s'", VAR_16);
 VAR_14->sock = FUNC_12(VAR_7, VAR_8, 0);
 if (VAR_14->sock < 0) {
  FUNC_16(VAR_4, "socket(PF_UNIX): %s", FUNC_13(VAR_11));
  goto fail;
 }

 FUNC_9(&VAR_15, 0, sizeof(VAR_15));



 VAR_15.sun_family = VAR_0;

 if (FUNC_11(VAR_16, "@abstract:", 10) == 0) {
  VAR_15.sun_path[0] = '\0';
  FUNC_10(VAR_15.sun_path + 1, VAR_16 + 10,
      sizeof(VAR_15.sun_path) - 1);
  if (FUNC_1(VAR_14->sock, (struct sockaddr *) &VAR_15, sizeof(VAR_15)) <
      0) {
   FUNC_16(VAR_4, "supp-global-ctrl-iface-init: "
       "bind(PF_UNIX;%s) failed: %s",
       VAR_16, FUNC_13(VAR_11));
   goto fail;
  }
  FUNC_16(VAR_3, "Using Abstract control socket '%s'",
      VAR_16 + 10);
  goto havesock;
 }

 FUNC_10(VAR_15.sun_path, VAR_16, sizeof(VAR_15.sun_path));
 if (FUNC_1(VAR_14->sock, (struct sockaddr *) &VAR_15, sizeof(VAR_15)) < 0) {
  FUNC_16(VAR_5, "supp-global-ctrl-iface-init(%s) (will try fixup): bind(PF_UNIX): %s",
      VAR_16, FUNC_13(VAR_11));
  if (FUNC_4(VAR_14->sock, (struct sockaddr *) &VAR_15,
       sizeof(VAR_15)) < 0) {
   FUNC_16(VAR_3, "ctrl_iface exists, but does not"
       " allow connections - assuming it was left"
       "over from forced program termination");
   if (FUNC_15(VAR_16) < 0) {
    FUNC_16(VAR_4,
        "Could not unlink existing ctrl_iface socket '%s': %s",
        VAR_16, FUNC_13(VAR_11));
    goto fail;
   }
   if (FUNC_1(VAR_14->sock, (struct sockaddr *) &VAR_15,
     sizeof(VAR_15)) < 0) {
    FUNC_16(VAR_4, "supp-glb-iface-init: bind(PF_UNIX;%s): %s",
        VAR_16, FUNC_13(VAR_11));
    goto fail;
   }
   FUNC_16(VAR_3, "Successfully replaced leftover "
       "ctrl_iface socket '%s'",
       VAR_16);
  } else {
   FUNC_16(VAR_5, "ctrl_iface exists and seems to "
       "be in use - cannot override it");
   FUNC_16(VAR_5, "Delete '%s' manually if it is "
       "not used anymore",
       VAR_16);
   goto fail;
  }
 }

 FUNC_16(VAR_3, "Using UNIX control socket '%s'", VAR_16);

 if (VAR_13->params.ctrl_interface_group) {
  char *VAR_18 = VAR_13->params.ctrl_interface_group;
  gid_t VAR_19 = 0;
  struct group *VAR_20;
  char *VAR_21;

  VAR_20 = FUNC_7(VAR_18);
  if (VAR_20) {
   VAR_19 = VAR_20->gr_gid;
   FUNC_16(VAR_3, "ctrl_interface_group=%d"
       " (from group name '%s')",
       (int) VAR_19, VAR_18);
  } else {

   VAR_19 = FUNC_14(VAR_18, &VAR_21, 10);
   if (*VAR_18 == '\0' || *VAR_21 != '\0') {
    FUNC_16(VAR_4, "CTRL: Invalid group "
        "'%s'", VAR_18);
    goto fail;
   }
   FUNC_16(VAR_3, "ctrl_interface_group=%d",
       (int) VAR_19);
  }
  if (FUNC_8(VAR_16, -1, VAR_19) < 0) {
   FUNC_16(VAR_4,
       "lchown[global_ctrl_interface=%s,gid=%d]: %s",
       VAR_16, (int) VAR_19, FUNC_13(VAR_11));
   goto fail;
  }

  if (FUNC_2(VAR_16, VAR_10 | VAR_9) < 0) {
   FUNC_16(VAR_4,
       "chmod[global_ctrl_interface=%s]: %s",
       VAR_16, FUNC_13(VAR_11));
   goto fail;
  }
 } else {
  if (FUNC_2(VAR_16, VAR_10) < 0) {
   FUNC_16(VAR_3,
       "chmod[global_ctrl_interface=%s](S_IRWXU): %s",
       VAR_16, FUNC_13(VAR_11));


  }
 }

havesock:





 VAR_17 = FUNC_6(VAR_14->sock, VAR_1);
 if (VAR_17 >= 0) {
  VAR_17 |= VAR_6;
  if (FUNC_6(VAR_14->sock, VAR_2, VAR_17) < 0) {
   FUNC_16(VAR_5, "fcntl(ctrl, O_NONBLOCK): %s",
       FUNC_13(VAR_11));

  }
 }

 FUNC_5(VAR_14->sock,
     VAR_12,
     VAR_13, VAR_14);

 return 0;

fail:
 if (VAR_14->sock >= 0) {
  FUNC_3(VAR_14->sock);
  VAR_14->sock = -1;
 }
 return -1;
}
