
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_reqcap; int ifr_name; } ;
struct ifconfig_capabilities {int curcap; int reqcap; } ;
typedef int ifr ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,struct ifconfig_capabilities*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(ifconfig_handle_t *VAR_2, const char *VAR_3,
    const int VAR_4)
{
 struct ifreq VAR_5;
 struct ifconfig_capabilities VAR_6;
 int VAR_7, VAR_8;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_0(VAR_2, VAR_3, &VAR_6) != 0) {
  return (-1);
 }

 VAR_8 = VAR_4;
 VAR_7 = VAR_6.curcap;
 if (VAR_8 < 0) {
  VAR_8 = -VAR_8;
  VAR_7 &= ~VAR_8;
 } else {
  VAR_7 |= VAR_8;
 }
 VAR_7 &= VAR_6.reqcap;

 (void)FUNC_3(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));





 VAR_5.ifr_reqcap = VAR_7;
 if (FUNC_1(VAR_2, VAR_0, VAR_1, &VAR_5) < 0) {
  return (-1);
 }
 return (0);
}
