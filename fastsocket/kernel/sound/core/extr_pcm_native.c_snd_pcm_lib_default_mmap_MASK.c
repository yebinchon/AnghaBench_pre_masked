
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct snd_pcm_substream* vm_private_data; int * vm_ops; } ;
struct snd_pcm_substream {int mmap_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

int FUNC_1(struct snd_pcm_substream *VAR_2,
        struct vm_area_struct *VAR_3)
{
 VAR_3->vm_ops = &VAR_1;
 VAR_3->vm_private_data = VAR_2;
 VAR_3->vm_flags |= VAR_0;
 FUNC_0(&VAR_2->mmap_count);
 return 0;
}
