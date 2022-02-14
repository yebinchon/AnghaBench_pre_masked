
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nge_softc {struct ifnet* nge_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nge_softc*,int ,int ) ;
 int FUNC_1 (struct nge_softc*,int ) ;
 int FUNC_2 (struct nge_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nge_softc*) ;
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
 int FUNC_4 (struct ifnet*,int ,struct nge_softc*) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_5(struct nge_softc *VAR_17)
{
 struct ifnet *VAR_18;
 uint32_t VAR_19, VAR_20;

 FUNC_3(VAR_17);
 VAR_18 = VAR_17->nge_ifp;


 VAR_20 = FUNC_1(VAR_17, VAR_14);
 VAR_20 &= ~VAR_10;
 FUNC_2(VAR_17, VAR_14, VAR_20);
 FUNC_0(VAR_17, VAR_14, VAR_0);

 VAR_20 &= ~(VAR_6 | VAR_7);
 VAR_20 &= ~VAR_9;




 VAR_20 &= ~(VAR_11 | VAR_13);







 VAR_20 |= VAR_8 | VAR_12;




 if ((VAR_18->if_flags & VAR_2) != 0)
  VAR_20 |= VAR_9;

 if ((VAR_18->if_flags & VAR_3) != 0 ||
     (VAR_18->if_flags & VAR_1) != 0) {
  VAR_20 |= VAR_6;
  if ((VAR_18->if_flags & VAR_3) != 0)
   VAR_20 |= VAR_7;
  goto done;
 }





 VAR_20 |= VAR_11;


 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19 += 2) {
  FUNC_2(VAR_17, VAR_14, VAR_4 + VAR_19);
  FUNC_2(VAR_17, VAR_15, 0);
 }

 FUNC_4(VAR_18, VAR_16, VAR_17);
done:
 FUNC_2(VAR_17, VAR_14, VAR_20);

 VAR_20 |= VAR_10;
 FUNC_2(VAR_17, VAR_14, VAR_20);
 FUNC_0(VAR_17, VAR_14, VAR_0);
}
