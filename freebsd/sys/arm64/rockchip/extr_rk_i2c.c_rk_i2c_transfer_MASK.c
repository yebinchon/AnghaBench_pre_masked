
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_i2c_softc {int busy; scalar_t__ transfer_done; int mtx; void* mode; } ;
struct iic_msg {int* buf; int len; int flags; int slave; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct rk_i2c_softc*) ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (struct rk_i2c_softc*) ;
 int FUNC_4 (struct rk_i2c_softc*,int ,int) ;
 scalar_t__ VAR_17 ;
 struct rk_i2c_softc* FUNC_5 (int ) ;
 int VAR_18 ;
 int FUNC_6 (struct rk_i2c_softc*,int *,int ,char*,int) ;
 int FUNC_7 (struct rk_i2c_softc*,int *,int ,char*,int ) ;
 int FUNC_8 (struct rk_i2c_softc*) ;
 int FUNC_9 (struct rk_i2c_softc*,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_19, struct iic_msg *VAR_20, uint32_t VAR_21)
{
 struct rk_i2c_softc *VAR_22;
 uint32_t VAR_23;
 bool VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_22 = FUNC_5(VAR_19);

 FUNC_1(VAR_22);

 while (VAR_22->busy)
  FUNC_7(VAR_22, &VAR_22->mtx, 0, "i2cbuswait", 0);
 VAR_22->busy = 1;


 FUNC_4(VAR_22, VAR_8, 0);
 FUNC_4(VAR_22, VAR_12, 0);


 FUNC_4(VAR_22, VAR_13, VAR_14);

 VAR_28 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++) {

  if (VAR_20 == ((void*)0) || VAR_20[VAR_25].buf == ((void*)0) ||
      VAR_20[VAR_25].len == 0) {
   VAR_28 = VAR_0;
   break;
  }




  if (VAR_25 < VAR_21 - 1) {
   if ((VAR_20[VAR_25 + 1].flags & VAR_2) &&
       ((VAR_20[VAR_25].flags & VAR_4) !=
       (VAR_20[VAR_25 + 1].flags & VAR_4) ||
       (VAR_20[VAR_25].slave != VAR_20[VAR_25 + 1].slave))) {
    VAR_28 = VAR_0;
    break;
   }
  }







  if (VAR_21 - VAR_25 >= 2 && VAR_20[VAR_25].len < 4 &&
      VAR_20[VAR_25].flags == (VAR_5 | VAR_3) &&
      VAR_20[VAR_25 + 1].flags == VAR_4 &&
      (VAR_20[VAR_25].slave & ~VAR_6) == (VAR_20[VAR_25 + 1].slave & ~VAR_6)) {
   VAR_22->mode = VAR_9;


   VAR_23 = VAR_20[VAR_25].slave & ~VAR_6;
   VAR_23 |= FUNC_2(0);
   FUNC_4(VAR_22, VAR_15, VAR_23);


   VAR_23 = 0;
   for (VAR_26 = 0; VAR_26 < VAR_20[VAR_25].len ; VAR_26++) {
    VAR_23 |= (VAR_20[VAR_25].buf[VAR_26] & 0xff) << (VAR_26 * 8);
    VAR_23 |= FUNC_2(VAR_26);
   }
   FUNC_4(VAR_22, VAR_16, VAR_23);

   VAR_25++;
  } else {
   if (VAR_20[VAR_25].flags & VAR_4) {
    if (VAR_20[VAR_25].flags & VAR_2) {
     VAR_22->mode = VAR_10;
    } else {
     VAR_22->mode = VAR_9;
     VAR_23 = VAR_20[VAR_25].slave & VAR_6;
     VAR_23 |= FUNC_2(0);
     FUNC_4(VAR_22, VAR_15, VAR_23);
     FUNC_4(VAR_22, VAR_16, 0);
    }
   } else {
    VAR_22->mode = VAR_11;
   }
  }

  VAR_24 = (VAR_25 > VAR_21 - 1) ||
      !(VAR_20[VAR_25 + 1].flags & VAR_2);
  FUNC_9(VAR_22, VAR_20 + VAR_25, VAR_24);

  if (VAR_17) {
   for(VAR_27 = 10000; VAR_27 > 0; VAR_27--) {
    FUNC_8(VAR_22);
    if (VAR_22->transfer_done != 0)
     break;
    FUNC_0(100);
   }
   if (VAR_27 <= 0)
    VAR_28 = VAR_1;
  } else {
   while (VAR_28 == 0 && VAR_22->transfer_done != 1) {
    VAR_28 = FUNC_6(VAR_22, &VAR_22->mtx, VAR_7, "rk_i2c",
        10 * VAR_18);
   }
  }
 }


 FUNC_4(VAR_22, VAR_8, 0);
 FUNC_4(VAR_22, VAR_12, 0);

 VAR_22->busy = 0;

 FUNC_3(VAR_22);
 return (VAR_28);
}
