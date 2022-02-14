
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ifnet {int if_capabilities; scalar_t__ if_hw_tsomax; } ;
struct hn_softc {int hn_ndis_tso_sgmin; int hn_ndis_tso_szmax; TYPE_1__* hn_vf_ifp; struct ifnet* hn_ifp; } ;
struct TYPE_2__ {scalar_t__ if_hw_tsomax; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct ifnet*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_6, int VAR_7, int VAR_8)
{
 struct ifnet *VAR_9 = VAR_6->hn_ifp;
 u_int VAR_10;
 int VAR_11;

 FUNC_0(VAR_6);

 if ((VAR_9->if_capabilities & (VAR_2 | VAR_3)) == 0)
  return;

 FUNC_1(VAR_6->hn_ndis_tso_sgmin >= 2,
     ("invalid NDIS tso sgmin %d", VAR_6->hn_ndis_tso_sgmin));
 VAR_11 = VAR_6->hn_ndis_tso_sgmin * VAR_8;

 FUNC_1(VAR_6->hn_ndis_tso_szmax >= VAR_11 &&
     VAR_6->hn_ndis_tso_szmax <= VAR_4,
     ("invalid NDIS tso szmax %d", VAR_6->hn_ndis_tso_szmax));

 if (VAR_7 < VAR_11)
  VAR_7 = VAR_11;
 else if (VAR_7 > VAR_4)
  VAR_7 = VAR_4;
 if (VAR_7 > VAR_6->hn_ndis_tso_szmax)
  VAR_7 = VAR_6->hn_ndis_tso_szmax;
 VAR_10 = VAR_7 - (VAR_0 + VAR_1);

 if (FUNC_2(VAR_6)) {
  if (VAR_10 > VAR_6->hn_vf_ifp->if_hw_tsomax)
   VAR_10 = VAR_6->hn_vf_ifp->if_hw_tsomax;
 }
 VAR_9->if_hw_tsomax = VAR_10;
 if (VAR_5)
  FUNC_3(VAR_9, "TSO size max %u\n", VAR_9->if_hw_tsomax);
}
