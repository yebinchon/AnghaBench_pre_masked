
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int running; } ;
struct via82xx {scalar_t__ chip_type; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int FUNC_0 (struct viadev*,int ) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_1 (unsigned char,int ) ;
 struct via82xx* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct via82xx*,struct viadev*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7, int VAR_8)
{
 struct via82xx *VAR_9 = FUNC_2(VAR_7);
 struct viadev *VAR_10 = VAR_7->runtime->private_data;
 unsigned char VAR_11;

 if (VAR_9->chip_type != VAR_2)
  VAR_11 = VAR_3;
 else
  VAR_11 = 0;
 switch (VAR_8) {
 case 130:
 case 131:
  VAR_11 |= VAR_5;
  VAR_10->running = 1;
  break;
 case 129:
 case 128:
  VAR_11 = VAR_6;
  VAR_10->running = 0;
  break;
 case 133:
  VAR_11 |= VAR_4;
  VAR_10->running = 0;
  break;
 case 132:
  VAR_10->running = 1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_11, FUNC_0(VAR_10, VAR_1));
 if (VAR_8 == 129)
  FUNC_3(VAR_9, VAR_10);
 return 0;
}
