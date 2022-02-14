
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_dl {int dummy; } ;
struct cpswp_softc {int vlan; int unit; TYPE_2__* ifp; TYPE_3__* swsc; } ;
struct TYPE_8__ {scalar_t__ dualemac; } ;
struct TYPE_7__ {TYPE_1__* if_addr; } ;
struct TYPE_6__ {scalar_t__ ifa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (struct sockaddr_dl*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int ,struct cpswp_softc*) ;

__attribute__((used)) static int
FUNC_7(struct cpswp_softc *VAR_4, int VAR_5)
{
 uint8_t *VAR_6;
 uint32_t VAR_7[3], VAR_8, VAR_9;

 if (VAR_4->swsc->dualemac) {
  VAR_8 = VAR_2 << 28 | VAR_4->vlan << 16;
  VAR_9 = 1 << (VAR_4->unit + 1) | 1 << 0;
 } else {
  VAR_8 = VAR_1 << 28;
  VAR_9 = 7;
 }






 VAR_6 = FUNC_2((struct sockaddr_dl *)VAR_4->ifp->if_addr->ifa_addr);
 VAR_7[0] = VAR_6[2] << 24 | VAR_6[3] << 16 | VAR_6[4] << 8 | VAR_6[5];
 VAR_7[1] = VAR_8 | VAR_6[0] << 8 | VAR_6[1];
 VAR_7[2] = 0;
 FUNC_4(VAR_4->swsc, 0 + 2 * VAR_4->unit, VAR_7);


 FUNC_5(VAR_4->swsc, FUNC_0(VAR_4->unit + 1),
     VAR_6[3] << 24 | VAR_6[2] << 16 | VAR_6[1] << 8 | VAR_6[0]);
 FUNC_5(VAR_4->swsc, FUNC_1(VAR_4->unit + 1),
     VAR_6[5] << 8 | VAR_6[4]);


 VAR_7[0] = 0xffffffff;

 VAR_7[1] = VAR_0 | VAR_8 | 0xffff;
 VAR_7[2] = VAR_9 << 2;
 FUNC_4(VAR_4->swsc, 1 + 2 * VAR_4->unit, VAR_7);



 if (VAR_5)
  FUNC_3(VAR_4->swsc);


 FUNC_6(VAR_4->ifp, VAR_3, VAR_4);

 return (0);
}
