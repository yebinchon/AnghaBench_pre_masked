
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;
struct fsi_priv {int byte_offset; scalar_t__ base; int dma_chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct fsi_priv *VAR_4,
      struct snd_pcm_runtime *VAR_5,
      int VAR_6)
{
 u32 *VAR_7;


 VAR_7 = (u32 *)VAR_5->dma_area;
 VAR_7 += VAR_4->byte_offset / 4;

 FUNC_1(VAR_4->dma_chan);
 FUNC_0(VAR_4->dma_chan, (VAR_1|0x400|VAR_3|VAR_2));
 FUNC_2(VAR_4->dma_chan, (u32)VAR_7,
    (u32)(VAR_4->base + VAR_0), VAR_6 * 4);
}
