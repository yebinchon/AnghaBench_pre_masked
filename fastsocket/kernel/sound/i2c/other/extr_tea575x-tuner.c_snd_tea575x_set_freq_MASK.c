
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_tea575x {int freq; unsigned long val; TYPE_1__* ops; scalar_t__ freq_fixup; scalar_t__ tea5759; } ;
struct TYPE_2__ {int (* write ) (struct snd_tea575x*,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct snd_tea575x*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct snd_tea575x *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1->freq / 16;
 if (VAR_2 > 108000)
  VAR_2 = 108000;
 if (VAR_2 < 87000)
  VAR_2 = 87000;

 if (VAR_1->tea5759)
  VAR_2 -= VAR_1->freq_fixup;
 else
  VAR_2 += VAR_1->freq_fixup;

 VAR_2 *= 10;
 VAR_2 /= 125;

 VAR_1->val &= ~VAR_0;
 VAR_1->val |= VAR_2 & VAR_0;
 VAR_1->ops->write(VAR_1, VAR_1->val);
}
