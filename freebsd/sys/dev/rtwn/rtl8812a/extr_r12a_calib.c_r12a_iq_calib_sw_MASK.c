
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int nrxchains; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct rtwn_softc*,int*,int ,int) ;
 int FUNC_6 (struct rtwn_softc*,int*,int ,int) ;
 int FUNC_7 (struct rtwn_softc*,int*,int ,int) ;
 int FUNC_8 (struct rtwn_softc*,int*,int ,int) ;
 int FUNC_9 (struct rtwn_softc*,int) ;
 int FUNC_10 (struct rtwn_softc*,int,int ,int) ;
 int FUNC_11 (struct rtwn_softc*,int,int) ;
 int FUNC_12 (struct rtwn_softc*) ;
 int FUNC_13 (struct rtwn_softc*) ;

void
FUNC_14(struct rtwn_softc *VAR_5)
{

 uint32_t VAR_6[FUNC_4(VAR_3)];
 uint32_t VAR_7[FUNC_4(VAR_2)];
 uint32_t VAR_8[FUNC_4(VAR_4) * 2];
 uint32_t VAR_9[2];

 FUNC_0(VAR_5->nrxchains <= 2,
     ("nrxchains > %d (%d)\n", 2, VAR_5->nrxchains));


 FUNC_7(VAR_5, VAR_6, VAR_3,
     FUNC_4(VAR_3));


 FUNC_10(VAR_5, VAR_1, 0, 0x80000000);
 VAR_9[0] = FUNC_9(VAR_5, FUNC_2(0));
 VAR_9[1] = FUNC_9(VAR_5, FUNC_2(1));

 FUNC_7(VAR_5, VAR_7, VAR_2,
     FUNC_4(VAR_2));
 FUNC_8(VAR_5, VAR_8, VAR_4,
     FUNC_4(VAR_4));







 FUNC_6(VAR_5, VAR_8, VAR_4,
     FUNC_4(VAR_4));
 FUNC_5(VAR_5, VAR_7, VAR_2,
     FUNC_4(VAR_2));


 FUNC_10(VAR_5, VAR_1, 0, 0x80000000);


 FUNC_11(VAR_5, FUNC_3(0), 0);
 FUNC_11(VAR_5, FUNC_1(0), 0);
 FUNC_11(VAR_5, 0xc88, 0);
 FUNC_11(VAR_5, 0xc8c, 0x3c000000);
 FUNC_10(VAR_5, 0xc90, 0, 0x00000080);
 FUNC_10(VAR_5, 0xcc4, 0, 0x20040000);
 FUNC_10(VAR_5, 0xcc8, 0, 0x20000000);


 FUNC_11(VAR_5, FUNC_3(1), 0);
 FUNC_11(VAR_5, FUNC_1(1), 0);
 FUNC_11(VAR_5, 0xe88, 0);
 FUNC_11(VAR_5, 0xe8c, 0x3c000000);
 FUNC_10(VAR_5, 0xe90, 0, 0x00000080);
 FUNC_10(VAR_5, 0xec4, 0, 0x20040000);
 FUNC_10(VAR_5, 0xec8, 0, 0x20000000);

 FUNC_11(VAR_5, FUNC_2(0), VAR_9[0]);
 FUNC_11(VAR_5, FUNC_2(1), VAR_9[1]);

 FUNC_5(VAR_5, VAR_6, VAR_3,
     FUNC_4(VAR_3));

}
