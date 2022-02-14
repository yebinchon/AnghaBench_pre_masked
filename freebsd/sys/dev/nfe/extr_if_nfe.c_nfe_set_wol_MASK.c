
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct nfe_softc {int nfe_flags; int nfe_dev; int nfe_ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfe_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct nfe_softc*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfe_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_8(struct nfe_softc *VAR_15)
{
 if_t VAR_16;
 uint32_t VAR_17;
 int VAR_18;
 uint16_t VAR_19;

 FUNC_0(VAR_15);

 if (FUNC_5(VAR_15->nfe_dev, VAR_14, &VAR_18) != 0)
  return;
 VAR_16 = VAR_15->nfe_ifp;
 if ((FUNC_3(VAR_16) & VAR_1) != 0)
  VAR_17 = VAR_10;
 else
  VAR_17 = 0;
 FUNC_2(VAR_15, VAR_9, VAR_17);
 if ((FUNC_3(VAR_16) & VAR_1) != 0) {
  FUNC_4(VAR_15);
  if ((VAR_15->nfe_flags & VAR_4) != 0)
   FUNC_2(VAR_15, VAR_2,
       FUNC_1(VAR_15, VAR_2) & ~VAR_3);

  FUNC_2(VAR_15, VAR_6, 0);
  FUNC_2(VAR_15, VAR_7, 0);
  FUNC_2(VAR_15, VAR_5, FUNC_1(VAR_15, VAR_5) |
      VAR_8);
 }

 VAR_19 = FUNC_6(VAR_15->nfe_dev, VAR_18 + VAR_13, 2);
 VAR_19 &= ~(VAR_11 | VAR_12);
 if ((FUNC_3(VAR_16) & VAR_0) != 0)
  VAR_19 |= VAR_11 | VAR_12;
 FUNC_7(VAR_15->nfe_dev, VAR_18 + VAR_13, VAR_19, 2);
}
