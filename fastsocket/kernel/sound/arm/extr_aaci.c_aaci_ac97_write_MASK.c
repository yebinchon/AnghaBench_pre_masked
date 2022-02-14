
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int num; struct aaci* private_data; } ;
struct aaci {int ac97_sem; TYPE_1__* dev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aaci*,struct snd_ac97*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct snd_ac97 *VAR_5, unsigned short VAR_6,
       unsigned short VAR_7)
{
 struct aaci *VAR_8 = VAR_5->private_data;
 u32 VAR_9;
 int VAR_10 = 5000;

 if (VAR_5->num >= 4)
  return;

 FUNC_2(&VAR_8->ac97_sem);

 FUNC_0(VAR_8, VAR_5);





 FUNC_5(VAR_7 << 4, VAR_8->base + VAR_1);
 FUNC_5(VAR_6 << 12, VAR_8->base + VAR_0);




 do {
  VAR_9 = FUNC_4(VAR_8->base + VAR_2);
 } while ((VAR_9 & (VAR_3|VAR_4)) && --VAR_10);

 if (!VAR_10)
  FUNC_1(&VAR_8->dev->dev,
   "timeout waiting for write to complete\n");

 FUNC_3(&VAR_8->ac97_sem);
}
