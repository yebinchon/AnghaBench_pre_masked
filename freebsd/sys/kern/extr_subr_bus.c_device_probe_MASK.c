
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_8__ {scalar_t__ state; int flags; int parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(device_t VAR_8)
{
 int VAR_9;

 VAR_5;

 if (VAR_8->state >= VAR_4 && (VAR_8->flags & VAR_3) == 0)
  return (-1);

 if (!(VAR_8->flags & VAR_2)) {
  if (VAR_6 && FUNC_1(VAR_8) != ((void*)0)) {
   FUNC_2(VAR_8);
   FUNC_5("not probed (disabled)\n");
  }
  return (-1);
 }
 if ((VAR_9 = FUNC_3(VAR_8->parent, VAR_8)) != 0) {
  if (VAR_7 == VAR_0 &&
      !(VAR_8->flags & VAR_1)) {
   FUNC_0(VAR_8->parent, VAR_8);
   FUNC_4(VAR_8);
   VAR_8->flags |= VAR_1;
  }
  return (VAR_9);
 }
 return (0);
}
