
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
struct wsp_softc {TYPE_2__ sc_mode; TYPE_1__ sc_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct wsp_softc *VAR_9, int VAR_10, int VAR_11, int VAR_12,
    uint32_t VAR_13)
{
 uint32_t VAR_14;
 uint8_t VAR_15[8];

 VAR_10 = FUNC_1(VAR_10, 254);
 VAR_10 = FUNC_0(VAR_10, -256);
 VAR_11 = FUNC_1(VAR_11, 254);
 VAR_11 = FUNC_0(VAR_11, -256);
 VAR_12 = FUNC_1(VAR_12, 126);
 VAR_12 = FUNC_0(VAR_12, -128);

 VAR_14 = VAR_6;
 if (VAR_13 & VAR_0)
  VAR_14 &= ~VAR_3;
 else if (VAR_13 & VAR_1)
  VAR_14 &= ~VAR_4;
 else if (VAR_13 & VAR_2)
  VAR_14 &= ~VAR_5;


 VAR_15[0] = VAR_9->sc_mode.syncmask[1];
 VAR_15[0] |= VAR_14;
 VAR_15[1] = VAR_10 >> 1;
 VAR_15[2] = VAR_11 >> 1;
 VAR_15[3] = VAR_10 - (VAR_10 >> 1);
 VAR_15[4] = VAR_11 - (VAR_11 >> 1);

 if (VAR_9->sc_mode.level == 1) {
  VAR_15[5] = VAR_12 >> 1;
  VAR_15[6] = VAR_12 - (VAR_12 >> 1);
  VAR_15[7] = (((~VAR_13) >> 3) & VAR_7);
 }
 FUNC_2(VAR_9->sc_fifo.fp[VAR_8], VAR_15,
     VAR_9->sc_mode.packetsize, 1);
}
