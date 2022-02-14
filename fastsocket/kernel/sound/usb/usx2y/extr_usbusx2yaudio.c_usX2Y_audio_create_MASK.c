
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_card {int dummy; } ;
struct TYPE_7__ {TYPE_2__* dev; int pcm_list; } ;
struct TYPE_5__ {int idProduct; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*,int,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

int FUNC_5(struct snd_card *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&FUNC_2(VAR_2)->pcm_list);

 if (0 > (VAR_3 = FUNC_3(VAR_2, 0xA, 0x8)))
  return VAR_3;
 if (FUNC_1(FUNC_2(VAR_2)->dev->descriptor.idProduct) == VAR_1)
      if (0 > (VAR_3 = FUNC_3(VAR_2, 0, 0xA)))
       return VAR_3;
 if (FUNC_1(FUNC_2(VAR_2)->dev->descriptor.idProduct) != VAR_0)
  VAR_3 = FUNC_4(FUNC_2(VAR_2), 44100);
 return VAR_3;
}
