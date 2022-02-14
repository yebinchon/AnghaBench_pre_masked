
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_i2c_device {TYPE_2__* bus; struct cs8427* private_data; } ;
struct TYPE_8__ {TYPE_3__* pcm_ctl; int def_status; int pcm_status; } ;
struct cs8427 {TYPE_4__ playback; } ;
struct TYPE_7__ {int id; TYPE_1__* vd; } ;
struct TYPE_6__ {int card; } ;
struct TYPE_5__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,int *) ;

int FUNC_3(struct snd_i2c_device *VAR_4, int VAR_5)
{
 struct cs8427 *VAR_6;

 if (FUNC_1(!VAR_4))
  return -VAR_0;
 VAR_6 = VAR_4->private_data;
 if (VAR_5)
  FUNC_0(VAR_6->playback.pcm_status,
         VAR_6->playback.def_status, 24);
 VAR_6->playback.pcm_ctl->vd[0].access &= ~VAR_1;
 FUNC_2(VAR_4->bus->card,
         VAR_3 | VAR_2,
         &VAR_6->playback.pcm_ctl->id);
 return 0;
}
