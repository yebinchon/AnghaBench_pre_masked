
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rndis_msghdr {scalar_t__ rm_type; } ;
struct hn_rx_ring {TYPE_1__* hn_ifp; } ;
struct TYPE_2__ {int if_softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,void const*,int) ;
 int FUNC_3 (struct hn_rx_ring*,void const*,int) ;
 int FUNC_4 (int ,void const*,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static __inline void
FUNC_6(struct hn_rx_ring *VAR_2, const void *VAR_3, int VAR_4)
{
 const struct rndis_msghdr *VAR_5;

 if (FUNC_0(VAR_4 < sizeof(*VAR_5))) {
  FUNC_5(VAR_2->hn_ifp, "invalid RNDIS msg\n");
  return;
 }
 VAR_5 = VAR_3;

 if (FUNC_1(VAR_5->rm_type == VAR_1)) {

  FUNC_3(VAR_2, VAR_3, VAR_4);

  return;
 }

 if (VAR_5->rm_type == VAR_0)
  FUNC_4(VAR_2->hn_ifp->if_softc, VAR_3, VAR_4);
 else
  FUNC_2(VAR_2->hn_ifp->if_softc, VAR_3, VAR_4);
}
