
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int dummy; } ;
struct pcm_channel {int methods; int name; int dev; struct snddev_info* parentsnddev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct pcm_channel*,int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct pcm_channel *VAR_1)
{
 struct snddev_info *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->parentsnddev;
 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "chn_kill(%s) failed, err = %d\n",
      VAR_1->name, VAR_3);
  return (VAR_3);
 }

 FUNC_4(VAR_1->methods, VAR_0);
 FUNC_3(VAR_1, VAR_0);

 return (0);
}
