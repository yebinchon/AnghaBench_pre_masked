
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ sa_family; int sa_data; } ;
struct sockaddr_ll {scalar_t__ sll_ifindex; scalar_t__ ifr_ifindex; TYPE_2__ ifr_hwaddr; int ifr_name; int sll_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {scalar_t__ sock; int ifname; int ctx; } ;
struct macsec_qca_data {TYPE_1__ common; } ;
struct ifreq {scalar_t__ sll_ifindex; scalar_t__ ifr_ifindex; TYPE_2__ ifr_hwaddr; int ifr_name; int sll_family; } ;
typedef int ifr ;
typedef int addr ;


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
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int *) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,struct sockaddr_ll*) ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct sockaddr_ll*,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static int FUNC_11(struct macsec_qca_data *VAR_14, u8 *VAR_15)
{

 struct ifreq VAR_16;
 struct sockaddr_ll VAR_17;

 VAR_14->common.sock = FUNC_7(VAR_7, VAR_10, FUNC_2(VAR_3));
 if (VAR_14->common.sock < 0) {
  FUNC_10(VAR_5, "socket[PF_PACKET,SOCK_RAW]: %s",
      FUNC_8(VAR_11));
  return -1;
 }

 if (FUNC_1(VAR_14->common.sock, VAR_12,
         VAR_14->common.ctx, ((void*)0))) {
  FUNC_10(VAR_6, "Could not register read socket");
  return -1;
 }

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));
 FUNC_6(VAR_16.ifr_name, VAR_14->common.ifname, sizeof(VAR_16.ifr_name));
 if (FUNC_3(VAR_14->common.sock, VAR_9, &VAR_16) != 0) {
  FUNC_10(VAR_5, "ioctl(SIOCGIFINDEX): %s",
      FUNC_8(VAR_11));
  return -1;
 }

 FUNC_5(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.sll_family = VAR_0;
 VAR_17.sll_ifindex = VAR_16.ifr_ifindex;
 FUNC_10(VAR_4, "Opening raw packet socket for ifindex %d",
     VAR_17.sll_ifindex);

 if (FUNC_0(VAR_14->common.sock, (struct sockaddr *) &VAR_17,
   sizeof(VAR_17)) < 0) {
  FUNC_10(VAR_5, "macsec_qca: bind: %s", FUNC_8(VAR_11));
  return -1;
 }


 if (FUNC_9(VAR_14->common.sock, VAR_16.ifr_ifindex,
           VAR_13, 1) < 0) {
  FUNC_10(VAR_5,
   "macsec_qca_init_sockets: Failed to add multicast group membership");
  return -1;
 }

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));
 FUNC_6(VAR_16.ifr_name, VAR_14->common.ifname, sizeof(VAR_16.ifr_name));
 if (FUNC_3(VAR_14->common.sock, VAR_8, &VAR_16) != 0) {
  FUNC_10(VAR_5, "ioctl(SIOCGIFHWADDR): %s",
      FUNC_8(VAR_11));
  return -1;
 }

 if (VAR_16.ifr_hwaddr.sa_family != VAR_1) {
  FUNC_10(VAR_6, "Invalid HW-addr family 0x%04x",
      VAR_16.ifr_hwaddr.sa_family);
  return -1;
 }
 FUNC_4(VAR_15, VAR_16.ifr_hwaddr.sa_data, VAR_2);

 return 0;



}
