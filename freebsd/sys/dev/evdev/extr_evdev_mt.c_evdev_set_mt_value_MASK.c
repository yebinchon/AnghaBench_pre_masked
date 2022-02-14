
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evdev_dev {TYPE_2__* ev_mt; } ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_4__ {TYPE_1__* ev_mt_slots; } ;
struct TYPE_3__ {size_t* ev_mt_states; } ;


 size_t FUNC_0 (int ) ;

inline void
FUNC_1(struct evdev_dev *VAR_0, int32_t VAR_1, int16_t VAR_2,
    int32_t VAR_3)
{

 VAR_0->ev_mt->ev_mt_slots[VAR_1].ev_mt_states[FUNC_0(VAR_2)] =
     VAR_3;
}
