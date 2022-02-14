
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwl_txbuf* dd_bufptr; } ;
struct mwl_txq {int nfree; int free; TYPE_1__ dma; } ;
struct mwl_txbuf {int dummy; } ;
struct mwl_softc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mwl_txbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct mwl_softc *VAR_2, struct mwl_txq *VAR_3)
{
 struct mwl_txbuf *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->dma.dd_bufptr;
 FUNC_0(&VAR_3->free);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++)
  FUNC_1(&VAR_3->free, VAR_4, VAR_0);
 VAR_3->nfree = VAR_5;
}
