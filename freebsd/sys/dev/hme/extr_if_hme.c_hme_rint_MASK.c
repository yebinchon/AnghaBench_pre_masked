
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {unsigned int rb_rdtail; int rb_rxd; } ;
struct hme_softc {int sc_flags; TYPE_1__ sc_rb; int sc_cdmamap; int sc_cdmatag; int sc_dev; struct ifnet* sc_ifp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int,int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,unsigned int,int) ;
 int FUNC_5 (struct hme_softc*,unsigned int) ;
 int FUNC_6 (struct hme_softc*,unsigned int,unsigned int,int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct hme_softc *VAR_9)
{
 caddr_t VAR_10 = VAR_9->sc_rb.rb_rxd;
 struct ifnet *VAR_11 = VAR_9->sc_ifp;
 unsigned int VAR_12, VAR_13;
 int VAR_14 = 0;
 u_int32_t VAR_15;




 FUNC_3(VAR_9->sc_cdmatag, VAR_9->sc_cdmamap, VAR_0);
 for (VAR_12 = VAR_9->sc_rb.rb_rdtail;; VAR_12 = (VAR_12 + 1) % VAR_3) {
  VAR_15 = FUNC_2(VAR_9->sc_flags & VAR_4, VAR_10, VAR_12);
  FUNC_0(VAR_8, "hme_rint: index %d, flags %#x", VAR_12, VAR_15);
  if ((VAR_15 & VAR_6) != 0)
   break;

  VAR_14++;
  if ((VAR_15 & VAR_5) != 0) {
   FUNC_4(VAR_9->sc_dev, "buffer overflow, ri=%d; "
       "flags=0x%x\n", VAR_12, VAR_15);
   FUNC_7(VAR_11, VAR_7, 1);
   FUNC_5(VAR_9, VAR_12);
  } else {
   VAR_13 = FUNC_1(VAR_15);
   FUNC_6(VAR_9, VAR_12, VAR_13, VAR_15);
  }
 }
 if (VAR_14) {
  FUNC_3(VAR_9->sc_cdmatag, VAR_9->sc_cdmamap,
      VAR_1 | VAR_2);
 }
 VAR_9->sc_rb.rb_rdtail = VAR_12;
}
