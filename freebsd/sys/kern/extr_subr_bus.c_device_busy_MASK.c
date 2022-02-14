
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ busy; struct TYPE_3__* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

void
FUNC_1(device_t VAR_3)
{
 if (VAR_3->state < VAR_1)
  FUNC_0("device_busy: called for unattached device");
 if (VAR_3->busy == 0 && VAR_3->parent)
  FUNC_1(VAR_3->parent);
 VAR_3->busy++;
 if (VAR_3->state == VAR_0)
  VAR_3->state = VAR_2;
}
