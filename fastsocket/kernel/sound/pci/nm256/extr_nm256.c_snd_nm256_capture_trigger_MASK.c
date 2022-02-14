
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct nm256_stream {int running; } ;
struct nm256 {int reg_lock; } ;
struct TYPE_2__ {struct nm256_stream* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nm256*,struct nm256_stream*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct nm256*) ;
 struct nm256* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct nm256 *VAR_4 = FUNC_3(VAR_2);
 struct nm256_stream *VAR_5 = VAR_2->runtime->private_data;
 int VAR_6 = 0;

 if (FUNC_0(!VAR_5))
  return -VAR_1;

 FUNC_4(&VAR_4->reg_lock);
 switch (VAR_3) {
 case 130:
 case 131:
  if (! VAR_5->running) {
   FUNC_1(VAR_4, VAR_5, VAR_2);
   VAR_5->running = 1;
  }
  break;
 case 129:
 case 128:
  if (VAR_5->running) {
   FUNC_2(VAR_4);
   VAR_5->running = 0;
  }
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 FUNC_5(&VAR_4->reg_lock);
 return VAR_6;
}
