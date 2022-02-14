
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_callback {struct snd_opl3* private_data; int private_free; int event_input; int owner; } ;
struct snd_opl3 {int hardware; TYPE_1__* oss_chset; int seq_client; } ;
typedef int callbacks ;
struct TYPE_3__ {int port; int client; struct snd_opl3* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_seq_port_callback*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,struct snd_seq_port_callback*,int ,int,int,int,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_opl3 * VAR_13)
{
 struct snd_seq_port_callback VAR_14;
 char VAR_15[32];
 int VAR_16, VAR_17;

 VAR_16 = (VAR_13->hardware < VAR_4) ?
  VAR_1 : VAR_2;
 VAR_13->oss_chset = FUNC_1(VAR_16);
 if (VAR_13->oss_chset == ((void*)0))
  return -VAR_0;
 VAR_13->oss_chset->private_data = VAR_13;

 FUNC_0(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.owner = VAR_10;
 VAR_14.event_input = VAR_11;
 VAR_14.private_free = VAR_12;
 VAR_14.private_data = VAR_13;

 VAR_17 = (VAR_13->hardware & VAR_3) >> 8;
 FUNC_4(VAR_15, "OPL%i OSS Port", VAR_17);

 VAR_13->oss_chset->client = VAR_13->seq_client;
 VAR_13->oss_chset->port = FUNC_3(VAR_13->seq_client, &VAR_14,
         VAR_5,
         VAR_7 |
         VAR_8 |
         VAR_6 |
         VAR_9,
         VAR_16, VAR_16,
         VAR_15);
 if (VAR_13->oss_chset->port < 0) {
  int VAR_18;
  VAR_18 = VAR_13->oss_chset->port;
  FUNC_2(VAR_13->oss_chset);
  return VAR_18;
 }
 return 0;
}
