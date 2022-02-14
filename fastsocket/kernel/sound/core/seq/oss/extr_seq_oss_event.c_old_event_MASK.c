
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int note; int chn; int vel; } ;
struct TYPE_3__ {int code; } ;
union evrec {TYPE_2__ n; TYPE_1__ s; } ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int timer; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct seq_oss_devinfo*,int ,int ,int ,int ,struct snd_seq_event*) ;
 int FUNC_1 (struct seq_oss_devinfo*,int ,int ,int ,int ,struct snd_seq_event*) ;
 int FUNC_2 (struct seq_oss_devinfo*,int ,int ,int ,int ,int ,struct snd_seq_event*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct seq_oss_devinfo *VAR_2, union evrec *VAR_3, struct snd_seq_event *VAR_4)
{
 switch (VAR_3->s.code) {
 case 132:
  return FUNC_0(VAR_2, 0, VAR_3->n.chn, VAR_3->n.note, VAR_3->n.vel, VAR_4);

 case 131:
  return FUNC_1(VAR_2, 0, VAR_3->n.chn, VAR_3->n.note, VAR_3->n.vel, VAR_4);

 case 128:

  break;

 case 130:
  return FUNC_2(VAR_2, 0, VAR_1,
      VAR_3->n.chn, 0, VAR_3->n.note, VAR_4);

 case 129:
  return FUNC_3(VAR_2->timer);
 }

 return -VAR_0;
}
