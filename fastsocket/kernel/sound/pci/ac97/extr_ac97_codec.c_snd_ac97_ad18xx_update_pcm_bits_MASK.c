
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short* pcmreg; unsigned short* unchained; unsigned short* chained; } ;
struct TYPE_6__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {int page_mutex; int reg_mutex; TYPE_4__* bus; TYPE_2__ spec; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* write ) (struct snd_ac97*,int ,unsigned short) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,int ) ;
 int FUNC_3 (struct snd_ac97*,int ,unsigned short) ;
 int FUNC_4 (struct snd_ac97*,int ,unsigned short) ;
 int FUNC_5 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct snd_ac97 *VAR_2, int VAR_3, unsigned short VAR_4, unsigned short VAR_5)
{
 int VAR_6;
 unsigned short VAR_7, VAR_8, VAR_9;

 FUNC_0(&VAR_2->page_mutex);
 VAR_7 = VAR_2->spec.ad18xx.pcmreg[VAR_3];
 VAR_8 = (VAR_7 & ~VAR_4) | (VAR_5 & VAR_4);
 VAR_6 = VAR_7 != VAR_8;
 if (VAR_6) {
  FUNC_0(&VAR_2->reg_mutex);
  VAR_9 = FUNC_2(VAR_2, VAR_0);
  VAR_2->spec.ad18xx.pcmreg[VAR_3] = VAR_8;

  VAR_2->bus->ops->write(VAR_2, VAR_0,
     (VAR_9 & ~0x7000) |
     VAR_2->spec.ad18xx.unchained[VAR_3] | VAR_2->spec.ad18xx.chained[VAR_3]);

  VAR_2->bus->ops->write(VAR_2, VAR_1, VAR_8);

  VAR_2->bus->ops->write(VAR_2, VAR_0,
     VAR_9 | 0x7000);
  FUNC_1(&VAR_2->reg_mutex);
 }
 FUNC_1(&VAR_2->page_mutex);
 return VAR_6;
}
