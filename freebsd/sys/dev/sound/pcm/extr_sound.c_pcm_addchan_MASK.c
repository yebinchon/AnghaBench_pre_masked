
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snddev_info {int dev; } ;
struct pcm_channel {int name; } ;
typedef TYPE_1__* kobj_class_t ;
typedef int device_t ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 struct snddev_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int,...) ;
 int FUNC_5 (struct snddev_info*,struct pcm_channel*) ;
 struct pcm_channel* FUNC_6 (struct snddev_info*,int *,TYPE_1__*,int,int,void*) ;
 int FUNC_7 (struct pcm_channel*) ;

int
FUNC_8(device_t VAR_1, int VAR_2, kobj_class_t VAR_3, void *VAR_4)
{
 struct snddev_info *VAR_5 = FUNC_3(VAR_1);
 struct pcm_channel *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);

 FUNC_1(VAR_5);
 VAR_6 = FUNC_6(VAR_5, ((void*)0), VAR_3, VAR_2, -1, VAR_4);
 if (!VAR_6) {
  FUNC_4(VAR_5->dev, "pcm_chn_create(%s, %d, %p) failed\n",
      VAR_3->name, VAR_2, VAR_4);
  FUNC_2(VAR_5);
  return (VAR_0);
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6);
 FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "pcm_chn_add(%s) failed, err=%d\n",
      VAR_6->name, VAR_7);
  FUNC_7(VAR_6);
 }

 return (VAR_7);
}
