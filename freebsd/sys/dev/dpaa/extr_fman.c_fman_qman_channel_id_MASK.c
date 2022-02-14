
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_softc {int qman_chan_count; int qman_chan_base; } ;
typedef int device_t ;


 struct fman_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_0, int VAR_1)
{
 struct fman_softc *VAR_2;
 int VAR_3[] = {0x31, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e,
     0x2f, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_2->qman_chan_count; VAR_4++) {
  if (VAR_3[VAR_4] == VAR_1)
   return (VAR_2->qman_chan_base + VAR_4);
 }

 return (0);
}
