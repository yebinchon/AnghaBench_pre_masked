
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {scalar_t__ next_rom_addr; scalar_t__ efuse_maxlen; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,int) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int) ;

int
FUNC_6(struct rtwn_softc *VAR_6, uint8_t *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 if (VAR_6->next_rom_addr >= VAR_6->efuse_maxlen)
  return (VAR_0);

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 VAR_8 = FUNC_1(VAR_8, VAR_3, VAR_6->next_rom_addr);
 VAR_8 &= ~VAR_5;

 VAR_10 = FUNC_5(VAR_6, VAR_2, VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);

 for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
  VAR_8 = FUNC_4(VAR_6, VAR_2);
  if (VAR_8 & VAR_5)
   break;
  FUNC_3(VAR_6, 10);
 }
 if (VAR_9 == 100) {
  FUNC_2(VAR_6->sc_dev,
      "could not read efuse byte at address 0x%x\n",
      VAR_6->next_rom_addr);
  return (VAR_1);
 }

 *VAR_7 = FUNC_0(VAR_8, VAR_4);
 VAR_6->next_rom_addr++;

 return (0);
}
