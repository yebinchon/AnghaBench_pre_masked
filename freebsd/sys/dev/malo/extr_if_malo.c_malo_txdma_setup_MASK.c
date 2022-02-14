
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct malo_txdesc* dd_desc; struct malo_txbuf* dd_bufptr; } ;
struct malo_txq {scalar_t__ nfree; int free; TYPE_1__ dma; } ;
struct malo_txdesc {int dummy; } ;
struct malo_txbuf {int bf_dmamap; int bf_daddr; struct malo_txdesc* bf_desc; } ;
struct malo_softc {int malo_dev; int malo_dmat; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct malo_txdesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct malo_txbuf*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,char*,int,...) ;
 struct malo_txbuf* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct malo_softc*,char*,TYPE_1__*,int,int,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct malo_softc *VAR_8, struct malo_txq *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct malo_txbuf *VAR_13;
 struct malo_txdesc *VAR_14;

 VAR_10 = FUNC_6(VAR_8, "tx", &VAR_9->dma,
     VAR_7, sizeof(struct malo_txbuf),
     VAR_2, sizeof(struct malo_txdesc));
 if (VAR_10 != 0)
  return VAR_10;


 VAR_11 = VAR_7 * sizeof(struct malo_txbuf);
 VAR_13 = FUNC_5(VAR_11, VAR_3, VAR_4 | VAR_5);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_8->malo_dev, "malloc of %u tx buffers failed\n",
      VAR_7);
  return VAR_1;
 }
 VAR_9->dma.dd_bufptr = VAR_13;

 FUNC_1(&VAR_9->free);
 VAR_9->nfree = 0;
 VAR_14 = VAR_9->dma.dd_desc;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++, VAR_13++, VAR_14 += VAR_2) {
  VAR_13->bf_desc = VAR_14;
  VAR_13->bf_daddr = FUNC_0(&VAR_9->dma, VAR_14);
  VAR_10 = FUNC_3(VAR_8->malo_dmat, VAR_0,
      &VAR_13->bf_dmamap);
  if (VAR_10 != 0) {
   FUNC_4(VAR_8->malo_dev,
       "unable to create dmamap for tx "
       "buffer %u, error %u\n", VAR_12, VAR_10);
   return VAR_10;
  }
  FUNC_2(&VAR_9->free, VAR_13, VAR_6);
  VAR_9->nfree++;
 }

 return 0;
}
