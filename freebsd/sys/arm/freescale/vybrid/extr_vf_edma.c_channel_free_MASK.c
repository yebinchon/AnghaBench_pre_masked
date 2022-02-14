
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_softc {int dummy; } ;
struct edma_channel {int mux_chn; int mux_src; int mux_num; scalar_t__ enabled; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct edma_channel* VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct edma_softc *VAR_1, int VAR_2)
{
 struct edma_channel *VAR_3;

 VAR_3 = &VAR_0[VAR_2];
 VAR_3->enabled = 0;

 FUNC_0(VAR_3->mux_num, VAR_3->mux_src, VAR_3->mux_chn, 0);

 return (0);
}
