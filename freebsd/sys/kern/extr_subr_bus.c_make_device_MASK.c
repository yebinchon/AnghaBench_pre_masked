
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int kobj_t ;
typedef TYPE_1__* device_t ;
typedef int * devclass_t ;
struct TYPE_9__ {int unit; int flags; int state; int * softc; int * ivars; scalar_t__ order; scalar_t__ devflags; scalar_t__ busy; int * desc; int * nameunit; int * devclass; int * driver; int children; struct TYPE_9__* parent; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (char const*,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;
 TYPE_1__* FUNC_10 (int,int ,int) ;
 int VAR_12 ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static device_t
FUNC_12(device_t VAR_13, const char *VAR_14, int VAR_15)
{
 device_t VAR_16;
 devclass_t VAR_17;

 FUNC_1(("%s at %s as unit %d", VAR_14, FUNC_0(VAR_13), VAR_15));

 if (VAR_14) {
  VAR_17 = FUNC_6(VAR_14, ((void*)0), VAR_9);
  if (!VAR_17) {
   FUNC_11("make_device: can't find device class %s\n",
       VAR_14);
   return (((void*)0));
  }
 } else {
  VAR_17 = ((void*)0);
 }

 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_6, VAR_7|VAR_8);
 if (!VAR_16)
  return (((void*)0));

 VAR_16->parent = VAR_13;
 FUNC_2(&VAR_16->children);
 FUNC_9((kobj_t) VAR_16, &VAR_12);
 VAR_16->driver = ((void*)0);
 VAR_16->devclass = ((void*)0);
 VAR_16->unit = VAR_15;
 VAR_16->nameunit = ((void*)0);
 VAR_16->desc = ((void*)0);
 VAR_16->busy = 0;
 VAR_16->devflags = 0;
 VAR_16->flags = VAR_0;
 VAR_16->order = 0;
 if (VAR_15 == -1)
  VAR_16->flags |= VAR_4;
 if (VAR_14) {
  VAR_16->flags |= VAR_1;
  if (FUNC_5(VAR_17, VAR_16)) {
   FUNC_8((kobj_t) VAR_16, VAR_6);
   return (((void*)0));
  }
 }
 if (VAR_13 != ((void*)0) && FUNC_7(VAR_13))
  VAR_16->flags |= VAR_2 | VAR_3;
 VAR_16->ivars = ((void*)0);
 VAR_16->softc = ((void*)0);

 VAR_16->state = VAR_5;

 FUNC_3(&VAR_10, VAR_16, VAR_11);
 FUNC_4();

 return (VAR_16);
}
