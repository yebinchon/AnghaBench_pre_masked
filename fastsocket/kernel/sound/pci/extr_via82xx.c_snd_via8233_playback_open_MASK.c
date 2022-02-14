
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viadev {int reg_offset; } ;
struct via82xx {size_t playback_devno; TYPE_2__** dxs_controls; int card; scalar_t__** playback_volume; struct viadev* devs; } ;
struct snd_pcm_substream {size_t number; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *) ;
 struct via82xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct via82xx*,struct viadev*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_1(VAR_3);
 struct viadev *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = &VAR_4->devs[VAR_4->playback_devno + VAR_3->number];
 if ((VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_3)) < 0)
  return VAR_7;
 VAR_6 = VAR_5->reg_offset / 0x10;
 if (VAR_4->dxs_controls[VAR_6]) {
  VAR_4->playback_volume[VAR_6][0] = 0;
  VAR_4->playback_volume[VAR_6][1] = 0;
  VAR_4->dxs_controls[VAR_6]->vd[0].access &=
   ~VAR_0;
  FUNC_0(VAR_4->card, VAR_2 |
          VAR_1,
          &VAR_4->dxs_controls[VAR_6]->id);
 }
 return 0;
}
