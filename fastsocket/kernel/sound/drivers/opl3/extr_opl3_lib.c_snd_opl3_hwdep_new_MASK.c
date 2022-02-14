
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_opl3 {int hardware; int seq_dev_num; TYPE_2__* seq_dev; struct snd_hwdep* hwdep; struct snd_card* card; } ;
struct TYPE_4__ {int release; int write; int ioctl; int open; } ;
struct snd_hwdep {int exclusive; char* name; char* id; TYPE_1__ ops; int iface; int oss_dev; int oss_type; struct snd_opl3* private_data; } ;
struct snd_card {int number; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (struct snd_card*,struct snd_opl3*) ;
 int FUNC_2 (struct snd_card*,char*,int,struct snd_hwdep**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct snd_card*,int,int ,int,TYPE_2__**) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(struct snd_opl3 * VAR_10,
         int VAR_11, int VAR_12,
         struct snd_hwdep ** VAR_13)
{
 struct snd_hwdep *VAR_14;
 struct snd_card *VAR_15 = VAR_10->card;
 int VAR_16;

 if (VAR_13)
  *VAR_13 = ((void*)0);



 if ((VAR_16 = FUNC_2(VAR_15, "OPL2/OPL3", VAR_11, &VAR_14)) < 0) {
  FUNC_1(VAR_15, VAR_10);
  return VAR_16;
 }
 VAR_14->private_data = VAR_10;
 VAR_14->exclusive = 1;






 FUNC_5(VAR_14->name, VAR_14->id);
 switch (VAR_10->hardware & VAR_0) {
 case 130:
  FUNC_5(VAR_14->name, "OPL2 FM");
  VAR_14->iface = VAR_1;
  break;
 case 129:
  FUNC_5(VAR_14->name, "OPL3 FM");
  VAR_14->iface = VAR_2;
  break;
 case 128:
  FUNC_5(VAR_14->name, "OPL4 FM");
  VAR_14->iface = VAR_3;
  break;
 }


 VAR_14->ops.open = VAR_7;
 VAR_14->ops.ioctl = VAR_6;
 VAR_14->ops.write = VAR_9;
 VAR_14->ops.release = VAR_8;

 VAR_10->hwdep = VAR_14;
 VAR_10->seq_dev_num = VAR_12;







 if (VAR_13)
  *VAR_13 = VAR_14;
 return 0;
}
