
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_4__ {struct timespec lastEventTime; } ;
typedef TYPE_1__ evContext_p ;
struct TYPE_5__ {TYPE_1__* opaque; } ;
typedef TYPE_2__ evContext ;



struct timespec
FUNC_0(evContext VAR_0) {
 evContext_p *VAR_1 = VAR_0.opaque;

 return (VAR_1->lastEventTime);
}
