
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ifconfig_inet_addr {int vhid; TYPE_5__* broadcast; TYPE_4__* netmask; TYPE_2__* dst; TYPE_1__* sin; } ;
struct ifaddrs {int ifa_name; } ;
typedef int ifconfig_handle_t ;
typedef int addr_buf ;
struct TYPE_12__ {scalar_t__ s_addr; } ;
struct TYPE_11__ {TYPE_6__ sin_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_3__ sin_addr; } ;
struct TYPE_8__ {TYPE_6__ sin_addr; } ;
struct TYPE_7__ {int sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct ifaddrs*,struct ifconfig_inet_addr*) ;
 char* FUNC_1 (TYPE_6__) ;
 int FUNC_2 (int ,int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(ifconfig_handle_t *VAR_2, struct ifaddrs *VAR_3)
{
 struct ifconfig_inet_addr VAR_4;
 char VAR_5[VAR_1];

 if (FUNC_0(VAR_2, VAR_3->ifa_name, VAR_3, &VAR_4) != 0) {
  return;
 }

 FUNC_2(VAR_0, &VAR_4.sin->sin_addr, VAR_5, sizeof(VAR_5));
 FUNC_4("\tinet %s", VAR_5);

 if (VAR_4.dst) {
  FUNC_4(" --> %s", FUNC_1(VAR_4.dst->sin_addr));
 }

 FUNC_4(" netmask 0x%x ", FUNC_3(VAR_4.netmask->sin_addr.s_addr));

 if ((VAR_4.broadcast != ((void*)0)) &&
     (VAR_4.broadcast->sin_addr.s_addr != 0)) {
  FUNC_4("broadcast %s ", FUNC_1(VAR_4.broadcast->sin_addr));
 }

 if (VAR_4.vhid != 0) {
  FUNC_4("vhid %d ", VAR_4.vhid);
 }
 FUNC_4("\n");
}
