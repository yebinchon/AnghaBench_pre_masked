
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_remove_events {int remove_mode; } ;
struct seq_oss_writeq {int dp; } ;
typedef int reset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_remove_events*,int ,int) ;
 int FUNC_1 (int ,int ,struct snd_seq_remove_events*) ;
 int FUNC_2 (struct seq_oss_writeq*,int ) ;

void
FUNC_3(struct seq_oss_writeq *VAR_2)
{
 struct snd_seq_remove_events VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.remove_mode = VAR_1;
 FUNC_1(VAR_2->dp, VAR_0, &VAR_3);


 FUNC_2(VAR_2, 0);
}
