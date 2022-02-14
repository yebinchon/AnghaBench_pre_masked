
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ va_buffer; } ;
struct machfb_softc {int sc_curoff; int sc_flags; TYPE_1__ sc_va; } ;
struct TYPE_4__ {int red; int green; int blue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct machfb_softc*,int ) ;
 TYPE_2__* VAR_5 ;
 int** VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (struct machfb_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct machfb_softc *VAR_8)
{
 uint16_t *VAR_9, VAR_10;
 uint8_t VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8->sc_curoff == 0)
  return (VAR_2);

 FUNC_1(VAR_8, 0);
 FUNC_2(VAR_8, VAR_1, VAR_8->sc_curoff >> 3);
 VAR_11 = VAR_4 & 0xf;
 FUNC_2(VAR_8, VAR_0, VAR_5[VAR_11].red << 24 |
     VAR_5[VAR_11].green << 16 |
     VAR_5[VAR_11].blue << 8);
 VAR_9 = (uint16_t *)(VAR_8->sc_va.va_buffer + VAR_8->sc_curoff);
 for (VAR_12 = 0; VAR_12 < 64; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
   VAR_10 = VAR_7[
       VAR_6[VAR_12][VAR_13] >> 4] << 8 |
       VAR_7[
       VAR_6[VAR_12][VAR_13] & 0x0f];
   if (VAR_8->sc_flags & VAR_3)
    *(VAR_9++) = FUNC_0(VAR_10);
   else
    *(VAR_9++) = VAR_10;
  }
 }

 return (0);
}
