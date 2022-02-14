
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_mtu; } ;
struct hn_softc {TYPE_2__* hn_rx_ring; struct ifnet* hn_ifp; } ;
struct TYPE_3__ {scalar_t__ lro_length_lim; } ;
struct TYPE_4__ {TYPE_1__ hn_lro; } ;


 int FUNC_0 (struct hn_softc*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct hn_softc*,scalar_t__) ;
 int FUNC_3 (struct hn_softc*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_1)
{
 struct ifnet *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->hn_ifp;

 FUNC_3(VAR_1, VAR_0, VAR_2->if_mtu);




}
