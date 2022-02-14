
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct hapd_interfaces {int global_ctrl_sock; char* global_iface_path; char* global_iface_name; scalar_t__ ctrl_iface_group; } ;
struct addrinfo {int ai_addrlen; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; int ai_flags; int member_0; } ;
typedef int p ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_5 (int,int ,struct hapd_interfaces*,int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (struct addrinfo*) ;
 char* FUNC_7 (int) ;
 int VAR_16 ;
 int FUNC_8 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_9 (struct hapd_interfaces*) ;
 char* FUNC_10 (struct hapd_interfaces*) ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_12 (char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct sockaddr_un*,int ,int) ;
 int FUNC_16 (char*,int,char*,int) ;
 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (char*,char*) ;
 void* FUNC_20 (int ,int ,int ) ;
 char* FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (char*) ;
 int FUNC_23 (int ,char*,...) ;

int FUNC_24(struct hapd_interfaces *VAR_18)
{
 struct sockaddr_un VAR_19;
 int VAR_20 = -1;
 char *VAR_21 = ((void*)0);

 if (VAR_18->global_iface_path == ((void*)0)) {
  FUNC_23(VAR_8, "ctrl_iface not configured!");
  return 0;
 }

 if (FUNC_12(VAR_18->global_iface_path, VAR_14 | VAR_13) < 0) {
  if (VAR_15 == VAR_5) {
   FUNC_23(VAR_8, "Using existing control "
       "interface directory.");
  } else {
   FUNC_23(VAR_9, "mkdir[ctrl_interface]: %s",
       FUNC_21(VAR_15));
   goto fail;
  }
 } else if (VAR_18->ctrl_iface_group &&
     FUNC_11(VAR_18->global_iface_path, -1,
     VAR_18->ctrl_iface_group) < 0) {
  FUNC_23(VAR_9, "lchown[ctrl_interface]: %s",
      FUNC_21(VAR_15));
  goto fail;
 }

 if (FUNC_18(VAR_18->global_iface_path) + 1 +
     FUNC_18(VAR_18->global_iface_name) >= sizeof(VAR_19.sun_path))
  goto fail;

 VAR_20 = FUNC_20(VAR_11, VAR_12, 0);
 if (VAR_20 < 0) {
  FUNC_23(VAR_9, "socket(PF_UNIX): %s", FUNC_21(VAR_15));
  goto fail;
 }

 FUNC_15(&VAR_19, 0, sizeof(VAR_19));



 VAR_19.sun_family = VAR_2;
 VAR_21 = FUNC_10(VAR_18);
 if (VAR_21 == ((void*)0))
  goto fail;
 FUNC_17(VAR_19.sun_path, VAR_21, sizeof(VAR_19.sun_path));
 if (FUNC_1(VAR_20, (struct sockaddr *) &VAR_19, sizeof(VAR_19)) < 0) {
  FUNC_23(VAR_8, "ctrl_iface bind(PF_UNIX) failed: %s",
      FUNC_21(VAR_15));
  if (FUNC_4(VAR_20, (struct sockaddr *) &VAR_19, sizeof(VAR_19)) < 0) {
   FUNC_23(VAR_8, "ctrl_iface exists, but does not"
       " allow connections - assuming it was left"
       "over from forced program termination");
   if (FUNC_22(VAR_21) < 0) {
    FUNC_23(VAR_9,
        "Could not unlink existing ctrl_iface socket '%s': %s",
        VAR_21, FUNC_21(VAR_15));
    goto fail;
   }
   if (FUNC_1(VAR_20, (struct sockaddr *) &VAR_19, sizeof(VAR_19)) <
       0) {
    FUNC_23(VAR_9, "bind(PF_UNIX): %s",
        FUNC_21(VAR_15));
    goto fail;
   }
   FUNC_23(VAR_8, "Successfully replaced leftover "
       "ctrl_iface socket '%s'", VAR_21);
  } else {
   FUNC_23(VAR_10, "ctrl_iface exists and seems to "
       "be in use - cannot override it");
   FUNC_23(VAR_10, "Delete '%s' manually if it is "
       "not used anymore", VAR_21);
   FUNC_13(VAR_21);
   VAR_21 = ((void*)0);
   goto fail;
  }
 }

 if (VAR_18->ctrl_iface_group &&
     FUNC_11(VAR_21, -1, VAR_18->ctrl_iface_group) < 0) {
  FUNC_23(VAR_9, "lchown[ctrl_interface]: %s",
      FUNC_21(VAR_15));
  goto fail;
 }

 if (FUNC_2(VAR_21, VAR_14 | VAR_13) < 0) {
  FUNC_23(VAR_9, "chmod[ctrl_interface/ifname]: %s",
      FUNC_21(VAR_15));
  goto fail;
 }
 FUNC_13(VAR_21);

 VAR_18->global_ctrl_sock = VAR_20;
 FUNC_5(VAR_20, VAR_17,
     VAR_18, ((void*)0));

 return 0;

fail:
 if (VAR_20 >= 0)
  FUNC_3(VAR_20);
 if (VAR_21) {
  FUNC_22(VAR_21);
  FUNC_13(VAR_21);
 }
 return -1;

}
