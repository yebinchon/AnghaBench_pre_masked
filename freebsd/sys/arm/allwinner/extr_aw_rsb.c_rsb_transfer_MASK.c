
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rsb_softc {scalar_t__ type; int busy; int cur_addr; int * msg; scalar_t__ status; int mtx; } ;
struct iic_msg {int flags; int slave; int len; int buf; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct rsb_softc*) ;
 int VAR_15 ;
 int FUNC_1 (struct rsb_softc*,int ) ;
 int FUNC_2 (struct rsb_softc*) ;
 int FUNC_3 (struct rsb_softc*,int ,int) ;
 struct rsb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct rsb_softc*,int *,int ,char*,int ) ;
 int FUNC_6 (int,int ,int,int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rsb_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_16, struct iic_msg *VAR_17, uint32_t VAR_18)
{
 struct rsb_softc *VAR_19;
 uint32_t VAR_20[2], VAR_21[2], VAR_22;
 uint16_t VAR_23;
 uint8_t VAR_24;
 int VAR_25;

 VAR_19 = FUNC_4(VAR_16);
 if (VAR_18 != 2 || (VAR_17[0].flags & VAR_9) == VAR_9 ||
     (VAR_17[0].slave >> 1) != (VAR_17[1].slave >> 1) ||
     VAR_17[0].len != 1 || VAR_17[1].len > VAR_15)
  return (VAR_8);


 if (VAR_19->type == VAR_0) {
  if ((VAR_17[1].flags & VAR_9) != 0) {
   switch (VAR_17[1].len) {
   case 1:
    VAR_24 = VAR_3;
    break;
   case 2:
    VAR_24 = VAR_1;
    break;
   case 4:
    VAR_24 = VAR_2;
    break;
   default:
    return (VAR_8);
   }
  } else {
   switch (VAR_17[1].len) {
   case 1:
    VAR_24 = VAR_6;
    break;
   case 2:
    VAR_24 = VAR_4;
    break;
   case 4:
    VAR_24 = VAR_5;
    break;
   default:
    return (VAR_8);
   }
  }
 }

 FUNC_0(VAR_19);
 while (VAR_19->busy)
  FUNC_5(VAR_19, &VAR_19->mtx, 0, "i2cbuswait", 0);
 VAR_19->busy = 1;
 VAR_19->status = 0;


 if (VAR_19->type == VAR_0) {
  VAR_23 = VAR_17[0].slave >> 1;
  if (VAR_19->cur_addr != VAR_23) {
   VAR_25 = FUNC_8(VAR_16, VAR_23);
   if (VAR_25 != 0)
    goto done;
   VAR_19->cur_addr = VAR_23;
   VAR_19->status = 0;
  }
 }


 FUNC_3(VAR_19, VAR_14, FUNC_1(VAR_19, VAR_14));


 VAR_20[0] = FUNC_7(VAR_17[0].buf, VAR_17[0].len, 0);
 FUNC_3(VAR_19, VAR_11, VAR_20[0]);


 if ((VAR_17[1].flags & VAR_9) == 0) {
  VAR_21[0] = FUNC_7(VAR_17[1].buf, VAR_17[1].len, 0);
  FUNC_3(VAR_19, VAR_12, VAR_21[0]);
 }


 if (VAR_19->type == VAR_0)
  FUNC_3(VAR_19, VAR_10, VAR_24);


 VAR_22 = VAR_17[0].len - 1;
 if ((VAR_17[1].flags & VAR_9) == VAR_9)
  VAR_22 |= VAR_7;
 FUNC_3(VAR_19, VAR_13, VAR_22);


 VAR_25 = FUNC_9(VAR_16);
 if (VAR_25 != 0)
  goto done;


 if ((VAR_17[1].flags & VAR_9) == VAR_9) {
  VAR_21[0] = FUNC_1(VAR_19, VAR_12);
  FUNC_6(VAR_21[0], VAR_17[1].buf, VAR_17[1].len, 0);
 }

done:
 VAR_19->msg = ((void*)0);
 VAR_19->busy = 0;
 FUNC_10(VAR_19);
 FUNC_2(VAR_19);

 return (VAR_25);
}
