
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rtwn_softc {int ntxchains; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct rtwn_softc*,int ) ;
 int FUNC_10 (struct rtwn_softc*,int ,int) ;
 int FUNC_11 (struct rtwn_softc*,int) ;

__attribute__((used)) static int
FUNC_12(struct rtwn_softc *VAR_4, int VAR_5, uint16_t VAR_6[2],
    uint16_t VAR_7[2])
{
 uint32_t VAR_8;

 if (VAR_5 == 0) {

  FUNC_10(VAR_4, FUNC_6(0), 0x10008c1f);
  FUNC_10(VAR_4, FUNC_2(0), 0x10008c1f);
  FUNC_10(VAR_4, FUNC_5(0), 0x82140102);

  if (VAR_4->ntxchains > 1) {
   FUNC_10(VAR_4, FUNC_1(0), 0x28160202);

   FUNC_10(VAR_4, FUNC_6(1), 0x10008c22);
   FUNC_10(VAR_4, FUNC_2(1), 0x10008c22);
   FUNC_10(VAR_4, FUNC_5(1), 0x82140102);
   FUNC_10(VAR_4, FUNC_1(1), 0x28160202);
  } else
   FUNC_10(VAR_4, FUNC_1(0), 0x28160502);


  FUNC_10(VAR_4, VAR_2, 0x001028d1);

  FUNC_10(VAR_4, VAR_1, 0xf9000000);
  FUNC_10(VAR_4, VAR_1, 0xf8000000);

 } else {

  FUNC_10(VAR_4, VAR_0, 2);
  FUNC_10(VAR_4, VAR_0, 0);
 }


 FUNC_11(VAR_4, 10000);


 VAR_8 = FUNC_9(VAR_4, FUNC_3(0));

 if (VAR_8 & (1 << (28 + VAR_5 * 3)))
  return (0);

 VAR_6[0] = FUNC_0(FUNC_9(VAR_4, FUNC_8(VAR_5)),
     VAR_3);
 VAR_6[1] = FUNC_0(FUNC_9(VAR_4, FUNC_7(VAR_5)),
     VAR_3);
 if (VAR_6[0] == 0x142 || VAR_6[1] == 0x042)
  return (0);

 if (VAR_8 & (1 << (27 + VAR_5 * 3)))
  return (1);

 VAR_7[0] = FUNC_0(FUNC_9(VAR_4, FUNC_4(VAR_5)),
     VAR_3);
 VAR_7[1] = FUNC_0(FUNC_9(VAR_4, FUNC_3(VAR_5)),
     VAR_3);
 if (VAR_7[0] == 0x132 || VAR_7[1] == 0x036)
  return (1);

 return (3);
}
