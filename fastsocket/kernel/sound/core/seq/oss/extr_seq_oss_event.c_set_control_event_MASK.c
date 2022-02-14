
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int param; int value; } ;
struct TYPE_3__ {TYPE_2__ control; } ;
struct snd_seq_event {int type; TYPE_1__ data; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_oss_devinfo*,int,struct snd_seq_event*) ;
 int FUNC_1 (struct seq_oss_devinfo*,int) ;

__attribute__((used)) static int
FUNC_2(struct seq_oss_devinfo *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, struct snd_seq_event *VAR_7)
{
 if (! FUNC_1(VAR_1, VAR_2))
  return -VAR_0;

 VAR_7->type = VAR_3;
 FUNC_0(VAR_1, VAR_2, VAR_7);
 VAR_7->data.control.channel = VAR_4;
 VAR_7->data.control.param = VAR_5;
 VAR_7->data.control.value = VAR_6;

 return 0;
}
