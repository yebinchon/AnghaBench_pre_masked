
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ad1843 {int dummy; } ;
struct ad1843_gain {int rmute; TYPE_1__* lmute; scalar_t__ negative; int rfield; TYPE_1__* lfield; } ;
struct TYPE_2__ {int nbits; } ;


 struct ad1843_gain** VAR_0 ;
 int FUNC_0 (struct snd_ad1843*,int,TYPE_1__*,int*,int ,int*) ;

int FUNC_1(struct snd_ad1843 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 const struct ad1843_gain *VAR_7 = VAR_0[VAR_2];
 unsigned short VAR_8 = (1 << VAR_7->lfield->nbits) - 1;

 FUNC_0(VAR_1, 2, VAR_7->lfield, &VAR_3, VAR_7->rfield, &VAR_4);
 if (VAR_7->negative) {
  VAR_3 = VAR_8 - VAR_3;
  VAR_4 = VAR_8 - VAR_4;
 }
 if (VAR_7->lmute) {
  FUNC_0(VAR_1, 2, VAR_7->lmute, &VAR_5, VAR_7->rmute, &VAR_6);
  if (VAR_5)
   VAR_3 = 0;
  if (VAR_6)
   VAR_4 = 0;
 }
 return VAR_3 << 0 | VAR_4 << 8;
}
