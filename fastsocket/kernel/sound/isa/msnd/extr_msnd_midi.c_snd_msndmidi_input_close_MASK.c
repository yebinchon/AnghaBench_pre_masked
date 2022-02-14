
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_msndmidi {int dev; int * substream_input; int mode; } ;
struct TYPE_2__ {struct snd_msndmidi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_2)
{
 struct snd_msndmidi *VAR_3;

 VAR_3 = VAR_2->rmidi->private_data;
 FUNC_2(VAR_3->dev, VAR_0);
 FUNC_0(VAR_1, &VAR_3->mode);
 VAR_3->substream_input = ((void*)0);
 FUNC_1(VAR_3->dev);
 return 0;
}
