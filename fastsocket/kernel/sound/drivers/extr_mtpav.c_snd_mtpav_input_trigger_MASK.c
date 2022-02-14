
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct mtpav_port {int mode; } ;
struct mtpav {int spinlock; struct mtpav_port* ports; } ;
struct TYPE_2__ {struct mtpav* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct mtpav *VAR_3 = VAR_1->rmidi->private_data;
 struct mtpav_port *VAR_4 = &VAR_3->ports[VAR_1->number];
 unsigned long VAR_5;

 FUNC_0(&VAR_3->spinlock, VAR_5);
 if (VAR_2)
  VAR_4->mode |= VAR_0;
 else
  VAR_4->mode &= ~VAR_0;
 FUNC_1(&VAR_3->spinlock, VAR_5);

}
