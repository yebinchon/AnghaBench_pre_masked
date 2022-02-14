
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_ll {int sll_ifindex; int ifr_ifindex; int sll_family; int ifr_name; } ;
struct sockaddr {int dummy; } ;
struct ifreq {int sll_ifindex; int ifr_ifindex; int sll_family; int ifr_name; } ;
struct hostap_driver_data {scalar_t__ sock; int iface; } ;
typedef int ifr ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,struct hostap_driver_data*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct hostap_driver_data*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,struct sockaddr_ll*) ;
 int FUNC_5 (scalar_t__,int ,int *) ;
 int FUNC_6 (struct sockaddr_ll*,int ,int) ;
 int FUNC_7 (int ,int,char*,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static int FUNC_11(struct hostap_driver_data *VAR_9, u8 *VAR_10)
{
 struct ifreq VAR_11;
 struct sockaddr_ll VAR_12;

 VAR_9->sock = FUNC_8(VAR_4, VAR_6, FUNC_3(VAR_1));
 if (VAR_9->sock < 0) {
  FUNC_10(VAR_3, "socket[PF_PACKET,SOCK_RAW]: %s",
      FUNC_9(VAR_7));
  return -1;
 }

 if (FUNC_1(VAR_9->sock, VAR_8, VAR_9, ((void*)0))) {
  FUNC_10(VAR_3, "Could not register read socket");
  return -1;
 }

        FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 if (FUNC_7(VAR_11.ifr_name, sizeof(VAR_11.ifr_name), "%sap",
   VAR_9->iface) >= (int) sizeof(VAR_11.ifr_name)) {
  FUNC_10(VAR_3, "hostap: AP interface name truncated");
  return -1;
 }
        if (FUNC_4(VAR_9->sock, VAR_5, &VAR_11) != 0) {
  FUNC_10(VAR_3, "ioctl(SIOCGIFINDEX): %s",
      FUNC_9(VAR_7));
  return -1;
        }

 if (FUNC_2(VAR_9, 1)) {
  return -1;
 }

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sll_family = VAR_0;
 VAR_12.sll_ifindex = VAR_11.ifr_ifindex;
 FUNC_10(VAR_2, "Opening raw packet socket for ifindex %d",
     VAR_12.sll_ifindex);

 if (FUNC_0(VAR_9->sock, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0) {
  FUNC_10(VAR_3, "bind: %s", FUNC_9(VAR_7));
  return -1;
 }

 return FUNC_5(VAR_9->sock, VAR_9->iface, VAR_10);
}
