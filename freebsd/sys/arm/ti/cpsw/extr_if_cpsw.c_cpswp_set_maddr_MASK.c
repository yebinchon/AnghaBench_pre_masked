
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct cpswp_softc {int unit; int vlan; TYPE_1__* swsc; } ;
struct TYPE_2__ {scalar_t__ dualemac; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct cpswp_softc *VAR_3 = VAR_0;
 uint32_t VAR_4;

 if (VAR_3->swsc->dualemac)
  VAR_4 = 1 << (VAR_3->unit + 1) | 1 << 0;
 else
  VAR_4 = 7;

 FUNC_1(VAR_3->swsc, VAR_4, VAR_3->vlan, FUNC_0(VAR_1));

 return (1);
}
