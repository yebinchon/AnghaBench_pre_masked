
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
struct iic_msg {int flags; scalar_t__ len; int slave; int buf; } ;
struct TYPE_12__ {int last_slave; int call_lock; int dev; int slave_valid; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,int,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int ) ;

int
FUNC_15(device_t VAR_14, struct iic_msg *VAR_15, uint32_t VAR_16)
{
 ig4iic_softc_t *VAR_17 = FUNC_0(VAR_14);
 const char *VAR_18 = ((void*)0);
 uint32_t VAR_19;
 int VAR_20;
 int VAR_21;
 bool VAR_22;
 bool VAR_23;
 bool VAR_24;
 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  if (VAR_15[VAR_19].len == 0) {
   VAR_18 = "message with no data";
   break;
  }
  if (VAR_19 > 0) {
   if ((VAR_15[VAR_19].flags & VAR_9) != 0 &&
       (VAR_15[VAR_19 - 1].flags & VAR_10) == 0) {
    VAR_18 = "stop not followed by start";
    break;
   }
   if ((VAR_15[VAR_19 - 1].flags & VAR_10) != 0 &&
       VAR_15[VAR_19].slave != VAR_15[VAR_19 - 1].slave) {
    VAR_18 = "change of slave without stop";
    break;
   }
   if ((VAR_15[VAR_19].flags & VAR_9) != 0 &&
       (VAR_15[VAR_19].flags & VAR_11) !=
       (VAR_15[VAR_19 - 1].flags & VAR_11)) {
    VAR_18 = "change of direction without repeated"
        " start";
    break;
   }
  }
 }
 if (VAR_18 != ((void*)0)) {
  if (VAR_12)
   FUNC_2(VAR_14, "%s\n", VAR_18);
  return (VAR_8);
 }


 VAR_24 = FUNC_13(&VAR_17->call_lock) != 0;
 if (!VAR_24)
  FUNC_12(&VAR_17->call_lock);


 if (VAR_13) {
  VAR_21 = FUNC_1(VAR_14);
  if (VAR_13 & (1 << VAR_21)) {
   VAR_13 &= ~(1 << VAR_21);
   FUNC_3(VAR_17);
  }
 }





 FUNC_10(VAR_17, VAR_3);

 VAR_22 = 0;
 VAR_20 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  if ((VAR_15[VAR_19].flags & VAR_9) == 0) {
   VAR_20 = FUNC_9(VAR_17, VAR_15[VAR_19].slave, VAR_22);
  } else {
   if (!VAR_17->slave_valid ||
       (VAR_15[VAR_19].slave >> 1) != VAR_17->last_slave) {
    FUNC_2(VAR_14, "start condition suppressed"
        "but slave address is not set up");
    VAR_20 = VAR_0;
    break;
   }
   VAR_22 = 0;
  }
  if (VAR_20 != 0)
   break;

  VAR_23 = (VAR_15[VAR_19].flags & VAR_10) == 0;
  if (VAR_15[VAR_19].flags & VAR_11)
   VAR_20 = FUNC_4(VAR_17, VAR_15[VAR_19].buf, VAR_15[VAR_19].len,
       VAR_22, VAR_23);
  else
   VAR_20 = FUNC_6(VAR_17, VAR_15[VAR_19].buf, VAR_15[VAR_19].len,
       VAR_22, VAR_23);


  if (VAR_23 && VAR_20 == 0) {
   VAR_20 = FUNC_14(VAR_17, VAR_1);
   if (VAR_20 == 0)
    FUNC_10(VAR_17, VAR_2);
  }

  if (VAR_20 != 0) {





   if (FUNC_8(VAR_17) &&
       FUNC_7(VAR_17) != 0) {
    FUNC_2(VAR_17->dev, "Failed to abort "
        "transfer. Do the controller reset.\n");
    FUNC_5(VAR_17, 1);
   } else {
    while (FUNC_10(VAR_17, VAR_5) &
        VAR_7)
     FUNC_10(VAR_17, VAR_4);
    FUNC_10(VAR_17, VAR_6);
    FUNC_10(VAR_17, VAR_2);
   }
   break;
  }

  VAR_22 = !VAR_23;
 }

 if (!VAR_24)
  FUNC_11(&VAR_17->call_lock);
 return (VAR_20);
}
