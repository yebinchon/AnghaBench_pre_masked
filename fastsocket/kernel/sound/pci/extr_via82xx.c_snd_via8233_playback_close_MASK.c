
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct viadev {int reg_offset; } ;
struct via82xx {TYPE_3__** dxs_controls; int card; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_6__ {int id; TYPE_1__* vd; } ;
struct TYPE_5__ {struct viadev* private_data; } ;
struct TYPE_4__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 struct via82xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct via82xx *VAR_3 = FUNC_1(VAR_2);
 struct viadev *VAR_4 = VAR_2->runtime->private_data;
 unsigned int VAR_5;

 VAR_5 = VAR_4->reg_offset / 0x10;
 if (VAR_3->dxs_controls[VAR_5]) {
  VAR_3->dxs_controls[VAR_5]->vd[0].access |=
   VAR_0;
  FUNC_0(VAR_3->card, VAR_1,
          &VAR_3->dxs_controls[VAR_5]->id);
 }
 return FUNC_2(VAR_2);
}
