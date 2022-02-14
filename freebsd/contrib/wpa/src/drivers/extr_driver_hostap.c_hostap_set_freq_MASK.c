
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e; int m; } ;
struct TYPE_4__ {TYPE_1__ freq; } ;
struct iwreq {TYPE_2__ u; int ifr_name; } ;
struct hostapd_freq_params {int channel; } ;
struct hostap_driver_data {int ioctl_sock; int iface; } ;
typedef int iwr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct iwreq*) ;
 int FUNC_1 (struct iwreq*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct hostapd_freq_params *VAR_5)
{
 struct hostap_driver_data *VAR_6 = VAR_4;
 struct iwreq VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_2(VAR_7.ifr_name, VAR_6->iface, VAR_0);
 VAR_7.u.freq.m = VAR_5->channel;
 VAR_7.u.freq.e = 0;

 if (FUNC_0(VAR_6->ioctl_sock, VAR_2, &VAR_7) < 0) {
  FUNC_4(VAR_1, "ioctl[SIOCSIWFREQ]: %s",
      FUNC_3(VAR_3));
  return -1;
 }

 return 0;
}
