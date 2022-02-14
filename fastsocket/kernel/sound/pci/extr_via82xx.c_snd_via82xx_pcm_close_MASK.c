
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {size_t direction; int * substream; } ;
struct via_rate_lock {scalar_t__ rate; int lock; int used; } ;
struct via82xx {int ac97; struct via_rate_lock* rates; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct via82xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct via82xx *VAR_5 = FUNC_1(VAR_4);
 struct viadev *VAR_6 = VAR_4->runtime->private_data;
 struct via_rate_lock *VAR_7;


 VAR_7 = &VAR_5->rates[VAR_6->direction];
 FUNC_2(&VAR_7->lock);
 VAR_7->used--;
 if (! VAR_7->used)
  VAR_7->rate = 0;
 FUNC_3(&VAR_7->lock);
 if (! VAR_7->rate) {
  if (! VAR_6->direction) {
   FUNC_0(VAR_5->ac97,
           VAR_0, 0);
   FUNC_0(VAR_5->ac97,
           VAR_3, 0);
   FUNC_0(VAR_5->ac97,
           VAR_1, 0);
  } else
   FUNC_0(VAR_5->ac97,
           VAR_2, 0);
 }
 VAR_6->substream = ((void*)0);
 return 0;
}
