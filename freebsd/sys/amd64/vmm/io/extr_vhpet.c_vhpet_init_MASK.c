
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vm {int dummy; } ;
struct vhpet_callout_arg {int timer_num; struct vhpet* vhpet; } ;
struct vhpet {TYPE_1__* timer; int freq_sbt; int mtx; struct vm* vm; } ;
struct bintime {int dummy; } ;
struct TYPE_2__ {int cap_config; int compval; struct vhpet_callout_arg arg; int callout; } ;


 int FUNC_0 (int ,struct bintime*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bintime) ;
 int FUNC_2 (int *,int) ;
 struct vhpet* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (struct vm*) ;

struct vhpet *
FUNC_6(struct vm *VAR_8)
{
 int VAR_9, VAR_10;
 struct vhpet *VAR_11;
 uint64_t VAR_12;
 struct vhpet_callout_arg *VAR_13;
 struct bintime VAR_14;

 VAR_11 = FUNC_3(sizeof(struct vhpet), VAR_4, VAR_5 | VAR_6);
        VAR_11->vm = VAR_8;
 FUNC_4(&VAR_11->mtx, "vhpet lock", ((void*)0), VAR_3);

 FUNC_0(VAR_0, &VAR_14);
 VAR_11->freq_sbt = FUNC_1(VAR_14);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 >= 32)
  VAR_12 = 0xff000000;
 else if (VAR_10 >= 20)
  VAR_12 = 0xf << (VAR_10 - 4);
 else
  VAR_12 = 0;




 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_11->timer[VAR_9].cap_config = VAR_12 << 32;
  VAR_11->timer[VAR_9].cap_config |= VAR_2;
  VAR_11->timer[VAR_9].cap_config |= VAR_1;

  VAR_11->timer[VAR_9].compval = 0xffffffff;
  FUNC_2(&VAR_11->timer[VAR_9].callout, 1);

  VAR_13 = &VAR_11->timer[VAR_9].arg;
  VAR_13->vhpet = VAR_11;
  VAR_13->timer_num = VAR_9;
 }

 return (VAR_11);
}
