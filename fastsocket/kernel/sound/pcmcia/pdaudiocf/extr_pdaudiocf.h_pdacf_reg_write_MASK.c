
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {unsigned short* regmap; scalar_t__ port; } ;


 int FUNC_0 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct snd_pdacf *VAR_0, unsigned char VAR_1, unsigned short VAR_2)
{
 FUNC_0(VAR_0->regmap[VAR_1>>1] = VAR_2, VAR_0->port + VAR_1);
}
