
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client_pool {int output_pool; int output_room; int client; } ;
struct seq_oss_writeq {int maxlen; int sync_sleep; scalar_t__ sync_time; scalar_t__ sync_event_put; int sync_lock; struct seq_oss_devinfo* dp; } ;
struct seq_oss_devinfo {int cseq; } ;
typedef int pool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct seq_oss_writeq* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_seq_client_pool*,int ,int) ;
 int FUNC_3 (struct seq_oss_devinfo*,int ,struct snd_seq_client_pool*) ;
 int FUNC_4 (int *) ;

struct seq_oss_writeq *
FUNC_5(struct seq_oss_devinfo *VAR_2, int VAR_3)
{
 struct seq_oss_writeq *VAR_4;
 struct snd_seq_client_pool VAR_5;

 if ((VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0)) == ((void*)0))
  return ((void*)0);
 VAR_4->dp = VAR_2;
 VAR_4->maxlen = VAR_3;
 FUNC_4(&VAR_4->sync_lock);
 VAR_4->sync_event_put = 0;
 VAR_4->sync_time = 0;
 FUNC_0(&VAR_4->sync_sleep);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.client = VAR_2->cseq;
 VAR_5.output_pool = VAR_3;
 VAR_5.output_room = VAR_3 / 2;

 FUNC_3(VAR_2, VAR_1, &VAR_5);

 return VAR_4;
}
