
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pcm_info {TYPE_2__* substream; scalar_t__ frame_count; } ;
struct i2sbus_dev {TYPE_1__* intfregs; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_6__ {scalar_t__ buffer_size; } ;
struct TYPE_5__ {TYPE_3__* runtime; } ;
struct TYPE_4__ {int frame_count; } ;


 int FUNC_0 (struct i2sbus_dev*,int,struct pcm_info**,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct i2sbus_dev *VAR_0, int VAR_1)
{
 struct pcm_info *VAR_2;
 u32 VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_2, ((void*)0));

 VAR_3 = FUNC_1(&VAR_0->intfregs->frame_count);
 VAR_3 = VAR_3 - VAR_2->frame_count;

 if (VAR_3 >= VAR_2->substream->runtime->buffer_size)
  VAR_3 %= VAR_2->substream->runtime->buffer_size;
 return VAR_3;
}
