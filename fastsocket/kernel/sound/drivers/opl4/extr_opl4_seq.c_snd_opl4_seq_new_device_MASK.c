
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_callback {struct snd_opl4* private_data; int private_free; int event_input; int unuse; int use; int owner; } ;
struct snd_seq_device {int dummy; } ;
struct snd_opl4 {int seq_client; TYPE_1__* chset; int seq_dev_num; int card; } ;
typedef int pcallbacks ;
struct TYPE_3__ {int client; int port; struct snd_opl4* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_seq_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct snd_seq_port_callback*,int ,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct snd_seq_port_callback*,int,int,int,int,char*) ;
 scalar_t__ FUNC_7 (struct snd_opl4*) ;

__attribute__((used)) static int FUNC_8(struct snd_seq_device *VAR_14)
{
 struct snd_opl4 *VAR_15;
 int VAR_16;
 struct snd_seq_port_callback VAR_17;

 VAR_15 = *(struct snd_opl4 **)FUNC_0(VAR_14);
 if (!VAR_15)
  return -VAR_0;

 if (FUNC_7(VAR_15) < 0)
  return -VAR_1;

 VAR_15->chset = FUNC_2(16);
 if (!VAR_15->chset)
  return -VAR_2;
 VAR_15->chset->private_data = VAR_15;


 VAR_16 = FUNC_4(VAR_15->card, VAR_15->seq_dev_num,
           "OPL4 Wavetable");
 if (VAR_16 < 0) {
  FUNC_3(VAR_15->chset);
  return VAR_16;
 }
 VAR_15->seq_client = VAR_16;
 VAR_15->chset->client = VAR_16;


 FUNC_1(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.owner = VAR_9;
 VAR_17.use = VAR_13;
 VAR_17.unuse = VAR_12;
 VAR_17.event_input = VAR_10;
 VAR_17.private_free = VAR_11;
 VAR_17.private_data = VAR_15;

 VAR_15->chset->port = FUNC_6(VAR_16, &VAR_17,
            VAR_4 |
            VAR_3,
            VAR_6 |
            VAR_7 |
            VAR_5 |
            VAR_8,
            16, 24,
            "OPL4 Wavetable Port");
 if (VAR_15->chset->port < 0) {
  int VAR_18 = VAR_15->chset->port;
  FUNC_3(VAR_15->chset);
  FUNC_5(VAR_16);
  VAR_15->seq_client = -1;
  return VAR_18;
 }
 return 0;
}
