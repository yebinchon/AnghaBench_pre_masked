
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct snd_kcontrol {void* private_value; TYPE_2__ id; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_3__ {int card; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int,int ) ;
 struct snd_kcontrol* FUNC_1 (int *,struct snd_ac97*) ;
 int * VAR_1 ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 * VAR_2)
{
 struct snd_kcontrol *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_2->bus->card, VAR_3 = FUNC_1(&VAR_1[0], VAR_2))) < 0)
  return VAR_4;
 FUNC_4(VAR_3->id.name, "3D Control Sigmatel - Depth");
 VAR_3->private_value = FUNC_0(VAR_0, 0, 3, 0);
 if ((VAR_4 = FUNC_3(VAR_2->bus->card, VAR_3 = FUNC_1(&VAR_1[0], VAR_2))) < 0)
  return VAR_4;
 FUNC_4(VAR_3->id.name, "3D Control Sigmatel - Rear Depth");
 VAR_3->private_value = FUNC_0(VAR_0, 2, 3, 0);
 FUNC_2(VAR_2, VAR_0, 0x0000);
 return 0;
}
