
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cfg {int fd; } ;
struct TYPE_4__ {scalar_t__ vlan_mode; int cmd; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int conf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct cfg *VAR_8, int VAR_9, char *VAR_10[])
{
 etherswitch_conf_t VAR_11;

 if (VAR_9 < 2)
  return (-1);

 FUNC_0(&VAR_11, sizeof(VAR_11));
 VAR_11.cmd = VAR_0;
 if (FUNC_3(VAR_10[1], "isl") == 0)
  VAR_11.vlan_mode = VAR_4;
 else if (FUNC_3(VAR_10[1], "port") == 0)
  VAR_11.vlan_mode = VAR_5;
 else if (FUNC_3(VAR_10[1], "dot1q") == 0)
  VAR_11.vlan_mode = VAR_1;
 else if (FUNC_3(VAR_10[1], "dot1q4k") == 0)
  VAR_11.vlan_mode = VAR_2;
 else if (FUNC_3(VAR_10[1], "qinq") == 0)
  VAR_11.vlan_mode = VAR_3;
 else
  VAR_11.vlan_mode = 0;
 if (FUNC_2(VAR_8->fd, VAR_7, &VAR_11) != 0)
  FUNC_1(VAR_6, "ioctl(IOETHERSWITCHSETCONF)");

 return (0);
}
