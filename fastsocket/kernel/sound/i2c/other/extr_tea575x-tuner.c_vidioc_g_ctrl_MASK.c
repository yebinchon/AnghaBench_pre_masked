
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct snd_tea575x {int mute; TYPE_1__* ops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mute; } ;


 int VAR_0 ;

 struct snd_tea575x* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_control *VAR_3)
{
 struct snd_tea575x *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3->id) {
 case 128:
  if (VAR_4->ops->mute) {
   VAR_3->value = VAR_4->mute;
   return 0;
  }
 }
 return -VAR_0;
}
