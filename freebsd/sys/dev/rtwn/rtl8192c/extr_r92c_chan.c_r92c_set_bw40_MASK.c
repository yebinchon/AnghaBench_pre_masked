
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int* rf_chnlbw; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct rtwn_softc*,int,int,int) ;
 int FUNC_1 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_11, uint8_t VAR_12, int VAR_13)
{
 struct r92c_softc *VAR_14 = VAR_11->sc_priv;

 FUNC_2(VAR_11, VAR_0, VAR_1, 0);
 FUNC_2(VAR_11, VAR_10 + 2, 0x6f, (VAR_13 ? 1 : 2) << 5);

 FUNC_0(VAR_11, VAR_5, 0, VAR_8);
 FUNC_0(VAR_11, VAR_6, 0, VAR_8);


 FUNC_0(VAR_11, VAR_2, 0x10,
     (VAR_13 ? 0 : 1) << 4);

 FUNC_0(VAR_11, VAR_7, 0x0c00,
     (VAR_13 ? 1 : 2) << 10);

 FUNC_0(VAR_11, VAR_3,
     VAR_4, 0);

 FUNC_0(VAR_11, 0x818, 0x0c000000, (VAR_13 ? 2 : 1) << 26);


 FUNC_1(VAR_11, 0, VAR_9,
     (VAR_14->rf_chnlbw[0] & ~0xfff) | VAR_12);
}
