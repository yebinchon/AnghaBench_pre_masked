
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int lock; scalar_t__ wchan; scalar_t__ rchan; scalar_t__ busy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_midi*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*) ;

int
FUNC_6(struct snd_midi *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0;
 FUNC_3(&VAR_1);
 FUNC_1(&VAR_2->lock);
 if (VAR_2->busy) {
  if (!(VAR_2->rchan || VAR_2->wchan))
   goto err;

  if (VAR_2->rchan) {
   FUNC_5(&VAR_2->rchan);
   VAR_2->rchan = 0;
  }
  if (VAR_2->wchan) {
   FUNC_5(&VAR_2->wchan);
   VAR_2->wchan = 0;
  }
 }
 VAR_3 = FUNC_0(VAR_2, 0);
 if (!VAR_3)
  goto exit;

err:
 FUNC_2(&VAR_2->lock);
exit:
 FUNC_4(&VAR_1);
 return VAR_3;
}
