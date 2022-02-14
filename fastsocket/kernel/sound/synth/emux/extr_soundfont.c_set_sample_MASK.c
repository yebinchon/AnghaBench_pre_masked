
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soundfont_voice_info {int sample_mode; int loopend; int loopstart; int end; int start; int sample; } ;
struct snd_soundfont {int dummy; } ;
struct TYPE_2__ {int mode_flags; scalar_t__ loopend; scalar_t__ loopstart; scalar_t__ end; scalar_t__ start; } ;
struct snd_sf_sample {TYPE_1__ v; } ;


 struct snd_sf_sample* FUNC_0 (struct snd_soundfont*,int ) ;

__attribute__((used)) static struct snd_sf_sample *
FUNC_1(struct snd_soundfont *VAR_0, struct soundfont_voice_info *VAR_1)
{
 struct snd_sf_sample *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->sample);
 if (VAR_2 == ((void*)0))
  return ((void*)0);






 VAR_1->start += VAR_2->v.start;
 VAR_1->end += VAR_2->v.end;
 VAR_1->loopstart += VAR_2->v.loopstart;
 VAR_1->loopend += VAR_2->v.loopend;


 VAR_1->sample_mode = VAR_2->v.mode_flags;

 return VAR_2;
}
