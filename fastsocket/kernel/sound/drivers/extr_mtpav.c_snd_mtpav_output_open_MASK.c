
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct mtpav_port {struct snd_rawmidi_substream* output; int mode; } ;
struct mtpav {int spinlock; struct mtpav_port* ports; } ;
struct TYPE_2__ {struct mtpav* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_1)
{
 struct mtpav *VAR_2 = VAR_1->rmidi->private_data;
 struct mtpav_port *VAR_3 = &VAR_2->ports[VAR_1->number];
 unsigned long VAR_4;

 FUNC_0(&VAR_2->spinlock, VAR_4);
 VAR_3->mode |= VAR_0;
 VAR_3->output = VAR_1;
 FUNC_1(&VAR_2->spinlock, VAR_4);
 return 0;
}
