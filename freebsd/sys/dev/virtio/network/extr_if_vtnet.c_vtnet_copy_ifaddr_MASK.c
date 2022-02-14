
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct vtnet_softc {TYPE_2__* vtnet_mac_filter; int vtnet_hwaddr; } ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_3__ {int * macs; } ;
struct TYPE_4__ {TYPE_1__ vmf_unicast; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct vtnet_softc *VAR_5 = VAR_2;

 if (FUNC_2(FUNC_0(VAR_3), VAR_5->vtnet_hwaddr, VAR_0) == 0)
  return (0);

 if (VAR_4 < VAR_1)
  FUNC_1(FUNC_0(VAR_3),
      &VAR_5->vtnet_mac_filter->vmf_unicast.macs[VAR_4],
      VAR_0);

 return (1);
}
