
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int rate; } ;
struct esschan {int dma_size; int wav_shift; int fmt; int* apu; int* base; int* apu_mode; TYPE_2__* memory; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct es1968 {int reg_lock; scalar_t__ io_port; TYPE_3__ dma; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct es1968*,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct es1968*,int,int) ;
 int FUNC_4 (struct es1968*,int) ;
 int FUNC_5 (struct es1968*,struct esschan*,int,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct es1968 *VAR_6, struct esschan *VAR_7,
          struct snd_pcm_runtime *VAR_8)
{
 u32 VAR_9;
 int VAR_10 = 0;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;

 VAR_14 = VAR_7->dma_size >> VAR_7->wav_shift;

 if (VAR_7->fmt & VAR_5)
  VAR_10++;

 for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++) {
  VAR_12 = VAR_7->apu[VAR_11];

  FUNC_5(VAR_6, VAR_7, VAR_11, VAR_7->memory->buf.addr, 0);


  VAR_9 = VAR_7->memory->buf.addr;
  VAR_9 -= VAR_6->dma.addr;
  VAR_9 >>= 1;

  VAR_9 |= 0x00400000;

  if (VAR_7->fmt & VAR_5) {

   if (VAR_11)
    VAR_9 |= 0x00800000;
   if (VAR_7->fmt & VAR_4)
    VAR_9 >>= 1;
  }



  VAR_7->base[VAR_11] = VAR_9 & 0xFFFF;

  for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
   FUNC_0(VAR_6, VAR_12, VAR_13, 0x0000);


  FUNC_0(VAR_6, VAR_12, 4, ((VAR_9 >> 16) & 0xFF) << 8);
  FUNC_0(VAR_6, VAR_12, 5, VAR_9 & 0xFFFF);
  FUNC_0(VAR_6, VAR_12, 6, (VAR_9 + VAR_14) & 0xFFFF);

  FUNC_0(VAR_6, VAR_12, 7, VAR_14);


  FUNC_0(VAR_6, VAR_12, 8, 0x0000);

  FUNC_0(VAR_6, VAR_12, 9, 0xD000);


  FUNC_0(VAR_6, VAR_12, 11, 0x0000);

  FUNC_0(VAR_6, VAR_12, 0, 0x400F);

  if (VAR_7->fmt & VAR_4)
   VAR_7->apu_mode[VAR_11] = VAR_0;
  else
   VAR_7->apu_mode[VAR_11] = VAR_1;

  if (VAR_7->fmt & VAR_5) {





   FUNC_0(VAR_6, VAR_12, 10,
      0x8F00 | (VAR_11 ? 0 : 0x10));
   VAR_7->apu_mode[VAR_11] += 1;
  } else
   FUNC_0(VAR_6, VAR_12, 10, 0x8F08);
 }

 FUNC_6(&VAR_6->reg_lock, VAR_15);

 FUNC_2(1, VAR_6->io_port + 0x04);

 FUNC_2(FUNC_1(VAR_6->io_port + VAR_3) | VAR_2, VAR_6->io_port + VAR_3);
 FUNC_7(&VAR_6->reg_lock, VAR_15);

 VAR_16 = VAR_8->rate;

 if (VAR_16 > 48000)
  VAR_16 = 48000;
 if (VAR_16 < 4000)
  VAR_16 = 4000;


 if (!(VAR_7->fmt & VAR_4) && !(VAR_7->fmt & VAR_5))
  VAR_16 >>= 1;

 VAR_16 = FUNC_4(VAR_6, VAR_16);


 FUNC_3(VAR_6, VAR_7->apu[0], VAR_16);
 FUNC_3(VAR_6, VAR_7->apu[1], VAR_16);
}
