
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int generalTime; int utcTime; } ;
struct TYPE_5__ {int element; TYPE_1__ u; } ;
typedef TYPE_2__ Time ;





time_t
FUNC_0(const Time *VAR_0)
{
    switch(VAR_0->element) {
    case 128:
 return VAR_0->u.utcTime;
    case 129:
 return VAR_0->u.generalTime;
    }
    return 0;
}
