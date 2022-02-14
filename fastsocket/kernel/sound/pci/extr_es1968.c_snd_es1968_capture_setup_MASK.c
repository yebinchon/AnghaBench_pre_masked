
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int rate; } ;
struct esschan {int dma_size; int wav_shift; int* apu; int fmt; TYPE_4__* memory; TYPE_2__* mixbuf; } ;
struct es1968 {int reg_lock; scalar_t__ io_port; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ buf; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct es1968*,struct esschan*,int,scalar_t__,int,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct es1968*,int,int) ;
 int FUNC_4 (struct es1968*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct es1968 *VAR_6, struct esschan *VAR_7,
         struct snd_pcm_runtime *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;

 VAR_9 = VAR_7->dma_size >> VAR_7->wav_shift;
 FUNC_0(VAR_6, VAR_7, 2,
    VAR_7->mixbuf->buf.addr, VAR_3/4,
    VAR_0, 0x14);

 FUNC_0(VAR_6, VAR_7, 0, VAR_7->memory->buf.addr, VAR_9,
    VAR_1, VAR_7->apu[2]);
 if (VAR_7->fmt & VAR_5) {

  FUNC_0(VAR_6, VAR_7, 3,
     VAR_7->mixbuf->buf.addr + VAR_3/2,
     VAR_3/4,
     VAR_0, 0x15);

  FUNC_0(VAR_6, VAR_7, 1,
     VAR_7->memory->buf.addr + VAR_9*2, VAR_9,
     VAR_1, VAR_7->apu[3]);
 }

 VAR_10 = VAR_8->rate;

 if (VAR_10 > 47999)
  VAR_10 = 47999;
 if (VAR_10 < 4000)
  VAR_10 = 4000;

 VAR_10 = FUNC_4(VAR_6, VAR_10);


 FUNC_3(VAR_6, VAR_7->apu[0], VAR_10);
 FUNC_3(VAR_6, VAR_7->apu[1], VAR_10);


 VAR_10 = 0x10000;
 FUNC_3(VAR_6, VAR_7->apu[2], VAR_10);
 FUNC_3(VAR_6, VAR_7->apu[3], VAR_10);

 FUNC_5(&VAR_6->reg_lock, VAR_11);

 FUNC_2(1, VAR_6->io_port + 0x04);

 FUNC_2(FUNC_1(VAR_6->io_port + VAR_4) | VAR_2, VAR_6->io_port + VAR_4);
 FUNC_6(&VAR_6->reg_lock, VAR_11);
}
