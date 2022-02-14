
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; struct omap_runtime_data* private_data; } ;
struct omap_runtime_data {int period_index; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_3, u16 VAR_4, void *VAR_5)
{
 struct snd_pcm_substream *VAR_6 = VAR_5;
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 struct omap_runtime_data *VAR_8 = VAR_7->private_data;
 unsigned long VAR_9;

 if ((FUNC_0()) &&
   (VAR_6->stream == VAR_2)) {






  FUNC_2(&VAR_8->lock, VAR_9);
  if ((VAR_4 == VAR_1) &&
    (VAR_8->period_index == VAR_7->periods - 1)) {

   FUNC_3(&VAR_8->lock, VAR_9);
   return;
  }
  if (VAR_8->period_index >= 0) {
   if (VAR_4 & VAR_0) {

    VAR_8->period_index = 0;
   } else if (VAR_4 & VAR_1) {

    VAR_8->period_index = VAR_7->periods - 1;
   } else if (++VAR_8->period_index >= VAR_7->periods) {

    VAR_8->period_index = 0;
   }
  }
  FUNC_3(&VAR_8->lock, VAR_9);
 }

 FUNC_1(VAR_6);
}
