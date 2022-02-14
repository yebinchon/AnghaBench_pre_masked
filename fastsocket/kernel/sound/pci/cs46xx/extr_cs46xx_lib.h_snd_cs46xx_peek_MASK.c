
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* idx; } ;
struct snd_cs46xx {TYPE_2__ region; } ;
struct TYPE_3__ {scalar_t__ remap_addr; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_cs46xx *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2 = VAR_1 >> 16;
 unsigned int VAR_3 = VAR_1 & 0xffff;
 return FUNC_0(VAR_0->region.idx[VAR_2+1].remap_addr + VAR_3);
}
