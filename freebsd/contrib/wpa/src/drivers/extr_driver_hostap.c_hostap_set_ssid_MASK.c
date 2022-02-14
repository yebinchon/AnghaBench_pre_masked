
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; int length; scalar_t__ pointer; } ;
struct TYPE_4__ {TYPE_1__ essid; } ;
struct iwreq {TYPE_2__ u; int ifr_name; } ;
struct hostap_driver_data {int ioctl_sock; int iface; } ;
typedef int iwr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct iwreq*) ;
 int FUNC_1 (struct iwreq*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, const u8 *VAR_5, int VAR_6)
{
 struct hostap_driver_data *VAR_7 = VAR_4;
 struct iwreq VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_8.ifr_name, VAR_7->iface, VAR_0);
 VAR_8.u.essid.flags = 1;
 VAR_8.u.essid.pointer = (caddr_t) VAR_5;
 VAR_8.u.essid.length = VAR_6 + 1;

 if (FUNC_0(VAR_7->ioctl_sock, VAR_2, &VAR_8) < 0) {
  FUNC_4(VAR_1, "ioctl[SIOCSIWESSID,len=%d]: %s",
      VAR_6, FUNC_3(VAR_3));
  return -1;
 }

 return 0;
}
