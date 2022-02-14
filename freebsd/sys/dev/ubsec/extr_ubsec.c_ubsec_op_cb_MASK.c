
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ubsec_operand {int nsegs; int segs; scalar_t__ mapsize; } ;
typedef int seg ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, bus_size_t VAR_5, int VAR_6)
{
 struct ubsec_operand *VAR_7 = VAR_2;

 FUNC_0(VAR_4 <= VAR_0,
  ("Too many DMA segments returned when mapping operand"));





 if (VAR_6 != 0)
  return;
 VAR_7->mapsize = VAR_5;
 VAR_7->nsegs = VAR_4;
 FUNC_1(VAR_3, VAR_7->segs, VAR_4 * sizeof (VAR_3[0]));
}
