
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_hwdep {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int chip_status; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_hwdep *VAR_1, struct file *VAR_2)
{

 struct snd_card *VAR_3 = VAR_1->card;
 int VAR_4 = FUNC_1(VAR_3);
 if (0 == VAR_4)
  FUNC_0(VAR_3)->chip_status |= VAR_0;
 FUNC_2(VAR_3);
 return VAR_4;
}
