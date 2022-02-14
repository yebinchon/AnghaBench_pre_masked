
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*,struct vm_area_struct*) ;

int FUNC_2(struct snd_pcm_substream *VAR_0,
          struct vm_area_struct *VAR_1)
{
 VAR_1->vm_page_prot = FUNC_0(VAR_1->vm_page_prot);
 return FUNC_1(VAR_0, VAR_1);
}
