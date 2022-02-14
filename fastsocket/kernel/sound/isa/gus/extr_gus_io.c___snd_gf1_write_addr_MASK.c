
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enh_mode; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,unsigned char,unsigned short) ;
 int FUNC_1 (struct snd_gus_card*,int ,unsigned char) ;

__attribute__((used)) static inline void FUNC_2(struct snd_gus_card * VAR_1, unsigned char VAR_2,
                                        unsigned int VAR_3, int VAR_4)
{
 if (VAR_1->gf1.enh_mode) {
  if (VAR_4)
   VAR_3 = ((VAR_3 >> 1) & ~0x0000000f) | (VAR_3 & 0x0000000f);
  FUNC_1(VAR_1, VAR_0, (unsigned char) ((VAR_3 >> 26) & 0x03));
 } else if (VAR_4)
  VAR_3 = (VAR_3 & 0x00c0000f) | ((VAR_3 & 0x003ffff0) >> 1);
 FUNC_0(VAR_1, VAR_2, (unsigned short) (VAR_3 >> 11));
 FUNC_0(VAR_1, VAR_2 + 1, (unsigned short) (VAR_3 << 5));
}
