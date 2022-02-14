
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct cmipci {int* opened; int open_mutex; int reg_lock; TYPE_1__* channel; } ;
struct TYPE_2__ {scalar_t__ is_dac; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cmipci*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cmipci *VAR_5, int VAR_6, struct snd_pcm_substream *VAR_7)
{
 int VAR_8 = VAR_6 & VAR_1;






 FUNC_0(&VAR_5->open_mutex);
 if (VAR_5->opened[VAR_8]) {
  FUNC_1(&VAR_5->open_mutex);
  return -VAR_4;
 }
 VAR_5->opened[VAR_8] = VAR_6;
 VAR_5->channel[VAR_8].substream = VAR_7;
 if (! (VAR_6 & VAR_2)) {

  VAR_5->channel[VAR_8].is_dac = 0;
  FUNC_3(&VAR_5->reg_lock);
  FUNC_2(VAR_5, VAR_3, VAR_0);
  FUNC_4(&VAR_5->reg_lock);
 }
 FUNC_1(&VAR_5->open_mutex);
 return 0;
}
