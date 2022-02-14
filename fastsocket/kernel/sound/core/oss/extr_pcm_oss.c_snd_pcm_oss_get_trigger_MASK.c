
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ runtime; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct TYPE_3__ {scalar_t__ trigger; } ;
struct TYPE_4__ {TYPE_1__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_oss_file *VAR_4)
{
 struct snd_pcm_substream *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_5 = VAR_4->streams[VAR_3];
 VAR_6 = VAR_4->streams[VAR_2];
 if (VAR_5 && VAR_5->runtime && FUNC_0(VAR_5->runtime)->oss.trigger)
  VAR_7 |= VAR_1;
 if (VAR_6 && VAR_6->runtime && FUNC_0(VAR_6->runtime)->oss.trigger)
  VAR_7 |= VAR_0;
 return VAR_7;
}
