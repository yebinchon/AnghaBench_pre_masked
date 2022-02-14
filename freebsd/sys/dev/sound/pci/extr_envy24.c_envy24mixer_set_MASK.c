
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixer {int dummy; } ;
struct sc_info {int dacn; scalar_t__* left; scalar_t__* right; int lock; TYPE_3__* chan; int * dac; TYPE_2__* cfg; int dev; } ;
struct TYPE_6__ {scalar_t__ run; } ;
struct TYPE_5__ {TYPE_1__* codec; } ;
struct TYPE_4__ {int (* setvolume ) (int ,int ,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (struct sc_info*,int) ;
 struct sc_info* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_6, unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
 struct sc_info *VAR_10 = FUNC_2(VAR_6);
 int VAR_11 = VAR_5[VAR_7];
 int VAR_12;
 int VAR_13;

 if (VAR_10 == ((void*)0))
  return -1;
 if (VAR_7 == 0 && VAR_10->cfg->codec->setvolume == ((void*)0))
  return -1;
 if (VAR_7 != 0 && VAR_11 == -1)
  return -1;
 VAR_12 = VAR_4[VAR_11];





 FUNC_3(VAR_10->lock);
 if (VAR_7 == 0) {
  for (VAR_13 = 0; VAR_13 < VAR_10->dacn; VAR_13++) {
   VAR_10->cfg->codec->setvolume(VAR_10->dac[VAR_13], VAR_3, VAR_8, VAR_9);
  }
 }
 else {

  if ((VAR_10->left[VAR_12] = 100 - VAR_8) > VAR_1)
   VAR_10->left[VAR_12] = VAR_2;
  if ((VAR_10->right[VAR_12] = 100 - VAR_9) > VAR_1)
   VAR_10->right[VAR_12] = VAR_2;


  if (VAR_12 > VAR_0 || VAR_10->chan[VAR_11].run)
   FUNC_1(VAR_10, VAR_12);
 }
 FUNC_4(VAR_10->lock);

 return VAR_9 << 8 | VAR_8;
}
