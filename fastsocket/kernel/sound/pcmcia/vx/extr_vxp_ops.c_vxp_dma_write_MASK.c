
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int hw_ptr; int buffer_bytes; } ;
struct vx_core {int dummy; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,long) ;
 int FUNC_2 (struct vx_core*) ;
 int FUNC_3 (struct vx_core*,int) ;
 long FUNC_4 (struct vx_core*,int ) ;

__attribute__((used)) static void FUNC_5(struct vx_core *VAR_1, struct snd_pcm_runtime *VAR_2,
     struct vx_pipe *VAR_3, int VAR_4)
{
 long VAR_5 = FUNC_4(VAR_1, VAR_0);
 int VAR_6 = VAR_3->hw_ptr;
 unsigned short *VAR_7 = (unsigned short *)(VAR_2->dma_area + VAR_6);

 FUNC_3(VAR_1, 1);
 if (VAR_6 + VAR_4 > VAR_3->buffer_bytes) {
  int VAR_8 = VAR_3->buffer_bytes - VAR_6;
  VAR_4 -= VAR_8;
  VAR_8 >>= 1;

  while (VAR_8-- > 0) {
   FUNC_1(FUNC_0(*VAR_7), VAR_5);
   VAR_7++;
  }
  VAR_7 = (unsigned short *)VAR_2->dma_area;
  VAR_3->hw_ptr = 0;
 }
 VAR_3->hw_ptr += VAR_4;
 VAR_4 >>= 1;

 while (VAR_4-- > 0) {
  FUNC_1(FUNC_0(*VAR_7), VAR_5);
  VAR_7++;
 }
 FUNC_2(VAR_1);
}
