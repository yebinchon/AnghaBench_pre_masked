
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct esschan {int running; int hwptr; int count; int bob_freq; } ;
struct es1968 {int substream_lock; } ;
struct TYPE_2__ {struct esschan* private_data; } ;






 int FUNC_0 (struct es1968*) ;
 int FUNC_1 (struct es1968*,int ) ;
 int FUNC_2 (struct es1968*,struct esschan*) ;
 int FUNC_3 (struct es1968*,struct esschan*) ;
 struct es1968* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 struct es1968 *VAR_2 = FUNC_4(VAR_0);
 struct esschan *VAR_3 = VAR_0->runtime->private_data;

 FUNC_5(&VAR_2->substream_lock);
 switch (VAR_1) {
 case 130:
 case 131:
  if (VAR_3->running)
   break;
  FUNC_1(VAR_2, VAR_3->bob_freq);
  VAR_3->count = 0;
  VAR_3->hwptr = 0;
  FUNC_2(VAR_2, VAR_3);
  VAR_3->running = 1;
  break;
 case 129:
 case 128:
  if (! VAR_3->running)
   break;
  FUNC_3(VAR_2, VAR_3);
  VAR_3->running = 0;
  FUNC_0(VAR_2);
  break;
 }
 FUNC_6(&VAR_2->substream_lock);
 return 0;
}
