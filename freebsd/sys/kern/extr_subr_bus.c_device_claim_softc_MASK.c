
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {int flags; scalar_t__ softc; } ;


 int VAR_0 ;

void
FUNC_0(device_t VAR_1)
{
 if (VAR_1->softc)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
}
