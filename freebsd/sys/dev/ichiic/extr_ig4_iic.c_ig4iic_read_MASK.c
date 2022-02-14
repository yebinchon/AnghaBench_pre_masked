
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int txfifo_depth; int rxfifo_depth; } ;
struct TYPE_8__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ ig4iic_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(ig4iic_softc_t *VAR_10, uint8_t *VAR_11, uint16_t VAR_12,
    bool VAR_13, bool VAR_14)
{
 uint32_t VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18, VAR_19, VAR_20 = 0;
 int VAR_21;

 if (VAR_12 == 0)
  return (0);

 while (VAR_17 < VAR_12) {
  VAR_18 = VAR_10->cfg.txfifo_depth -
      (FUNC_1(VAR_10, VAR_9) & VAR_3);
  if (VAR_18 <= 0) {
   VAR_21 = FUNC_3(VAR_10, VAR_6);
   if (VAR_21)
    break;
   VAR_18 = VAR_10->cfg.txfifo_depth;
  }

  VAR_18 = FUNC_0(VAR_18, VAR_10->cfg.rxfifo_depth - VAR_20);
  VAR_19 = FUNC_0(VAR_16 + VAR_18, (int)VAR_12);
  while (VAR_16 < VAR_19) {
   VAR_15 = VAR_0;
   if (VAR_13 && VAR_16 == 0)
    VAR_15 |= VAR_1;
   if (VAR_14 && VAR_16 == VAR_12 - 1)
    VAR_15 |= VAR_2;
   FUNC_2(VAR_10, VAR_7, VAR_15);
   VAR_16++;
  }

  VAR_20 = 0;
  if (VAR_16 != VAR_12 && VAR_16 - VAR_17 > VAR_4)
   VAR_20 = VAR_4;

  while (VAR_17 < VAR_16 - VAR_20) {
   VAR_18 = FUNC_0((int)VAR_12 - VAR_17,
       FUNC_1(VAR_10, VAR_8) & VAR_3);
   if (VAR_18 > 0) {
    while (VAR_18--)
     VAR_11[VAR_17++] = 0xFF &
         FUNC_1(VAR_10, VAR_7);
   } else {
    VAR_21 = FUNC_3(VAR_10, VAR_5);
    if (VAR_21)
     goto out;
   }
  }
 }
out:
 return (VAR_21);
}
