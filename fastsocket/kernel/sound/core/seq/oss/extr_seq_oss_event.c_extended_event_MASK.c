
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int p1; int dev; int chn; scalar_t__ p2; scalar_t__ p3; } ;
union evrec {int c; TYPE_1__ e; } ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct seq_oss_devinfo*,int ,int ,int,scalar_t__,struct snd_seq_event*) ;
 int FUNC_1 (struct seq_oss_devinfo*,int ,int ,int,scalar_t__,struct snd_seq_event*) ;
 int FUNC_2 (struct seq_oss_devinfo*,int ,int ,int ,int,int,struct snd_seq_event*) ;
 int FUNC_3 (struct seq_oss_devinfo*,int ,int ,struct snd_seq_event*) ;

__attribute__((used)) static int
FUNC_4(struct seq_oss_devinfo *VAR_8, union evrec *VAR_9, struct snd_seq_event *VAR_10)
{
 int VAR_11;

 switch (VAR_9->e.cmd) {
 case 131:
  return FUNC_0(VAR_8, VAR_9->e.dev, VAR_9->e.chn, VAR_9->e.p1, VAR_9->e.p2, VAR_10);

 case 130:
  return FUNC_1(VAR_8, VAR_9->e.dev, VAR_9->e.chn, VAR_9->e.p1, VAR_9->e.p2, VAR_10);

 case 129:
  return FUNC_2(VAR_8, VAR_9->e.dev, VAR_5,
      VAR_9->e.chn, 0, VAR_9->e.p1, VAR_10);

 case 134:
  return FUNC_2(VAR_8, VAR_9->e.dev, VAR_2,
      VAR_9->e.chn, 0, VAR_9->e.p1, VAR_10);

 case 133:

  VAR_11 = (char)VAR_9->e.p1;
  VAR_11 = (VAR_11 + 128) / 2;
  return FUNC_2(VAR_8, VAR_9->e.dev, VAR_4,
      VAR_9->e.chn, VAR_0, VAR_11, VAR_10);

 case 132:
  VAR_11 = ((short)VAR_9->e.p3 << 8) | (short)VAR_9->e.p2;
  switch (VAR_9->e.p1) {
  case 136:

   return FUNC_2(VAR_8, VAR_9->e.dev,
       VAR_6,
       VAR_9->e.chn, 0, VAR_11, VAR_10);
  case 135:

   return FUNC_2(VAR_8, VAR_9->e.dev,
       VAR_7,
       VAR_9->e.chn, 0, VAR_11*128/100, VAR_10);
  default:
   return FUNC_2(VAR_8, VAR_9->e.dev,
        VAR_3,
        VAR_9->e.chn, VAR_9->e.p1, VAR_11, VAR_10);
  }

 case 128:
  return FUNC_3(VAR_8, VAR_9->e.dev, VAR_9->c, VAR_10);

 }
 return -VAR_1;
}
