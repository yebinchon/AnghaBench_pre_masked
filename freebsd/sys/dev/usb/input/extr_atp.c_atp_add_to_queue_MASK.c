
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* syncmask; int level; int packetsize; } ;
struct TYPE_3__ {int * fp; } ;
struct atp_softc {TYPE_2__ sc_mode; TYPE_1__ sc_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct atp_softc *VAR_10, int VAR_11, int VAR_12, int VAR_13,
    uint32_t VAR_14)
{
 uint32_t VAR_15;
 uint8_t VAR_16[8];

 VAR_11 = FUNC_2(VAR_11, 254); VAR_11 = FUNC_1(VAR_11, -256);
 VAR_12 = FUNC_2(VAR_12, 254); VAR_12 = FUNC_1(VAR_12, -256);
 VAR_13 = FUNC_2(VAR_13, 126); VAR_13 = FUNC_1(VAR_13, -128);

 VAR_15 = VAR_7;
 if (VAR_14 & VAR_1)
  VAR_15 &= ~VAR_4;
 else if (VAR_14 & VAR_2)
  VAR_15 &= ~VAR_5;
 else if (VAR_14 & VAR_3)
  VAR_15 &= ~VAR_6;

 FUNC_0(VAR_0, "dx=%d, dy=%d, buttons=%x\n",
     VAR_11, VAR_12, VAR_15);


 VAR_16[0] = VAR_10->sc_mode.syncmask[1];
 VAR_16[0] |= VAR_15;
 VAR_16[1] = VAR_11 >> 1;
 VAR_16[2] = VAR_12 >> 1;
 VAR_16[3] = VAR_11 - (VAR_11 >> 1);
 VAR_16[4] = VAR_12 - (VAR_12 >> 1);

 if (VAR_10->sc_mode.level == 1) {
  VAR_16[5] = VAR_13 >> 1;
  VAR_16[6] = VAR_13 - (VAR_13 >> 1);
  VAR_16[7] = (((~VAR_14) >> 3) & VAR_8);
 }

 FUNC_3(VAR_10->sc_fifo.fp[VAR_9], VAR_16,
     VAR_10->sc_mode.packetsize, 1);
}
