
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct mtpav_port {int * input; int mode; } ;
struct mtpav {scalar_t__ share_irq; int spinlock; struct mtpav_port* ports; } ;
struct TYPE_2__ {struct mtpav* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtpav*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_2)
{
 struct mtpav *VAR_3 = VAR_2->rmidi->private_data;
 struct mtpav_port *VAR_4 = &VAR_3->ports[VAR_2->number];
 unsigned long VAR_5;

 FUNC_1(&VAR_3->spinlock, VAR_5);
 VAR_4->mode &= ~VAR_1;
 VAR_4->input = ((void*)0);
 if (--VAR_3->share_irq == 0)
  FUNC_0(VAR_3, VAR_0, 0);
 FUNC_2(&VAR_3->spinlock, VAR_5);
 return 0;
}
