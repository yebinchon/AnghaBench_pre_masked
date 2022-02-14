
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_15__ {scalar_t__ state; int flags; int devclass; scalar_t__ parent; } ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int (*) (TYPE_1__*),TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(device_t VAR_10)
{
 int VAR_11;

 VAR_9;

 FUNC_4(("%s", FUNC_1(VAR_10)));
 if (VAR_10->state == VAR_3)
  return (VAR_5);
 if (VAR_10->state == VAR_2) {
  FUNC_7(VAR_10, "device in attaching state! Deferring detach.\n");
  return (VAR_5);
 }
 if (VAR_10->state != VAR_1)
  return (0);

 FUNC_3(FUNC_12, VAR_10, VAR_6);
 if ((VAR_11 = FUNC_2(VAR_10)) != 0) {
  FUNC_3(FUNC_12, VAR_10,
      VAR_8);
  return (VAR_11);
 } else {
  FUNC_3(FUNC_12, VAR_10,
      VAR_7);
 }
 FUNC_11(VAR_10);
 if (!FUNC_6(VAR_10))
  FUNC_7(VAR_10, "detached\n");
 if (VAR_10->parent)
  FUNC_0(VAR_10->parent, VAR_10);

 if (!(VAR_10->flags & VAR_0))
  FUNC_5(VAR_10->devclass, VAR_10);

 FUNC_10(VAR_10);
 VAR_10->state = VAR_4;
 (void)FUNC_8(VAR_10, ((void*)0));
 FUNC_9(VAR_10);

 return (0);
}
