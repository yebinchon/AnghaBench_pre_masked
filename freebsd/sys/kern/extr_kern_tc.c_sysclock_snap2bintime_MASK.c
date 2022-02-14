
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct bintime {int sec; } ;
struct TYPE_4__ {int leapsec_adjustment; int period; struct bintime tick_time; int period_lerp; struct bintime tick_time_lerp; } ;
struct TYPE_3__ {int th_scale; struct bintime tick_time; } ;
struct sysclock_snap {int delta; TYPE_2__ ff_info; TYPE_1__ fb_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct bintime*,struct bintime*) ;
 int FUNC_1 (struct bintime*,int) ;
 int FUNC_2 (struct bintime*,int *) ;
 int VAR_5 ;
 int FUNC_3 (int,int ,struct bintime*) ;
 int FUNC_4 (struct bintime*) ;

int
FUNC_5(struct sysclock_snap *VAR_6, struct bintime *VAR_7,
    int VAR_8, uint32_t VAR_9)
{
 struct bintime VAR_10;





 switch (VAR_8) {
 case 129:
  *VAR_7 = VAR_6->fb_info.tick_time;


  if (VAR_6->delta > 0)
   FUNC_1(VAR_7, VAR_6->fb_info.th_scale * VAR_6->delta);

  if ((VAR_9 & VAR_1) == 0) {
   FUNC_4(&VAR_10);
   FUNC_0(VAR_7, &VAR_10);
  }
  break;
 default:
  return (VAR_0);
  break;
 }

 return (0);
}
