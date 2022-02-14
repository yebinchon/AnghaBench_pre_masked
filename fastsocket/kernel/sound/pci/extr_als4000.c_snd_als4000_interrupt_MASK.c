
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int alt_port; int mpu_port; int mixer_lock; TYPE_1__* rmidi; scalar_t__ capture_substream; scalar_t__ playback_substream; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct snd_sb*) ;
 int FUNC_7 (struct snd_sb*) ;
 unsigned int FUNC_8 (struct snd_sb*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_10, void *VAR_11)
{
 struct snd_sb *VAR_12 = VAR_11;
 unsigned VAR_13;
 unsigned VAR_14;



 VAR_13 = FUNC_2(VAR_12->alt_port,
     VAR_1);
 if ((VAR_13 & VAR_3)
  && (VAR_12->playback_substream))
  FUNC_5(VAR_12->playback_substream);
 if ((VAR_13 & VAR_0)
  && (VAR_12->capture_substream))
  FUNC_5(VAR_12->capture_substream);
 if ((VAR_13 & VAR_2)
  && (VAR_12->rmidi))
  FUNC_4(VAR_10, VAR_12->rmidi->private_data);

 FUNC_3(VAR_12->alt_port,
    VAR_1, VAR_13);

 FUNC_9(&VAR_12->mixer_lock);

 VAR_14 = FUNC_8(VAR_12, VAR_6);
 FUNC_10(&VAR_12->mixer_lock);

 if (VAR_14 & VAR_8)
  FUNC_7(VAR_12);
 if (VAR_14 & VAR_7)
  FUNC_6(VAR_12);
 if (VAR_14 & VAR_9)
  FUNC_1(VAR_12->mpu_port);
 if (VAR_14 & VAR_5)
  FUNC_2(VAR_12->alt_port,
     VAR_4);





 return FUNC_0(
      (VAR_13 & (VAR_3|VAR_0|
    VAR_2))
   || (VAR_14 & (VAR_8|VAR_7|
    VAR_9|VAR_5))
 );
}
