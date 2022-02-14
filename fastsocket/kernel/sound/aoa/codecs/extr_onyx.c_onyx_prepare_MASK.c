
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct onyx {int analog_locked; int spdif_locked; int mutex; } ;
struct codec_info_item {struct onyx* codec_data; } ;
struct bus_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ format; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int ,int*) ;
 scalar_t__ FUNC_3 (struct onyx*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct codec_info_item *VAR_7,
   struct bus_info *VAR_8,
   struct snd_pcm_substream *VAR_9)
{
 u8 VAR_10;
 struct onyx *VAR_11 = VAR_7->codec_data;
 int VAR_12 = -VAR_0;

 FUNC_0(&VAR_11->mutex);
 switch (VAR_9->runtime->rate) {
 case 32000:
 case 44100:
 case 48000:



  VAR_12 = 0;
  goto out_unlock;
 default:


  FUNC_2(VAR_7->codec_data, VAR_4, &VAR_10);
  if (FUNC_3(VAR_11,
     VAR_4,
     VAR_10 & ~VAR_5))
   goto out_unlock;
  VAR_11->spdif_locked = 1;
  VAR_12 = 0;
  goto out_unlock;
 }

 out_unlock:
 FUNC_1(&VAR_11->mutex);

 return VAR_12;
}
