
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {int flags; void* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;

void
FUNC_1(device_t VAR_2, void *VAR_3)
{
 if (VAR_2->softc && !(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2->softc, VAR_1);
 VAR_2->softc = VAR_3;
 if (VAR_2->softc)
  VAR_2->flags |= VAR_0;
 else
  VAR_2->flags &= ~VAR_0;
}
