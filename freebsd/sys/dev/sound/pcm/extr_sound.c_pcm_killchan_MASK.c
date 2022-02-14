
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snddev_info {int dummy; } ;
struct pcm_channel {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int pcm; } ;


 struct pcm_channel* FUNC_0 (struct snddev_info*,int ) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 TYPE_1__ VAR_0 ;
 struct snddev_info* FUNC_4 (int ) ;
 int FUNC_5 (struct pcm_channel*) ;
 int FUNC_6 (struct snddev_info*,struct pcm_channel*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct snddev_info *VAR_2 = FUNC_4(VAR_1);
 struct pcm_channel *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_0.pcm);

 FUNC_2(VAR_2);
 VAR_4 = FUNC_6(VAR_2, VAR_3);
 FUNC_3(VAR_2);
 if (VAR_4)
  return (VAR_4);
 return (FUNC_5(VAR_3));
}
