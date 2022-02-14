
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_substream*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_1)
{
 FUNC_1(VAR_1->rmidi->private_data);
 FUNC_0(VAR_1, VAR_0, 1);
 return 0;
}
