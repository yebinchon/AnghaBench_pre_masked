
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_oss_reg {struct snd_opl3* private_data; int oper; int nvoices; int subtype; int type; } ;
struct snd_seq_device {int name; } ;
struct snd_opl3 {scalar_t__ hardware; int card; struct snd_seq_device* oss_seq_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct snd_seq_oss_reg* FUNC_0 (struct snd_seq_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,struct snd_seq_device*) ;
 scalar_t__ FUNC_2 (struct snd_opl3*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,struct snd_seq_device**) ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(struct snd_opl3 *VAR_8, char *VAR_9)
{
 struct snd_seq_oss_reg *VAR_10;
 struct snd_seq_device *VAR_11;

 if (FUNC_3(VAR_8->card, 0, VAR_5,
          sizeof(struct snd_seq_oss_reg), &VAR_11) < 0)
  return;

 VAR_8->oss_seq_dev = VAR_11;
 FUNC_4(VAR_11->name, VAR_9, sizeof(VAR_11->name));
 VAR_10 = FUNC_0(VAR_11);
 VAR_10->type = VAR_6;
 if (VAR_8->hardware < VAR_4) {
  VAR_10->subtype = VAR_0;
  VAR_10->nvoices = VAR_2;
 } else {
  VAR_10->subtype = VAR_1;
  VAR_10->nvoices = VAR_3;
 }
 VAR_10->oper = VAR_7;
 VAR_10->private_data = VAR_8;

 if (FUNC_2(VAR_8)) {

  FUNC_1(VAR_8->card, VAR_11);
 }
}
