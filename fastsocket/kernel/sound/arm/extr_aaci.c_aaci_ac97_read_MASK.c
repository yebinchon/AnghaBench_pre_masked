
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned short u32 ;
struct snd_ac97 {int num; struct aaci* private_data; } ;
struct aaci {int ac97_sem; TYPE_1__* dev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_0 (struct aaci*,struct snd_ac97*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned short,scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_9(struct snd_ac97 *VAR_7, unsigned short VAR_8)
{
 struct aaci *VAR_9 = VAR_7->private_data;
 u32 VAR_10;
 int VAR_11 = 5000;
 int VAR_12 = 10;

 if (VAR_7->num >= 4)
  return ~0;

 FUNC_4(&VAR_9->ac97_sem);

 FUNC_0(VAR_9, VAR_7);




 FUNC_8((VAR_8 << 12) | (1 << 19), VAR_9->base + VAR_1);




 do {
  VAR_10 = FUNC_6(VAR_9->base + VAR_3);
 } while ((VAR_10 & VAR_5) && --VAR_11);

 if (!VAR_11) {
  FUNC_2(&VAR_9->dev->dev, "timeout on slot 1 TX busy\n");
  VAR_10 = ~0;
  goto out;
 }





 FUNC_7(42);




 VAR_11 = 5000;
 do {
  FUNC_1();
  VAR_10 = FUNC_6(VAR_9->base + VAR_3) & (VAR_4|VAR_6);
 } while ((VAR_10 != (VAR_4|VAR_6)) && --VAR_11);

 if (!VAR_11) {
  FUNC_2(&VAR_9->dev->dev, "timeout on RX valid\n");
  VAR_10 = ~0;
  goto out;
 }

 do {
  VAR_10 = FUNC_6(VAR_9->base + VAR_0) >> 12;
  if (VAR_10 == VAR_8) {
   VAR_10 = FUNC_6(VAR_9->base + VAR_2) >> 4;
   break;
  } else if (--VAR_12) {
   FUNC_3(&VAR_9->dev->dev,
     "ac97 read back fail.  retry\n");
   continue;
  } else {
   FUNC_3(&VAR_9->dev->dev,
    "wrong ac97 register read back (%x != %x)\n",
    VAR_10, VAR_8);
   VAR_10 = ~0;
  }
 } while (VAR_12);
 out:
 FUNC_5(&VAR_9->ac97_sem);
 return VAR_10;
}
