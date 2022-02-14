
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_event {int dummy; } ;
struct TYPE_3__ {int event_passing; } ;
struct seq_oss_synthinfo {int nr_voices; TYPE_2__* ch; TYPE_1__ arg; } ;
struct seq_oss_devinfo {struct seq_oss_synthinfo* synths; } ;
struct TYPE_4__ {int note; int vel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct seq_oss_devinfo*,int,int ,int,int,int,struct snd_seq_event*) ;

__attribute__((used)) static int
FUNC_1(struct seq_oss_devinfo *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, struct snd_seq_event *VAR_8)
{
 struct seq_oss_synthinfo *VAR_9 = &VAR_3->synths[VAR_4];
 switch (VAR_9->arg.event_passing) {
 case 129:
  if (! VAR_9->ch || VAR_5 < 0 || VAR_5 >= VAR_9->nr_voices) {

   return FUNC_0(VAR_3, VAR_4, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8);
  }

  if (VAR_9->ch[VAR_5].note >= 0) {
   VAR_6 = VAR_9->ch[VAR_5].note;
   VAR_9->ch[VAR_5].vel = 0;
   VAR_9->ch[VAR_5].note = -1;
   return FUNC_0(VAR_3, VAR_4, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
  }
  return -VAR_0;

 case 130:
 case 128:

  return FUNC_0(VAR_3, VAR_4, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);

 }
 return -VAR_0;
}
