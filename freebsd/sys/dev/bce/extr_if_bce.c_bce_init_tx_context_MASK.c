
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int * tx_bd_chain_paddr; } ;


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
 int VAR_18 ;

__attribute__((used)) static void
FUNC_7(struct bce_softc *VAR_19)
{
 u32 VAR_20;

 FUNC_4(VAR_16 | VAR_17 | VAR_15);


 if (FUNC_2(VAR_19) == VAR_0) {

  VAR_20 = VAR_13 |
      VAR_11;
  FUNC_3(VAR_19, FUNC_6(VAR_18), VAR_14, VAR_20);
  VAR_20 = VAR_3 | (8 << 16);
  FUNC_3(VAR_19, FUNC_6(VAR_18),
      VAR_4, VAR_20);


  VAR_20 = FUNC_0(VAR_19->tx_bd_chain_paddr[0]);
  FUNC_3(VAR_19, FUNC_6(VAR_18),
      VAR_6, VAR_20);
  VAR_20 = FUNC_1(VAR_19->tx_bd_chain_paddr[0]);
  FUNC_3(VAR_19, FUNC_6(VAR_18),
      VAR_8, VAR_20);
 } else {

  VAR_20 = VAR_12 | VAR_10;
  FUNC_3(VAR_19, FUNC_6(VAR_18), VAR_9, VAR_20);
  VAR_20 = VAR_2 | (8 << 16);
  FUNC_3(VAR_19, FUNC_6(VAR_18), VAR_1, VAR_20);


  VAR_20 = FUNC_0(VAR_19->tx_bd_chain_paddr[0]);
  FUNC_3(VAR_19, FUNC_6(VAR_18),
      VAR_5, VAR_20);
  VAR_20 = FUNC_1(VAR_19->tx_bd_chain_paddr[0]);
  FUNC_3(VAR_19, FUNC_6(VAR_18),
      VAR_7, VAR_20);
 }

 FUNC_5(VAR_16 | VAR_17 | VAR_15);
}
