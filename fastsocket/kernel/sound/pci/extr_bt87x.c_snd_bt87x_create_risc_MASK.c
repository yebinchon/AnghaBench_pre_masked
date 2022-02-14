
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {unsigned int addr; int * area; } ;
struct snd_bt87x {unsigned int line_bytes; unsigned int lines; TYPE_1__ dma_risc; int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_bt87x *VAR_14, struct snd_pcm_substream *VAR_15,
            unsigned int VAR_16, unsigned int VAR_17)
{
 unsigned int VAR_18, VAR_19;
 u32 *VAR_20;

 if (VAR_14->dma_risc.area == ((void*)0)) {
  if (FUNC_2(VAR_13, FUNC_3(VAR_14->pci),
     FUNC_0(VAR_1), &VAR_14->dma_risc) < 0)
   return -VAR_0;
 }
 VAR_20 = (u32 *)VAR_14->dma_risc.area;
 VAR_19 = 0;
 *VAR_20++ = FUNC_1(VAR_9 | VAR_10);
 *VAR_20++ = FUNC_1(0);
 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18) {
  u32 VAR_21;

  VAR_21 = VAR_17;
  do {
   u32 VAR_22, VAR_23;
   unsigned int VAR_24;

   VAR_23 = VAR_2 - (VAR_19 % VAR_2);
   if (VAR_23 > VAR_21)
    VAR_23 = VAR_21;
   VAR_22 = VAR_12 | VAR_23;
   if (VAR_21 == VAR_17) {
    u32 VAR_25 = VAR_18 * 16 / VAR_16;
    VAR_22 |= VAR_8;
    VAR_22 |= VAR_25 << VAR_7;
    VAR_22 |= (~VAR_25 & 0xf) << VAR_6;
   }
   if (VAR_23 == VAR_21)
    VAR_22 |= VAR_3 | VAR_4;
   *VAR_20++ = FUNC_1(VAR_22);
   VAR_24 = FUNC_4(VAR_15, VAR_19);
   *VAR_20++ = FUNC_1(VAR_24);
   VAR_19 += VAR_23;
   VAR_21 -= VAR_23;
  } while (VAR_21 > 0);
 }
 *VAR_20++ = FUNC_1(VAR_9 | VAR_11);
 *VAR_20++ = FUNC_1(0);
 *VAR_20++ = FUNC_1(VAR_5);
 *VAR_20++ = FUNC_1(VAR_14->dma_risc.addr);
 VAR_14->line_bytes = VAR_17;
 VAR_14->lines = VAR_16;
 return 0;
}
