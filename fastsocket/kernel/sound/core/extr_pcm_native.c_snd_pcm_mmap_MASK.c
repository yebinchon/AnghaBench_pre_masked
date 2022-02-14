
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_file {int no_compat_mmap; struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;


 int FUNC_1 (struct snd_pcm_substream*,struct file*,struct vm_area_struct*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct file*,struct vm_area_struct*) ;
 int FUNC_3 (struct snd_pcm_substream*,struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct snd_pcm_file * VAR_4;
 struct snd_pcm_substream *VAR_5;
 unsigned long VAR_6;

 VAR_4 = VAR_2->private_data;
 VAR_5 = VAR_4->substream;
 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_6 = VAR_3->vm_pgoff << VAR_1;
 switch (VAR_6) {
 case 128:
  if (VAR_4->no_compat_mmap)
   return -VAR_0;
  return FUNC_3(VAR_5, VAR_2, VAR_3);
 case 129:
  if (VAR_4->no_compat_mmap)
   return -VAR_0;
  return FUNC_1(VAR_5, VAR_2, VAR_3);
 default:
  return FUNC_2(VAR_5, VAR_2, VAR_3);
 }
 return 0;
}
