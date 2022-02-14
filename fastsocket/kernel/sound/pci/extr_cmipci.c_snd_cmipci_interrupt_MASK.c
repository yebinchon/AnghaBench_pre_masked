
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmipci {TYPE_2__* channel; scalar_t__ pcm; TYPE_1__* rmidi; int reg_lock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int substream; scalar_t__ running; } ;
struct TYPE_3__ {int private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cmipci*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct cmipci*,int ) ;
 int FUNC_2 (struct cmipci*,int ,unsigned int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 struct cmipci *VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14 = 0;


 VAR_13 = FUNC_1(VAR_12, VAR_6);
 if (!(VAR_13 & VAR_4))
  return VAR_9;


 FUNC_5(&VAR_12->reg_lock);
 if (VAR_13 & VAR_2)
  VAR_14 |= VAR_0;
 if (VAR_13 & VAR_3)
  VAR_14 |= VAR_1;
 FUNC_0(VAR_12, VAR_5, VAR_14);
 FUNC_2(VAR_12, VAR_5, VAR_14);
 FUNC_6(&VAR_12->reg_lock);

 if (VAR_12->rmidi && (VAR_13 & VAR_7))
  FUNC_3(VAR_10, VAR_12->rmidi->private_data);

 if (VAR_12->pcm) {
  if ((VAR_13 & VAR_2) && VAR_12->channel[0].running)
   FUNC_4(VAR_12->channel[0].substream);
  if ((VAR_13 & VAR_3) && VAR_12->channel[1].running)
   FUNC_4(VAR_12->channel[1].substream);
 }
 return VAR_8;
}
