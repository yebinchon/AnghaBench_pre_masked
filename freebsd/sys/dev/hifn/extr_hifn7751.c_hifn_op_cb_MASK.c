
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_operand {int nsegs; int segs; int mapsize; } ;
typedef int seg ;
typedef int bus_size_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(void* VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, bus_size_t VAR_4, int VAR_5)
{
 struct hifn_operand *VAR_6 = VAR_1;

 FUNC_0(VAR_3 <= VAR_0,
  ("hifn_op_cb: too many DMA segments (%u > %u) "
   "returned when mapping operand", VAR_3, VAR_0));
 VAR_6->mapsize = VAR_4;
 VAR_6->nsegs = VAR_3;
 FUNC_1(VAR_2, VAR_6->segs, VAR_3 * sizeof (VAR_2[0]));
}
