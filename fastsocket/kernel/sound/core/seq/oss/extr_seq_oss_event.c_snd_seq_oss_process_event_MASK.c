
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int code; int parm1; int dev; } ;
struct TYPE_3__ {int buf; int dev; } ;
union evrec {int * c; TYPE_2__ s; TYPE_1__ x; } ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int seq_mode; int file_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_1 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_2 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_5 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_6 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_7 (struct seq_oss_devinfo*,int ) ;
 int FUNC_8 (struct seq_oss_devinfo*,int ,int) ;
 int FUNC_9 (struct seq_oss_devinfo*,int ,int ,struct snd_seq_event*) ;
 int FUNC_10 (struct seq_oss_devinfo*,int ,int *,struct snd_seq_event*) ;
 int FUNC_11 (struct seq_oss_devinfo*,int ,int ,struct snd_seq_event*) ;
 int FUNC_12 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;

int
FUNC_13(struct seq_oss_devinfo *VAR_3, union evrec *VAR_4, struct snd_seq_event *VAR_5)
{
 switch (VAR_4->s.code) {
 case 130:
  return FUNC_2(VAR_3, VAR_4, VAR_5);

 case 135:
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 case 136:
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 case 132:
  return FUNC_12(VAR_3, VAR_4, VAR_5);

 case 134:
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 case 133:
  return FUNC_11(VAR_3, VAR_4->x.dev, VAR_4->x.buf, VAR_5);

 case 129:
  if (VAR_3->seq_mode == VAR_2)
   return -VAR_0;

  if (! FUNC_3(VAR_3->file_mode))
   break;
  if (FUNC_8(VAR_3, VAR_4->s.dev, VAR_1))
   break;
  if (FUNC_7(VAR_3, VAR_4->s.dev) & VAR_1)
   return FUNC_9(VAR_3, VAR_4->s.dev, VAR_4->s.parm1, VAR_5);
  break;

 case 131:
  if (VAR_3->seq_mode == VAR_2)
   return -VAR_0;
  return FUNC_6(VAR_3, VAR_4, VAR_5);

 case 128:
  if (VAR_3->seq_mode == VAR_2)
   return -VAR_0;
  return FUNC_10(VAR_3, VAR_4->c[1], VAR_4->c, VAR_5);

 default:
  if (VAR_3->seq_mode == VAR_2)
   return -VAR_0;
  return FUNC_5(VAR_3, VAR_4, VAR_5);
 }
 return -VAR_0;
}
