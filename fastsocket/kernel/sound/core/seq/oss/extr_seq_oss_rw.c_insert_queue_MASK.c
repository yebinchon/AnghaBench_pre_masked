
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union evrec {int dummy; } evrec ;
struct TYPE_6__ {int tick; } ;
struct snd_seq_event {TYPE_2__ time; int type; } ;
struct TYPE_5__ {int client; int port; } ;
struct seq_oss_devinfo {int cseq; int file_mode; TYPE_3__* timer; TYPE_1__ addr; } ;
struct file {int dummy; } ;
typedef int event ;
struct TYPE_7__ {int running; scalar_t__ realtime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct snd_seq_event*,int ,int) ;
 int FUNC_2 (int ,struct snd_seq_event*,int ,int ) ;
 int FUNC_3 (int ,struct snd_seq_event*,struct file*,int ,int ) ;
 int FUNC_4 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;
 int FUNC_5 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;
 scalar_t__ FUNC_6 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,union evrec*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(struct seq_oss_devinfo *VAR_1, union evrec *VAR_2, struct file *VAR_3)
{
 int VAR_4 = 0;
 struct snd_seq_event VAR_5;


 if (FUNC_7(VAR_1->timer, VAR_2))
  return 0;


 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.type = VAR_0;
 FUNC_5(VAR_1, &VAR_5, VAR_1->addr.port, VAR_1->addr.client);

 if (FUNC_6(VAR_1, VAR_2, &VAR_5))
  return 0;

 VAR_5.time.tick = FUNC_8(VAR_1->timer);
 if (VAR_1->timer->realtime || !VAR_1->timer->running) {
  FUNC_4(VAR_1, &VAR_5, 0, 0);
 } else {
  if (FUNC_0(VAR_1->file_mode))
   VAR_4 = FUNC_2(VAR_1->cseq, &VAR_5, 0, 0);
  else
   VAR_4 = FUNC_3(VAR_1->cseq, &VAR_5, VAR_3, 0, 0);
 }
 return VAR_4;
}
