
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rtwn_softc*,int ) ;
 int FUNC_11 (struct rtwn_softc*,int ,int) ;
 int FUNC_12 (struct rtwn_softc*,int) ;
 int FUNC_13 (struct rtwn_softc*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_14(struct rtwn_softc *VAR_8, uint16_t VAR_9[2], uint16_t VAR_10[2])
{
 uint32_t VAR_11;


 FUNC_11(VAR_8, VAR_1, 0);
 FUNC_13(VAR_8, 0, VAR_0, 0x800a0);
 FUNC_13(VAR_8, 0, VAR_5, 0x30000);
 FUNC_13(VAR_8, 0, FUNC_1(0), 0xf);
 FUNC_13(VAR_8, 0, FUNC_1(1), 0xf117b);
 FUNC_11(VAR_8, VAR_1, 0x80800000);


 FUNC_11(VAR_8, VAR_7, 0x01007c00);
 FUNC_11(VAR_8, VAR_6, 0x81004800);


 FUNC_11(VAR_8, FUNC_7(0), 0x10008c1c);
 FUNC_11(VAR_8, FUNC_3(0), 0x30008c1c);
 FUNC_11(VAR_8, FUNC_6(0), 0x82160804);
 FUNC_11(VAR_8, FUNC_2(0), 0x28160000);


 FUNC_11(VAR_8, VAR_3, 0x0046a911);


 FUNC_11(VAR_8, VAR_2, 0xf9000000);
 FUNC_11(VAR_8, VAR_2, 0xf8000000);


 FUNC_12(VAR_8, 10000);


 VAR_11 = FUNC_10(VAR_8, FUNC_4(0));
 if (VAR_11 & (1 << 28))
  return (0);


 VAR_9[0] = FUNC_0(FUNC_10(VAR_8, FUNC_9(0)),
     VAR_4);
 VAR_9[1] = FUNC_0(FUNC_10(VAR_8, FUNC_8(0)),
     VAR_4);
 if (VAR_9[0] == 0x142 || VAR_9[1] == 0x042)
  return (0);

 FUNC_11(VAR_8, VAR_7, 0x80007c00 | (VAR_9[0] << 16) | VAR_9[1]);


 FUNC_11(VAR_8, VAR_1, 0);
 FUNC_13(VAR_8, 0, VAR_0, 0x800a0);
 FUNC_13(VAR_8, 0, VAR_5, 0x30000);
 FUNC_13(VAR_8, 0, FUNC_1(0), 0xf);
 FUNC_13(VAR_8, 0, FUNC_1(1), 0xf7ffa);
 FUNC_11(VAR_8, VAR_1, 0x80800000);


 FUNC_11(VAR_8, VAR_6, 0x01004800);


 FUNC_11(VAR_8, FUNC_7(0), 0x30008c1c);
 FUNC_11(VAR_8, FUNC_3(0), 0x10008c1c);
 FUNC_11(VAR_8, FUNC_6(0), 0x82160c05);
 FUNC_11(VAR_8, FUNC_2(0), 0x28160c05);


 FUNC_11(VAR_8, VAR_3, 0x0046a911);


 FUNC_11(VAR_8, VAR_2, 0xf9000000);
 FUNC_11(VAR_8, VAR_2, 0xf8000000);


 FUNC_12(VAR_8, 10000);


 VAR_11 = FUNC_10(VAR_8, FUNC_4(0));
 if (VAR_11 & (1 << 27))
  return (1);


 VAR_10[0] = FUNC_0(FUNC_10(VAR_8, FUNC_5(0)),
     VAR_4);
 VAR_10[1] = FUNC_0(VAR_11, VAR_4);
 if (VAR_10[0] == 0x132 || VAR_10[1] == 0x036)
  return (1);

 return (3);
}
