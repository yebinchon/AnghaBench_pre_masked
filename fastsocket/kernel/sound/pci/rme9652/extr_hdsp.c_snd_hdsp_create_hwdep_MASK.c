
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioctl; } ;
struct snd_hwdep {TYPE_1__ ops; int name; struct hdsp* private_data; } ;
struct snd_card {int dummy; } ;
struct hdsp {struct snd_hwdep* hwdep; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,char*,int ,struct snd_hwdep**) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_1, struct hdsp *VAR_2)
{
 struct snd_hwdep *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1, "HDSP hwdep", 0, &VAR_3)) < 0)
  return VAR_4;

 VAR_2->hwdep = VAR_3;
 VAR_3->private_data = VAR_2;
 FUNC_1(VAR_3->name, "HDSP hwdep interface");

 VAR_3->ops.ioctl = VAR_0;

 return 0;
}
