
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct domainset {int dummy; } ;
typedef int kobj_t ;
typedef int * kobj_class_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ driver_t ;
typedef TYPE_2__* device_t ;
struct TYPE_8__ {scalar_t__ state; int flags; TYPE_1__* driver; int * softc; } ;


 int VAR_0 ;
 struct domainset* FUNC_0 (int) ;
 struct domainset* FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (scalar_t__,int ,struct domainset*,int) ;
 int VAR_7 ;

int
FUNC_9(device_t VAR_8, driver_t *VAR_9)
{
 int VAR_10;
 struct domainset *VAR_11;

 if (VAR_8->state >= VAR_1)
  return (VAR_2);

 if (VAR_8->driver == VAR_9)
  return (0);

 if (VAR_8->softc && !(VAR_8->flags & VAR_0)) {
  FUNC_5(VAR_8->softc, VAR_4);
  VAR_8->softc = ((void*)0);
 }
 FUNC_4(VAR_8, ((void*)0));
 FUNC_6((kobj_t) VAR_8, ((void*)0));
 VAR_8->driver = VAR_9;
 if (VAR_9) {
  FUNC_7((kobj_t) VAR_8, (kobj_class_t) VAR_9);
  if (!(VAR_8->flags & VAR_0) && VAR_9->size > 0) {
   if (FUNC_3(VAR_8, &VAR_10) == 0)
    VAR_11 = FUNC_0(VAR_10);
   else
    VAR_11 = FUNC_1();
   VAR_8->softc = FUNC_8(VAR_9->size, VAR_4,
       VAR_11, VAR_5 | VAR_6);
   if (!VAR_8->softc) {
    FUNC_6((kobj_t) VAR_8, ((void*)0));
    FUNC_7((kobj_t) VAR_8, &VAR_7);
    VAR_8->driver = ((void*)0);
    return (VAR_3);
   }
  }
 } else {
  FUNC_7((kobj_t) VAR_8, &VAR_7);
 }

 FUNC_2();
 return (0);
}
