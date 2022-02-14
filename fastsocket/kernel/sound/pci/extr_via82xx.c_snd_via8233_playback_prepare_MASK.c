
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct viadev {int reg_offset; } ;
struct via82xx {int ** playback_volume; int ac97; scalar_t__ spdif_on; scalar_t__ no_vra; int * rates; scalar_t__ dxs_src; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; scalar_t__ format; int channels; struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct viadev*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 struct via82xx* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct via82xx*,struct viadev*) ;
 int FUNC_7 (struct via82xx*,int ) ;
 int FUNC_8 (struct via82xx*,struct viadev*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_8)
{
 struct via82xx *VAR_9 = FUNC_5(VAR_8);
 struct viadev *VAR_10 = VAR_8->runtime->private_data;
 struct snd_pcm_runtime *VAR_11 = VAR_8->runtime;
 int VAR_12 = VAR_9->dxs_src ? 48000 : VAR_11->rate;
 int VAR_13;
 u32 VAR_14;

 if ((VAR_13 = FUNC_10(&VAR_9->rates[0], VAR_12)) < 0)
  return VAR_13;
 if (VAR_13)
  FUNC_4(VAR_9->ac97, VAR_0,
      VAR_9->no_vra ? 48000 : VAR_11->rate);
 if (VAR_9->spdif_on && VAR_10->reg_offset == 0x30)
  FUNC_4(VAR_9->ac97, VAR_1, VAR_11->rate);

 if (VAR_11->rate == 48000)
  VAR_14 = 0xfffff;
 else
  VAR_14 = (0x100000 / 48000) * VAR_11->rate +
   ((0x100000 % 48000) * VAR_11->rate) / 48000;
 FUNC_3(VAR_14 & ~0xfffff);
 FUNC_6(VAR_9, VAR_10);
 FUNC_8(VAR_9, VAR_10);
 FUNC_1(VAR_9->playback_volume[VAR_10->reg_offset / 0x10][0],
      FUNC_0(VAR_10, VAR_3));
 FUNC_1(VAR_9->playback_volume[VAR_10->reg_offset / 0x10][1],
      FUNC_0(VAR_10, VAR_4));
 FUNC_2((VAR_11->format == VAR_5 ? VAR_6 : 0) |
      (VAR_11->channels > 1 ? VAR_7 : 0) |
      VAR_14 |
      0xff000000,
      FUNC_0(VAR_10, VAR_2));
 FUNC_9(20);
 FUNC_7(VAR_9, 0);
 return 0;
}
