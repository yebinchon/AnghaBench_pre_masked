
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int (* mmap ) (struct snd_hwdep*,struct file*,struct vm_area_struct*) ;} ;
struct snd_hwdep {TYPE_1__ ops; } ;
struct file {struct snd_hwdep* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_hwdep*,struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file * VAR_1, struct vm_area_struct * VAR_2)
{
 struct snd_hwdep *VAR_3 = VAR_1->private_data;
 if (VAR_3->ops.mmap)
  return VAR_3->ops.mmap(VAR_3, VAR_1, VAR_2);
 return -VAR_0;
}
