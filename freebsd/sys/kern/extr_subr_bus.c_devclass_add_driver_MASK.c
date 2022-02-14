
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int kobj_class_t ;
typedef TYPE_2__* driverlink_t ;
struct TYPE_17__ {int refs; int name; TYPE_1__** baseclasses; } ;
typedef TYPE_3__ driver_t ;
typedef TYPE_4__* devclass_t ;
struct TYPE_18__ {int drivers; } ;
struct TYPE_16__ {int pass; int flags; TYPE_3__* driver; } ;
struct TYPE_15__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_5 (int ,char const*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 TYPE_2__* FUNC_8 (int,int ,int) ;

int
FUNC_9(devclass_t VAR_10, driver_t *VAR_11, int VAR_12, devclass_t *VAR_13)
{
 driverlink_t VAR_14;
 const char *VAR_15;

 FUNC_1(("%s", FUNC_0(VAR_11)));


 if (VAR_12 <= VAR_0)
  return (VAR_2);

 VAR_14 = FUNC_8(sizeof *VAR_14, VAR_4, VAR_5|VAR_6);
 if (!VAR_14)
  return (VAR_3);







 FUNC_7((kobj_class_t) VAR_11);
 if (VAR_11->baseclasses)
  VAR_15 = VAR_11->baseclasses[0]->name;
 else
  VAR_15 = ((void*)0);
 *VAR_13 = FUNC_5(VAR_11->name, VAR_15, VAR_7);

 VAR_14->driver = VAR_11;
 FUNC_2(&VAR_10->drivers, VAR_14, VAR_9);
 VAR_11->refs++;
 VAR_14->pass = VAR_12;
 FUNC_6(VAR_14);

 if (VAR_8) {
  VAR_14->flags |= VAR_1;
 } else {
  FUNC_4(VAR_10, VAR_11);
 }
 FUNC_3();
 return (0);
}
