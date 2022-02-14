
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* syncmask; int level; int packetsize; } ;
struct TYPE_3__ {int * fp; } ;
struct ums_softc {TYPE_2__ sc_mode; TYPE_1__ sc_fifo; } ;
typedef int int32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ums_softc *VAR_3, int32_t VAR_4, int32_t VAR_5,
    int32_t VAR_6, int32_t VAR_7, int32_t VAR_8)
{
 uint8_t VAR_9[8];

 if (1) {

  if (VAR_4 > 254)
   VAR_4 = 254;
  if (VAR_4 < -256)
   VAR_4 = -256;
  if (VAR_5 > 254)
   VAR_5 = 254;
  if (VAR_5 < -256)
   VAR_5 = -256;
  if (VAR_6 > 126)
   VAR_6 = 126;
  if (VAR_6 < -128)
   VAR_6 = -128;
  if (VAR_7 > 126)
   VAR_7 = 126;
  if (VAR_7 < -128)
   VAR_7 = -128;

  VAR_9[0] = VAR_3->sc_mode.syncmask[1];
  VAR_9[0] |= (~VAR_8) & VAR_0;
  VAR_9[1] = VAR_4 >> 1;
  VAR_9[2] = VAR_5 >> 1;
  VAR_9[3] = VAR_4 - (VAR_4 >> 1);
  VAR_9[4] = VAR_5 - (VAR_5 >> 1);

  if (VAR_3->sc_mode.level == 1) {
   VAR_9[5] = VAR_6 >> 1;
   VAR_9[6] = VAR_6 - (VAR_6 >> 1);
   VAR_9[7] = (((~VAR_8) >> 3) & VAR_1);
  }
  FUNC_1(VAR_3->sc_fifo.fp[VAR_2], VAR_9,
      VAR_3->sc_mode.packetsize, 1);
 } else {
  FUNC_0("Buffer full, discarded packet\n");
 }
}
