
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
typedef TYPE_2__* device_t ;
typedef int attachentropy ;
struct TYPE_18__ {int unit; int flags; scalar_t__ busy; int state; int devclass; TYPE_1__* driver; int parent; } ;
struct TYPE_17__ {char* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int (*) (TYPE_2__*),TYPE_2__*) ;
 int FUNC_2 (int,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (char*,char*,int,int) ;
 int FUNC_15 (scalar_t__*,int,int ) ;
 scalar_t__ FUNC_16 (char*,int) ;

int
FUNC_17(device_t VAR_10)
{
 uint64_t VAR_11;
 uint16_t VAR_12;
 int VAR_13;

 if (FUNC_16(VAR_10->driver->name, VAR_10->unit)) {
  FUNC_5(VAR_10);
  if (VAR_9)
    FUNC_8(VAR_10, "disabled via hints entry\n");
  return (VAR_7);
 }

 FUNC_11(VAR_10);
 if (!FUNC_6(VAR_10))
  FUNC_7(VAR_10->parent, VAR_10);
 VAR_11 = FUNC_13();
 VAR_10->state = VAR_4;
 if ((VAR_13 = FUNC_0(VAR_10)) != 0) {
  FUNC_14("device_attach: %s%d attach returned %d\n",
      VAR_10->driver->name, VAR_10->unit, VAR_13);
  if (!(VAR_10->flags & VAR_2))
   FUNC_4(VAR_10->devclass, VAR_10);
  (void)FUNC_9(VAR_10, ((void*)0));
  FUNC_10(VAR_10);
  FUNC_2(VAR_10->busy == 0, ("attach failed but busy"));
  VAR_10->state = VAR_6;
  return (VAR_13);
 }
 VAR_10->flags |= VAR_0;



 VAR_12 = (uint16_t)(FUNC_13() - VAR_11);
 FUNC_15(&VAR_12, sizeof(VAR_12), VAR_8);
 FUNC_12(VAR_10);
 if (VAR_10->busy)
  VAR_10->state = VAR_5;
 else
  VAR_10->state = VAR_3;
 VAR_10->flags &= ~VAR_1;
 FUNC_1(FUNC_17, VAR_10);
 FUNC_3(VAR_10);
 return (0);
}
