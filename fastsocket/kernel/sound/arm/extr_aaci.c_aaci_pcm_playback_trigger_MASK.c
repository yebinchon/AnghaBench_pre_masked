
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; struct aaci* private_data; } ;
struct aaci_runtime {int dummy; } ;
struct aaci {int lock; } ;
struct TYPE_2__ {struct aaci_runtime* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (struct aaci_runtime*) ;
 int FUNC_1 (struct aaci_runtime*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct aaci *VAR_3 = VAR_1->private_data;
 struct aaci_runtime *VAR_4 = VAR_1->runtime->private_data;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_3->lock, VAR_5);
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_4);
  break;

 case 131:
  FUNC_0(VAR_4);
  break;

 case 129:
  FUNC_1(VAR_4);
  break;

 case 128:
  FUNC_1(VAR_4);
  break;

 case 133:
  break;

 case 132:
  break;

 default:
  VAR_6 = -VAR_0;
 }
 FUNC_3(&VAR_3->lock, VAR_5);

 return VAR_6;
}
