
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int length; scalar_t__ pointer; } ;
struct TYPE_4__ {TYPE_1__ essid; } ;
struct iwreq {TYPE_2__ u; int ifr_name; } ;
struct atheros_driver_data {int ioctl_sock; int iface; } ;
typedef int iwr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct iwreq*) ;
 int FUNC_1 (struct iwreq*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_5, u8 *VAR_6, int VAR_7)
{
 struct atheros_driver_data *VAR_8 = VAR_5;
 struct iwreq VAR_9;
 int VAR_10 = 0;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(VAR_9.ifr_name, VAR_8->iface, VAR_0);
 VAR_9.u.essid.pointer = (caddr_t) VAR_6;
 VAR_9.u.essid.length = (VAR_7 > VAR_1) ?
  VAR_1 : VAR_7;

 if (FUNC_0(VAR_8->ioctl_sock, VAR_3, &VAR_9) < 0) {
  FUNC_4(VAR_2, "ioctl[SIOCGIWESSID]: %s",
      FUNC_3(VAR_4));
  VAR_10 = -1;
 } else
  VAR_10 = VAR_9.u.essid.length;

 return VAR_10;
}
