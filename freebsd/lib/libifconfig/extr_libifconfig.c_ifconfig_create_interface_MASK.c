
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifreq {int ifr_name; } ;
typedef int ifr ;
struct TYPE_5__ {int errcode; void* errtype; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;

int
FUNC_6(ifconfig_handle_t *VAR_5, const char *VAR_6, char **VAR_7)
{
 struct ifreq VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 (void)FUNC_3(VAR_8.ifr_name, VAR_6, sizeof(VAR_8.ifr_name));






 if ((FUNC_5(VAR_6, "wlan",
     FUNC_4("wlan")) == 0) ||
     (FUNC_5(VAR_6, "vlan",
     FUNC_4("vlan")) == 0) ||
     (FUNC_5(VAR_6, "vxlan",
     FUNC_4("vxlan")) == 0)) {
  VAR_5->error.errtype = VAR_3;
  VAR_5->error.errcode = VAR_2;
  return (-1);
 }


 if (FUNC_0(VAR_5, VAR_0, VAR_4, &VAR_8) < 0) {
  return (-1);
 }

 *VAR_7 = FUNC_2(VAR_8.ifr_name);
 if (VAR_7 == ((void*)0)) {
  VAR_5->error.errtype = VAR_3;
  VAR_5->error.errcode = VAR_1;
  return (-1);
 }

 return (0);
}
