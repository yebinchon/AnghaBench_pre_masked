
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


typedef TYPE_1__* driverlink_t ;
typedef TYPE_2__* device_t ;
typedef TYPE_3__* devclass_t ;
struct TYPE_24__ {struct TYPE_24__* parent; } ;
struct TYPE_23__ {scalar_t__ state; int flags; scalar_t__ devflags; int unit; TYPE_3__* devclass; TYPE_13__* driver; } ;
struct TYPE_22__ {scalar_t__ pass; TYPE_13__* driver; } ;
struct TYPE_21__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_13__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,TYPE_13__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 TYPE_1__* FUNC_10 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,char const*) ;
 int FUNC_13 (char*,int ,char*,scalar_t__*) ;

int
FUNC_14(device_t VAR_8, device_t VAR_9)
{
 devclass_t VAR_10;
 driverlink_t VAR_11 = ((void*)0);
 driverlink_t VAR_12;
 int VAR_13, VAR_14 = 0;
 int VAR_15 = (VAR_9->devclass != ((void*)0));

 VAR_6;

 VAR_10 = VAR_8->devclass;
 if (!VAR_10)
  FUNC_11("device_probe_child: parent device has no devclass");





 if (VAR_9->state == VAR_3 && (VAR_9->flags & VAR_2) == 0)
  return (0);

 for (; VAR_10; VAR_10 = VAR_10->parent) {
  for (VAR_12 = FUNC_9(VAR_10, VAR_9);
       VAR_12;
       VAR_12 = FUNC_10(VAR_10, VAR_9, VAR_12)) {

   if (VAR_12->pass > VAR_7)
    continue;

   FUNC_2(("Trying %s", FUNC_1(VAR_12->driver)));
   VAR_13 = FUNC_7(VAR_9, VAR_12->driver);
   if (VAR_13 == VAR_4)
    return (VAR_13);
   else if (VAR_13 != 0)
    continue;
   if (!VAR_15) {
    if (FUNC_6(VAR_9,
        VAR_12->driver->name) != 0) {
     char const * VAR_16 =
         FUNC_5(VAR_9);
     if (VAR_16 == ((void*)0))
      VAR_16 = "(unknown)";
     FUNC_12("driver bug: Unable to set "
         "devclass (class: %s "
         "devname: %s)\n",
         VAR_12->driver->name,
         VAR_16);
     (void)FUNC_7(VAR_9, ((void*)0));
     continue;
    }
   }


   FUNC_13(VAR_12->driver->name, VAR_9->unit,
       "flags", &VAR_9->devflags);

   VAR_13 = FUNC_0(VAR_9);


   VAR_9->devflags = 0;
   if (!VAR_15)
    (void)FUNC_6(VAR_9, ((void*)0));





   if (VAR_13 == 0) {
    VAR_11 = VAR_12;
    VAR_14 = 0;
    break;
   }





   FUNC_8(VAR_9);






   if (VAR_13 <= VAR_0 &&
       !(VAR_9->flags & VAR_1)) {
    VAR_13 = VAR_5;
   }





   if (VAR_13 > 0) {
    (void)FUNC_7(VAR_9, ((void*)0));
    continue;
   }






   if (VAR_11 == ((void*)0) || VAR_13 > VAR_14) {
    VAR_11 = VAR_12;
    VAR_14 = VAR_13;
    continue;
   }
  }




  if (VAR_11 && VAR_14 == 0)
   break;
 }





 if (VAR_11) {
  if (VAR_9->state > VAR_3 && VAR_11->driver != VAR_9->driver)
   if ((VAR_13 = FUNC_4(VAR_8)) != 0)
    return (VAR_13);


  if (!VAR_9->devclass) {
   VAR_13 = FUNC_6(VAR_9, VAR_11->driver->name);
   if (VAR_13 != 0)
    return (VAR_13);
  }
  VAR_13 = FUNC_7(VAR_9, VAR_11->driver);
  if (VAR_13 != 0)
   return (VAR_13);
  FUNC_13(VAR_11->driver->name, VAR_9->unit,
      "flags", &VAR_9->devflags);

  if (VAR_14 < 0) {




   FUNC_0(VAR_9);



  } else
   VAR_9->flags &= ~VAR_2;
  VAR_9->state = VAR_3;

  FUNC_3();
  return (0);
 }

 return (VAR_5);
}
