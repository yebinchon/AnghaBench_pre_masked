
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_4__ {scalar_t__ busy; scalar_t__ state; struct TYPE_4__* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(device_t VAR_3)
{
 if (VAR_3->busy != 0 && VAR_3->state != VAR_2 &&
     VAR_3->state != VAR_1)
  FUNC_1("device_unbusy: called for non-busy device %s",
      FUNC_0(VAR_3));
 VAR_3->busy--;
 if (VAR_3->busy == 0) {
  if (VAR_3->parent)
   FUNC_2(VAR_3->parent);
  if (VAR_3->state == VAR_2)
   VAR_3->state = VAR_0;
 }
}
