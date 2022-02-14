
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* akm; } ;
struct TYPE_2__ {unsigned short* images; } ;



__attribute__((used)) static unsigned short FUNC_0(struct snd_ice1712 *VAR_0, int VAR_1)
{
 VAR_1 <<= 1;
 return ((unsigned short)VAR_0->akm[0].images[VAR_1] << 8) |
  VAR_0->akm[0].images[VAR_1 + 1];
}
