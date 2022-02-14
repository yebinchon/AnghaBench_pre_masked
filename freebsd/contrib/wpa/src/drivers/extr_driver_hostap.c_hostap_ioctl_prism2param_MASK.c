
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct iwreq {TYPE_1__ u; int ifr_name; } ;
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

__attribute__((used)) static int FUNC_5(void *VAR_4, int VAR_5, int VAR_6)
{
 struct hostap_driver_data *VAR_7 = VAR_4;
 struct iwreq VAR_8;
 int *VAR_9;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_8.ifr_name, VAR_7->iface, VAR_0);
 VAR_9 = (int *) VAR_8.u.name;
 *VAR_9++ = VAR_5;
 *VAR_9++ = VAR_6;

 if (FUNC_0(VAR_7->ioctl_sock, VAR_2, &VAR_8) < 0) {
  FUNC_4(VAR_1, "ioctl[PRISM2_IOCTL_PRISM2_PARAM]: %s",
      FUNC_3(VAR_3));
  return -1;
 }

 return 0;
}
