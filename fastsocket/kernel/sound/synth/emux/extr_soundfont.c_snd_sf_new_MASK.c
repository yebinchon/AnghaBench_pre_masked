
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int dummy; } ;
struct snd_sf_callback {int dummy; } ;
struct snd_sf_list {struct snd_sf_callback callback; struct snd_util_memhdr* memhdr; int lock; int presets_mutex; } ;


 int VAR_0 ;
 struct snd_sf_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_sf_list*) ;
 int FUNC_3 (int *) ;

struct snd_sf_list *
FUNC_4(struct snd_sf_callback *VAR_1, struct snd_util_memhdr *VAR_2)
{
 struct snd_sf_list *VAR_3;

 if ((VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0)) == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_3->presets_mutex);
 FUNC_3(&VAR_3->lock);
 VAR_3->memhdr = VAR_2;

 if (VAR_1)
  VAR_3->callback = *VAR_1;

 FUNC_2(VAR_3);
 return VAR_3;
}
