
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mwl_txdesc* dd_desc; struct mwl_txbuf* dd_bufptr; } ;
struct mwl_txq {TYPE_1__ dma; } ;
struct mwl_txdesc {int dummy; } ;
struct mwl_txbuf {int bf_dmamap; int bf_daddr; struct mwl_txdesc* bf_desc; } ;
struct mwl_softc {int sc_dev; int sc_dmat; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mwl_txdesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct mwl_txbuf* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct mwl_softc*,char*,TYPE_1__*,int,int,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (struct mwl_softc*,struct mwl_txq*) ;

__attribute__((used)) static int
FUNC_6(struct mwl_softc *VAR_7, struct mwl_txq *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct mwl_txbuf *VAR_12;
 struct mwl_txdesc *VAR_13;

 VAR_9 = FUNC_4(VAR_7, "tx", &VAR_8->dma,
   VAR_6, sizeof(struct mwl_txbuf),
   VAR_2, sizeof(struct mwl_txdesc));
 if (VAR_9 != 0)
  return VAR_9;


 VAR_10 = VAR_6 * sizeof(struct mwl_txbuf);
 VAR_12 = FUNC_3(VAR_10, VAR_3, VAR_4 | VAR_5);
 if (VAR_12 == ((void*)0)) {
  FUNC_2(VAR_7->sc_dev, "malloc of %u tx buffers failed\n",
   VAR_6);
  return VAR_1;
 }
 VAR_8->dma.dd_bufptr = VAR_12;

 VAR_13 = VAR_8->dma.dd_desc;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++, VAR_12++, VAR_13 += VAR_2) {
  VAR_12->bf_desc = VAR_13;
  VAR_12->bf_daddr = FUNC_0(&VAR_8->dma, VAR_13);
  VAR_9 = FUNC_1(VAR_7->sc_dmat, VAR_0,
    &VAR_12->bf_dmamap);
  if (VAR_9 != 0) {
   FUNC_2(VAR_7->sc_dev, "unable to create dmamap for tx "
    "buffer %u, error %u\n", VAR_11, VAR_9);
   return VAR_9;
  }
 }
 FUNC_5(VAR_7, VAR_8);
 return 0;
}
