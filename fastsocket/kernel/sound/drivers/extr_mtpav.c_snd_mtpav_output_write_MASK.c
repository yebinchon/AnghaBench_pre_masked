
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct mtpav_port {int dummy; } ;
struct mtpav {int spinlock; struct mtpav_port* ports; } ;
struct TYPE_2__ {struct mtpav* private_data; } ;


 int FUNC_0 (struct mtpav*,struct mtpav_port*,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0)
{
 struct mtpav *VAR_1 = VAR_0->rmidi->private_data;
 struct mtpav_port *VAR_2 = &VAR_1->ports[VAR_0->number];
 unsigned long VAR_3;

 FUNC_1(&VAR_1->spinlock, VAR_3);
 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_2(&VAR_1->spinlock, VAR_3);
}
