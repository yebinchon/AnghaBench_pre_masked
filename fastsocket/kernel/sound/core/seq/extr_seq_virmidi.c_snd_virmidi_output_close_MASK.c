
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi {int parser; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_virmidi* private_data; } ;


 int FUNC_0 (struct snd_virmidi*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_virmidi *VAR_1 = VAR_0->runtime->private_data;
 FUNC_1(VAR_1->parser);
 VAR_0->runtime->private_data = ((void*)0);
 FUNC_0(VAR_1);
 return 0;
}
