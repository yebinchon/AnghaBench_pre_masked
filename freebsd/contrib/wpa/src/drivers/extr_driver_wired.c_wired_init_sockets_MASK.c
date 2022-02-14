
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ sock; int ifname; int ctx; } ;
struct wpa_driver_wired_data {scalar_t__ dhcp_sock; TYPE_4__ common; } ;
struct TYPE_7__ {int ifrn_name; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; int sa_data; } ;
struct sockaddr_ll {scalar_t__ sll_ifindex; scalar_t__ ifr_ifindex; TYPE_3__ ifr_ifrn; TYPE_2__ sin_addr; int sin_port; int sin_family; TYPE_1__ ifr_hwaddr; int ifr_name; int sll_family; } ;
struct sockaddr_in {scalar_t__ sll_ifindex; scalar_t__ ifr_ifindex; TYPE_3__ ifr_ifrn; TYPE_2__ sin_addr; int sin_port; int sin_family; TYPE_1__ ifr_hwaddr; int ifr_name; int sll_family; } ;
struct sockaddr {int dummy; } ;
struct ifreq {scalar_t__ sll_ifindex; scalar_t__ ifr_ifindex; TYPE_3__ ifr_ifrn; TYPE_2__ sin_addr; int sin_port; int sin_family; TYPE_1__ ifr_hwaddr; int ifr_name; int sll_family; } ;
typedef int n ;
typedef int ifr ;
typedef int addr2 ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,struct sockaddr_ll*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sockaddr_ll*,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_24 ;
 int FUNC_7 (scalar_t__,int ,int ,char*,int) ;
 void* FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(struct wpa_driver_wired_data *VAR_25, u8 *VAR_26)
{

 struct ifreq VAR_27;
 struct sockaddr_ll VAR_28;
 struct sockaddr_in VAR_29;
 int VAR_30 = 1;

 VAR_25->common.sock = FUNC_8(VAR_12, VAR_16, FUNC_2(VAR_4));
 if (VAR_25->common.sock < 0) {
  FUNC_11(VAR_9, "socket[PF_PACKET,SOCK_RAW]: %s",
      FUNC_9(VAR_21));
  return -1;
 }

 if (FUNC_1(VAR_25->common.sock, VAR_23,
         VAR_25->common.ctx, ((void*)0))) {
  FUNC_11(VAR_10, "Could not register read socket");
  return -1;
 }

 FUNC_5(&VAR_27, 0, sizeof(VAR_27));
 FUNC_6(VAR_27.ifr_name, VAR_25->common.ifname, sizeof(VAR_27.ifr_name));
 if (FUNC_3(VAR_25->common.sock, VAR_14, &VAR_27) != 0) {
  FUNC_11(VAR_9, "ioctl(SIOCGIFINDEX): %s",
      FUNC_9(VAR_21));
  return -1;
 }

 FUNC_5(&VAR_28, 0, sizeof(VAR_28));
 VAR_28.sll_family = VAR_1;
 VAR_28.sll_ifindex = VAR_27.ifr_ifindex;
 FUNC_11(VAR_8, "Opening raw packet socket for ifindex %d",
     VAR_28.sll_ifindex);

 if (FUNC_0(VAR_25->common.sock, (struct sockaddr *) &VAR_28, sizeof(VAR_28)) < 0)
 {
  FUNC_11(VAR_9, "bind: %s", FUNC_9(VAR_21));
  return -1;
 }


 if (FUNC_10(VAR_25->common.sock, VAR_27.ifr_ifindex,
           VAR_24, 1) < 0) {
  FUNC_11(VAR_9, "wired: Failed to add multicast group "
      "membership");
  return -1;
 }

 FUNC_5(&VAR_27, 0, sizeof(VAR_27));
 FUNC_6(VAR_27.ifr_name, VAR_25->common.ifname, sizeof(VAR_27.ifr_name));
 if (FUNC_3(VAR_25->common.sock, VAR_13, &VAR_27) != 0) {
  FUNC_11(VAR_9, "ioctl(SIOCGIFHWADDR): %s",
      FUNC_9(VAR_21));
  return -1;
 }

 if (VAR_27.ifr_hwaddr.sa_family != VAR_2) {
  FUNC_11(VAR_10, "Invalid HW-addr family 0x%04x",
      VAR_27.ifr_hwaddr.sa_family);
  return -1;
 }
 FUNC_4(VAR_26, VAR_27.ifr_hwaddr.sa_data, VAR_3);


 if ((VAR_25->dhcp_sock = FUNC_8(VAR_11, VAR_15, VAR_7)) < 0) {
  FUNC_11(VAR_9, "socket call failed for dhcp: %s",
      FUNC_9(VAR_21));
  return -1;
 }

 if (FUNC_1(VAR_25->dhcp_sock, VAR_22,
         VAR_25->common.ctx, ((void*)0))) {
  FUNC_11(VAR_10, "Could not register read socket");
  return -1;
 }

 FUNC_5(&VAR_29, 0, sizeof(VAR_29));
 VAR_29 = VAR_0;
 VAR_29 = FUNC_2(67);
 VAR_29 = VAR_6;

 if (FUNC_7(VAR_25->dhcp_sock, VAR_17, VAR_20, (char *) &VAR_30,
         sizeof(VAR_30)) == -1) {
  FUNC_11(VAR_9, "setsockopt[SOL_SOCKET,SO_REUSEADDR]: %s",
      FUNC_9(VAR_21));
  return -1;
 }
 if (FUNC_7(VAR_25->dhcp_sock, VAR_17, VAR_19, (char *) &VAR_30,
         sizeof(VAR_30)) == -1) {
  FUNC_11(VAR_9, "setsockopt[SOL_SOCKET,SO_BROADCAST]: %s",
      FUNC_9(VAR_21));
  return -1;
 }

 FUNC_5(&VAR_27, 0, sizeof(VAR_27));
 FUNC_6(VAR_27.ifr_ifrn.ifrn_name, VAR_25->common.ifname, VAR_5);
 if (FUNC_7(VAR_25->dhcp_sock, VAR_17, VAR_18,
         (char *) &VAR_27, sizeof(VAR_27)) < 0) {
  FUNC_11(VAR_9,
      "setsockopt[SOL_SOCKET,SO_BINDTODEVICE]: %s",
      FUNC_9(VAR_21));
  return -1;
 }

 if (FUNC_0(VAR_25->dhcp_sock, (struct sockaddr *) &VAR_29,
   sizeof(struct sockaddr)) == -1) {
  FUNC_11(VAR_9, "bind: %s", FUNC_9(VAR_21));
  return -1;
 }

 return 0;



}
