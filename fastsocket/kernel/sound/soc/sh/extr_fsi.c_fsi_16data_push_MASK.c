
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;
struct fsi_priv {int byte_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fsi_priv *VAR_1,
      struct snd_pcm_runtime *VAR_2,
      int VAR_3)
{
 u16 *VAR_4;
 u32 VAR_5;
 int VAR_6;


 VAR_4 = (u16 *)VAR_2->dma_area;
 VAR_4 += VAR_1->byte_offset / 2;





 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = (u32)VAR_4[VAR_6];
  FUNC_0(VAR_1, VAR_0, VAR_5 << 8);
 }
}
