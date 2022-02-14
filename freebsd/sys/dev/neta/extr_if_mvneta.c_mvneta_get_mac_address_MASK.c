
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mvneta_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_softc*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct mvneta_softc*,int*) ;

__attribute__((used)) static int
FUNC_5(struct mvneta_softc *VAR_3, uint8_t *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_6 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 == 0 && VAR_6 == 0) {




  VAR_5 = FUNC_1() & ~0xff;
  VAR_5 |= FUNC_2(VAR_3->dev) & 0xff;
  VAR_6 = FUNC_1();
  VAR_6 &= ~(3 << 24);
  if (VAR_2) {
   FUNC_3(VAR_3->dev,
       "Could not acquire MAC address. "
       "Using randomized one.\n");
  }
 }

 VAR_4[0] = (VAR_6 & 0xff000000) >> 24;
 VAR_4[1] = (VAR_6 & 0x00ff0000) >> 16;
 VAR_4[2] = (VAR_6 & 0x0000ff00) >> 8;
 VAR_4[3] = (VAR_6 & 0x000000ff);
 VAR_4[4] = (VAR_5 & 0x0000ff00) >> 8;
 VAR_4[5] = (VAR_5 & 0x000000ff);
 return (0);
}
