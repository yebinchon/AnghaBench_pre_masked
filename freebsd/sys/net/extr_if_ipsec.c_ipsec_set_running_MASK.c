
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_7__ {int sin_addr; } ;
struct TYPE_8__ {TYPE_1__ sin6; TYPE_3__ sin; } ;
struct secasindex {TYPE_4__ src; } ;
struct ipsec_softc {int family; TYPE_2__* ifp; } ;
struct TYPE_6__ {int if_drv_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct secasindex* FUNC_2 (struct ipsec_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ipsec_softc *VAR_2)
{
 struct secasindex *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_2->family);
 VAR_4 = 0;
 switch (VAR_2->family) {
 }
 if (VAR_4 != 0)
  VAR_2->ifp->if_drv_flags |= VAR_0;
 else
  VAR_2->ifp->if_drv_flags &= ~VAR_0;
}
