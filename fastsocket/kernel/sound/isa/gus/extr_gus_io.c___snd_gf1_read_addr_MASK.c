
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enh_mode; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_gus_card*,unsigned char) ;
 scalar_t__ FUNC_1 (struct snd_gus_card*,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct snd_gus_card * VAR_1,
            unsigned char VAR_2, short VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = ((unsigned int) FUNC_0(VAR_1, VAR_2 | 0x80) << 11) & 0xfff800;
 VAR_4 |= ((unsigned int) FUNC_0(VAR_1, (VAR_2 + 1) | 0x80) >> 5) & 0x0007ff;
 if (VAR_1->gf1.enh_mode) {
  VAR_4 |= (unsigned int) FUNC_1(VAR_1, VAR_0 | 0x80) << 26;
  if (VAR_3)
   VAR_4 = ((VAR_4 << 1) & 0xffffffe0) | (VAR_4 & 0x0000000f);
 } else if (VAR_3)
  VAR_4 = ((VAR_4 & 0x001ffff0) << 1) | (VAR_4 & 0x00c0000f);
 return VAR_4;
}
