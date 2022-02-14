
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
 int VAR_3 ;



 int FUNC_0 (struct seq_oss_devinfo*,int,int,int,int,int,struct snd_seq_event*) ;

__attribute__((used)) static int
FUNC_1(struct seq_oss_devinfo *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, struct snd_seq_event *VAR_9)
{
 struct seq_oss_synthinfo *VAR_10 = &VAR_4->synths[VAR_5];
 switch (VAR_10->arg.event_passing) {
 case 129:
  if (! VAR_10->ch || VAR_6 < 0 || VAR_6 >= VAR_10->nr_voices) {

   return FUNC_0(VAR_4, VAR_5, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
  }

  if (VAR_7 == 255 && VAR_10->ch[VAR_6].note >= 0) {

   int VAR_11;




    if (VAR_10->ch[VAR_6].vel)

    VAR_11 = VAR_1;
   else

    VAR_11 = VAR_3;
   VAR_10->ch[VAR_6].vel = VAR_8;
   return FUNC_0(VAR_4, VAR_5, VAR_11, VAR_6, VAR_10->ch[VAR_6].note, VAR_8, VAR_9);
  } else if (VAR_7 >= 128)
   return -VAR_0;

  if (VAR_7 != VAR_10->ch[VAR_6].note && VAR_10->ch[VAR_6].note >= 0)

   FUNC_0(VAR_4, VAR_5, VAR_2, VAR_6, VAR_10->ch[VAR_6].note, 0, VAR_9);

  VAR_10->ch[VAR_6].note = VAR_7;
  VAR_10->ch[VAR_6].vel = VAR_8;
  if (VAR_8)
   return FUNC_0(VAR_4, VAR_5, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
  return -VAR_0;

 case 130:

  return FUNC_0(VAR_4, VAR_5, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);

 case 128:
  if (VAR_7 >= 128)
   return FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6, VAR_7 - 128, VAR_8, VAR_9);
  else
   return FUNC_0(VAR_4, VAR_5, VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
 }
 return -VAR_0;
}
