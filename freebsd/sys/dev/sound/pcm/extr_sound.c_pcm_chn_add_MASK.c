
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snddev_info {int devcount; int rvchancount; int reccount; int pvchancount; int playcount; } ;
struct pcm_channel {scalar_t__ direction; } ;
struct TYPE_2__ {int pcm; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct snddev_info*,struct pcm_channel*,int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct snddev_info*) ;
 int FUNC_4 (struct snddev_info*) ;




 TYPE_1__ VAR_2 ;

int
FUNC_5(struct snddev_info *VAR_3, struct pcm_channel *VAR_4)
{
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(VAR_4 != ((void*)0) && (VAR_4->direction == VAR_0 ||
     VAR_4->direction == VAR_1), ("Invalid pcm channel"));

 FUNC_1(VAR_3, VAR_4, VAR_2.pcm);

 switch (FUNC_0(VAR_4)) {
 case 131:
  VAR_3->playcount++;
  break;
 case 129:
  VAR_3->pvchancount++;
  break;
 case 130:
  VAR_3->reccount++;
  break;
 case 128:
  VAR_3->rvchancount++;
  break;
 default:
  break;
 }

 VAR_3->devcount++;

 return (0);
}
