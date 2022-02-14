
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ckb_softc {int sc_repeat_key; int sc_flags; int* scan; int cols; int rows; int* scan_local; int sc_repeat_callout; int gpio; int gpio_dev; scalar_t__ sc_repeating; } ;
struct TYPE_4__ {struct ckb_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int,int ,struct ckb_softc*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int*,int,int*,int) ;
 int VAR_4 ;
 int FUNC_7 (struct ckb_softc*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_8(keyboard_t *VAR_5, int VAR_6)
{
 struct ckb_softc *VAR_7;
 int VAR_8,VAR_9;
 uint16_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_7 = VAR_5->kb_data;

 FUNC_0();

 if (!FUNC_3(VAR_5))
  return (VAR_2);

 if (VAR_7->sc_repeating) {
  VAR_7->sc_repeating = 0;
  FUNC_4(&VAR_7->sc_repeat_callout, VAR_4 / 10,
                    VAR_3, VAR_7);
  return (VAR_7->sc_repeat_key);
 }

 if (VAR_7->sc_flags & VAR_0) {
  for (;;) {
   FUNC_2(VAR_7->gpio_dev, VAR_7->gpio, &VAR_13);
   if (VAR_13 == 0) {
    if (FUNC_6(VAR_1, VAR_7->scan,
     VAR_7->cols,
        VAR_7->scan, VAR_7->cols)) {
     return (VAR_2);
    }
    break;
   }
   if (!VAR_6) {
    return (VAR_2);
   }
   FUNC_1(1000);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->cols; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_7->rows; VAR_9++) {
   VAR_11 = (VAR_7->scan_local[VAR_8] & (1 << VAR_9));
   VAR_12 = (VAR_7->scan[VAR_8] & (1 << VAR_9));

   if (VAR_11 == VAR_12)
    continue;

   VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_9);
   if (VAR_10 == 0) {
    continue;
   }

   if (VAR_12 > 0) {

    VAR_7->scan_local[VAR_8] |= (1 << VAR_9);


    VAR_7->sc_repeat_key = VAR_10;
    FUNC_4(&VAR_7->sc_repeat_callout,
        VAR_4 / 2, VAR_3, VAR_7);

   } else {

    VAR_7->scan_local[VAR_8] &= ~(1 << VAR_9);


    VAR_10 |= 0x80;


    VAR_7->sc_repeat_key = -1;
    FUNC_5(&VAR_7->sc_repeat_callout);
   }

   return (VAR_10);
  }
 }

 return (VAR_2);
}
