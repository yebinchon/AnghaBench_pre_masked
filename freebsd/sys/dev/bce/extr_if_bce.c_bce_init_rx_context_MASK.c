
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int bce_flags; int * rx_bd_chain_paddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int FUNC_3 (struct bce_softc*,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bce_softc*,int ) ;
 int FUNC_8 (struct bce_softc*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_9(struct bce_softc *VAR_20)
{
 u32 VAR_21;

 FUNC_4(VAR_17 | VAR_16 | VAR_15);


 VAR_21 = VAR_3 |
     VAR_4 |
     (0x02 << VAR_1);
 if (FUNC_2(VAR_20) == VAR_0) {
  u32 VAR_22, VAR_23;

  if (VAR_20->bce_flags & VAR_14) {
   VAR_22 = VAR_7;
  } else {
   VAR_22 = 0;
  }

  if (VAR_22 >= VAR_19) {
   VAR_22 = 0;
  }

  VAR_23 = VAR_19 / 4;

  if (VAR_23 <= VAR_22) {
   VAR_22 = 0;
  }

  VAR_22 /= VAR_8;
  VAR_23 /= VAR_5;

  if (VAR_23 > 0xf)
   VAR_23 = 0xf;
  else if (VAR_23 == 0)
   VAR_22 = 0;

  VAR_21 |= (VAR_22 << VAR_9) |
      (VAR_23 << VAR_6);
 }

 FUNC_3(VAR_20, FUNC_6(VAR_18), VAR_2, VAR_21);


 if (FUNC_2(VAR_20) == VAR_0) {
  VAR_21 = FUNC_7(VAR_20, VAR_12);
  FUNC_8(VAR_20, VAR_12, VAR_21 | VAR_13);
 }


 VAR_21 = FUNC_0(VAR_20->rx_bd_chain_paddr[0]);
 FUNC_3(VAR_20, FUNC_6(VAR_18), VAR_10, VAR_21);
 VAR_21 = FUNC_1(VAR_20->rx_bd_chain_paddr[0]);
 FUNC_3(VAR_20, FUNC_6(VAR_18), VAR_11, VAR_21);

 FUNC_5(VAR_17 | VAR_16 | VAR_15);
}
