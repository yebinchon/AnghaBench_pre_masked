
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chn; int cmd; int val; int dev; int p1; } ;
union evrec {TYPE_1__ l; } ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct seq_oss_devinfo*,int ,int ,int,int ,int ,struct snd_seq_event*) ;

__attribute__((used)) static int
FUNC_1(struct seq_oss_devinfo *VAR_5, union evrec *VAR_6, struct snd_seq_event *VAR_7)
{
 if (VAR_6->l.chn >= 32)
  return -VAR_0;
 switch (VAR_6->l.cmd) {
 case 129:
  return FUNC_0(VAR_5, VAR_6->l.dev, VAR_3,
       VAR_6->l.chn, 0, VAR_6->l.p1, VAR_7);

 case 130:
  return FUNC_0(VAR_5, VAR_6->l.dev, VAR_2,
       VAR_6->l.chn, VAR_6->l.p1, VAR_6->l.val, VAR_7);

 case 128:

  return FUNC_0(VAR_5, VAR_6->l.dev, VAR_4,
       VAR_6->l.chn, 0, VAR_6->l.val - 8192, VAR_7);

 case 131:
  return FUNC_0(VAR_5, VAR_6->l.dev, VAR_1,
       VAR_6->l.chn, 0, VAR_6->l.val, VAR_7);
 }
 return -VAR_0;
}
