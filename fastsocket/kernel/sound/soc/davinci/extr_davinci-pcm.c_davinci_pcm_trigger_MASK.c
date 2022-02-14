
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct davinci_runtime_data {int lock; int master_lch; } ;
struct TYPE_2__ {struct davinci_runtime_data* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct davinci_runtime_data *VAR_3 = VAR_1->runtime->private_data;
 int VAR_4 = 0;

 FUNC_2(&VAR_3->lock);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_3->master_lch);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_3->master_lch);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
