
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; int ifr_name; } ;
struct hostap_driver_data {int ioctl_sock; int iface; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, int VAR_7)
{
 struct hostap_driver_data *VAR_8 = VAR_6;
 struct ifreq VAR_9;
 char VAR_10[VAR_1];

 if (FUNC_3(VAR_10, VAR_1, "%sap", VAR_8->iface) >= VAR_1) {
  FUNC_6(VAR_2, "hostap: AP interface name truncated");
  return -1;
 }
 if (FUNC_1(VAR_8->ioctl_sock, VAR_10, VAR_7) < 0)
  return -1;

 if (VAR_7) {
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  FUNC_4(VAR_9.ifr_name, VAR_10, VAR_1);
  VAR_9.ifr_mtu = VAR_0;
  if (FUNC_0(VAR_8->ioctl_sock, VAR_4, &VAR_9) != 0) {
   FUNC_6(VAR_3,
       "Setting MTU failed - trying to survive with current value: ioctl[SIOCSIFMTU]: %s",
       FUNC_5(VAR_5));
  }
 }

 return 0;
}
