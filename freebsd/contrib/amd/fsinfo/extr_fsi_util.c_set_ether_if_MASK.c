
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {int e_mask; char* e_hwaddr; int e_netmask; TYPE_1__ e_inaddr; } ;
typedef TYPE_2__ ether_if ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char** VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int *) ;

void
FUNC_6(ether_if *VAR_2, int VAR_3, char *VAR_4)
{
  int VAR_5 = 1 << VAR_3;

  if (VAR_2->e_mask & VAR_5) {
    FUNC_2("netif field \"%s\" already set", VAR_1[VAR_3]);
    return;
  }
  VAR_2->e_mask |= VAR_5;

  switch (VAR_3) {

  case 129:{
      VAR_2->e_inaddr.s_addr = FUNC_4(VAR_4);
      if ((int) VAR_2->e_inaddr.s_addr == (int) VAR_0)
 FUNC_2("malformed IP dotted quad: %s", VAR_4);
      FUNC_0(VAR_4);
    }
    break;

  case 128:{
      u_long VAR_6 = 0;

      if ((FUNC_5(VAR_4, "0x%lx", &VAR_6) == 1 || FUNC_5(VAR_4, "%lx", &VAR_6) == 1) && VAR_6 != 0)
 VAR_2->e_netmask = FUNC_3(VAR_6);
      else
 FUNC_2("malformed netmask: %s", VAR_4);
      FUNC_0(VAR_4);
    }
    break;

  case 130:
    VAR_2->e_hwaddr = VAR_4;
    break;

  default:
    FUNC_1();
    break;
  }
}
