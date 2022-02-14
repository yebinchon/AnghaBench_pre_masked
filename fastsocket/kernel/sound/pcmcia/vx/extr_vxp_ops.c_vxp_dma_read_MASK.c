
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int hw_ptr; int buffer_bytes; } ;
struct vx_core {int dummy; } ;
struct snd_vxpocket {int regDIALOG; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (long) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vx_core*,int ,int ) ;
 int FUNC_4 (struct vx_core*,int ) ;
 long FUNC_5 (struct vx_core*,int ) ;

__attribute__((used)) static void FUNC_6(struct vx_core *VAR_5, struct snd_pcm_runtime *VAR_6,
    struct vx_pipe *VAR_7, int VAR_8)
{
 struct snd_vxpocket *VAR_9 = (struct snd_vxpocket *)VAR_5;
 long VAR_10 = FUNC_5(VAR_5, VAR_4);
 int VAR_11 = VAR_7->hw_ptr;
 unsigned short *VAR_12 = (unsigned short *)(VAR_6->dma_area + VAR_11);

 if (FUNC_2(VAR_8 % 2))
  return;
 FUNC_4(VAR_5, 0);
 if (VAR_11 + VAR_8 > VAR_7->buffer_bytes) {
  int VAR_13 = VAR_7->buffer_bytes - VAR_11;
  VAR_8 -= VAR_13;
  VAR_13 >>= 1;

  while (VAR_13-- > 0)
   *VAR_12++ = FUNC_1(FUNC_0(VAR_10));
  VAR_12 = (unsigned short *)VAR_6->dma_area;
  VAR_7->hw_ptr = 0;
 }
 VAR_7->hw_ptr += VAR_8;
 VAR_8 >>= 1;

 while (VAR_8-- > 1)
  *VAR_12++ = FUNC_1(FUNC_0(VAR_10));

 VAR_9->regDIALOG &= ~VAR_3;
 FUNC_3(VAR_5, VAR_0, VAR_9->regDIALOG);

 *VAR_12 = FUNC_1(FUNC_0(VAR_10));

 VAR_9->regDIALOG &= ~VAR_2;
 FUNC_3(VAR_5, VAR_0, VAR_9->regDIALOG);

 FUNC_3(VAR_5, VAR_1, 0);
}
