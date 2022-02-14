
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nge_softc {int nge_flags; struct ifnet* nge_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct nge_softc*,int ) ;
 int FUNC_1 (struct nge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct nge_softc*) ;
 int FUNC_4 (struct nge_softc*,int ,int ) ;
 int FUNC_5 (struct nge_softc*) ;
 int FUNC_6 (struct nge_softc*) ;
 int FUNC_7 (struct nge_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct nge_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_22)
{
 struct nge_softc *VAR_23;
 struct ifnet *VAR_24;
 uint32_t VAR_25;

 VAR_23 = (struct nge_softc *)VAR_22;
 VAR_24 = VAR_23->nge_ifp;

 FUNC_3(VAR_23);

 if ((VAR_23->nge_flags & VAR_4) != 0)
  goto done_locked;


 VAR_25 = FUNC_0(VAR_23, VAR_10);
 if (VAR_25 == 0xffffffff || (VAR_25 & VAR_9) == 0)
  goto done_locked;




 if ((VAR_24->if_drv_flags & VAR_1) == 0)
  goto done_locked;


 FUNC_1(VAR_23, VAR_8, 0);


 if ((VAR_23->nge_flags & VAR_5) != 0)
  FUNC_1(VAR_23, VAR_6,
      FUNC_0(VAR_23, VAR_6) | VAR_7);

 for (; (VAR_25 & VAR_9) != 0;) {
  if ((VAR_25 & (VAR_18 | VAR_19 |
      VAR_21 | VAR_20)) != 0)
   FUNC_9(VAR_23);

  if ((VAR_25 & (VAR_11 | VAR_12 |
      VAR_15 | VAR_13 |
      VAR_14 | VAR_16)) != 0)
   FUNC_7(VAR_23);

  if ((VAR_25 & VAR_14) != 0)
   FUNC_4(VAR_23, VAR_2, VAR_3);

  if ((VAR_25 & VAR_17) != 0) {
   VAR_24->if_drv_flags &= ~VAR_1;
   FUNC_6(VAR_23);
  }

  VAR_25 = FUNC_0(VAR_23, VAR_10);
 }


 FUNC_1(VAR_23, VAR_8, 1);

 if (!FUNC_2(&VAR_24->if_snd))
  FUNC_8(VAR_24);


 if ((VAR_23->nge_flags & VAR_5) != 0)
  FUNC_1(VAR_23, VAR_6,
      FUNC_0(VAR_23, VAR_6) & ~VAR_7);

done_locked:
 FUNC_5(VAR_23);
}
