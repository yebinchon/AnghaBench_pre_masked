
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int device_config; int (* mixer_init ) (struct oxygen*) ;} ;
struct oxygen {TYPE_1__ model; scalar_t__ has_ac97_1; scalar_t__ has_ac97_0; } ;
struct TYPE_10__ {int pcm_dev; struct TYPE_10__* controls; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct oxygen*,TYPE_2__*,unsigned int) ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct oxygen*) ;

int FUNC_3(struct oxygen *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3, FUNC_0(VAR_3));
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_6->model.device_config & VAR_0) {
  VAR_8 = FUNC_1(VAR_6, VAR_5,
       FUNC_0(VAR_5));
  if (VAR_8 < 0)
   return VAR_8;
 }
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); ++VAR_7) {
  if (!(VAR_6->model.device_config & VAR_4[VAR_7].pcm_dev))
   continue;
  VAR_8 = FUNC_1(VAR_6, VAR_4[VAR_7].controls,
       FUNC_0(VAR_4[VAR_7].controls));
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_6->has_ac97_0) {
  VAR_8 = FUNC_1(VAR_6, VAR_1,
       FUNC_0(VAR_1));
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_6->has_ac97_1) {
  VAR_8 = FUNC_1(VAR_6, VAR_2,
       FUNC_0(VAR_2));
  if (VAR_8 < 0)
   return VAR_8;
 }
 return VAR_6->model.mixer_init ? VAR_6->model.mixer_init(VAR_6) : 0;
}
