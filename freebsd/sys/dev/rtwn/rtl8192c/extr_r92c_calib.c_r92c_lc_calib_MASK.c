
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int nrxchains; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct rtwn_softc*,int) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,int,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int ,int ,int ) ;
 int FUNC_5 (struct rtwn_softc*,int,int ,int ) ;
 int FUNC_6 (struct rtwn_softc*,scalar_t__,int) ;

void
FUNC_7(struct rtwn_softc *VAR_8)
{
 uint32_t VAR_9[2];
 uint8_t VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_8, VAR_0 + 3);
 if ((VAR_10 & 0x70) != 0) {

  FUNC_6(VAR_8, VAR_0 + 3, VAR_10 & ~0x70);


  for (VAR_11 = 0; VAR_11 < VAR_8->nrxchains; VAR_11++) {
   VAR_9[VAR_11] = FUNC_3(VAR_8, VAR_11, VAR_1);
   FUNC_5(VAR_8, VAR_11, VAR_1,
       FUNC_0(VAR_9[VAR_11], VAR_2,
    VAR_3));
  }
 } else {

  FUNC_6(VAR_8, VAR_6, VAR_7);
 }

 FUNC_4(VAR_8, 0, VAR_4, 0, VAR_5);


 FUNC_1(VAR_8, 100000);


 if ((VAR_10 & 0x70) != 0) {

  FUNC_6(VAR_8, VAR_0 + 3, VAR_10);

  for (VAR_11 = 0; VAR_11 < VAR_8->nrxchains; VAR_11++)
   FUNC_5(VAR_8, VAR_11, VAR_1, VAR_9[VAR_11]);
 } else {

  FUNC_6(VAR_8, VAR_6, 0x00);
 }
}
