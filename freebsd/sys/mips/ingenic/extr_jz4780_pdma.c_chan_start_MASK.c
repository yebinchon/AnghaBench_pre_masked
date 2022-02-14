
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {int dummy; } ;
struct pdma_softc {int dummy; } ;
struct pdma_channel {int index; int desc_ring_paddr; int cur_desc; struct xdma_channel* xchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct pdma_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct pdma_softc *VAR_3, struct pdma_channel *VAR_4)
{
 struct xdma_channel *VAR_5;

 VAR_5 = VAR_4->xchan;


 FUNC_2(VAR_3, FUNC_0(VAR_4->index), VAR_1);
 FUNC_2(VAR_3, FUNC_1(VAR_4->index),
     VAR_4->desc_ring_paddr + 8 * 4 * VAR_4->cur_desc);

 FUNC_2(VAR_3, VAR_2, (1 << VAR_4->index));


 FUNC_2(VAR_3, FUNC_0(VAR_4->index), (VAR_1 | VAR_0));

 return (0);
}
