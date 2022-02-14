
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ad1843 {int dummy; } ;
struct ad1843_gain {int rfield; TYPE_1__* lfield; int rmute; TYPE_1__* lmute; scalar_t__ negative; } ;
struct TYPE_2__ {int nbits; } ;


 struct ad1843_gain** VAR_0 ;
 int FUNC_0 (struct snd_ad1843*,int) ;
 int FUNC_1 (struct snd_ad1843*,int,TYPE_1__*,int,int ,int) ;

int FUNC_2(struct snd_ad1843 *VAR_1, int VAR_2, int VAR_3)
{
 const struct ad1843_gain *VAR_4 = VAR_0[VAR_2];
 unsigned short VAR_5 = (1 << VAR_4->lfield->nbits) - 1;

 int VAR_6 = (VAR_3 >> 0) & VAR_5;
 int VAR_7 = (VAR_3 >> 8) & VAR_5;
 int VAR_8 = (VAR_6 == 0) ? 1 : 0;
 int VAR_9 = (VAR_7 == 0) ? 1 : 0;

 if (VAR_4->negative) {
  VAR_6 = VAR_5 - VAR_6;
  VAR_7 = VAR_5 - VAR_7;
 }
 if (VAR_4->lmute)
  FUNC_1(VAR_1, 2, VAR_4->lmute, VAR_8, VAR_4->rmute, VAR_9);
 FUNC_1(VAR_1, 2, VAR_4->lfield, VAR_6, VAR_4->rfield, VAR_7);
 return FUNC_0(VAR_1, VAR_2);
}
