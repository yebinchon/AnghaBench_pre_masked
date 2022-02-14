
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_client_pool {int output_room; int client; } ;
struct seq_oss_writeq {TYPE_1__* dp; } ;
struct TYPE_2__ {int cseq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,struct snd_seq_client_pool*) ;

void
FUNC_1(struct seq_oss_writeq *VAR_2, int VAR_3)
{
 struct snd_seq_client_pool VAR_4;
 VAR_4.client = VAR_2->dp->cseq;
 FUNC_0(VAR_2->dp, VAR_0, &VAR_4);
 VAR_4.output_room = VAR_3;
 FUNC_0(VAR_2->dp, VAR_1, &VAR_4);
}
