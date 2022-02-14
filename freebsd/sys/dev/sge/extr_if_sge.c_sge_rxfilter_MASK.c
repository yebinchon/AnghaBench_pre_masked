
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sge_softc {struct ifnet* sge_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int FUNC_2 (struct sge_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct sge_softc*) ;
 int FUNC_4 (struct ifnet*,int ,int*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(struct sge_softc *VAR_11)
{
 struct ifnet *VAR_12;
 uint32_t VAR_13[2];
 uint16_t VAR_14;

 FUNC_3(VAR_11);

 VAR_12 = VAR_11->sge_ifp;
 VAR_14 = FUNC_0(VAR_11, VAR_9);
 VAR_14 &= ~(VAR_1 | VAR_0 | VAR_2);
 VAR_14 |= VAR_3;
 if ((VAR_12->if_flags & VAR_5) != 0)
  VAR_14 |= VAR_1;
 if ((VAR_12->if_flags & (VAR_6 | VAR_4)) != 0) {
  if ((VAR_12->if_flags & VAR_6) != 0)
   VAR_14 |= VAR_0;
  VAR_14 |= VAR_2;
  VAR_13[0] = 0xFFFFFFFF;
  VAR_13[1] = 0xFFFFFFFF;
 } else {
  VAR_14 |= VAR_2;
  VAR_13[0] = VAR_13[1] = 0;

  FUNC_4(VAR_12, VAR_10, VAR_13);
 }
 FUNC_1(VAR_11, VAR_9, VAR_14);
 FUNC_2(VAR_11, VAR_7, VAR_13[0]);
 FUNC_2(VAR_11, VAR_8, VAR_13[1]);
}
