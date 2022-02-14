
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct spi_softc {int debug; scalar_t__ rxlen; scalar_t__ rxidx; scalar_t__ txlen; scalar_t__ txidx; int intreg; int mtx; void* txbuf; void* rxbuf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_softc*,int ,int) ;
 int FUNC_1 (int ,char*,void*,void*,void*) ;
 int VAR_4 ;
 int FUNC_2 (struct spi_softc*,int *,int ,char*,int) ;
 int FUNC_3 (struct spi_softc*) ;

__attribute__((used)) static int
FUNC_4(struct spi_softc *VAR_5, void *VAR_6, void *VAR_7, uint32_t VAR_8)
{
 int VAR_9;

 if (VAR_5->debug >= 1) {
  FUNC_1(VAR_5->dev,
      "spi_xfer_buf, rxbuf %p txbuf %p len %u\n",
      VAR_6, VAR_7, VAR_8);
 }

 if (VAR_8 == 0)
  return (0);

 VAR_5->rxbuf = VAR_6;
 VAR_5->rxlen = VAR_8;
 VAR_5->rxidx = 0;
 VAR_5->txbuf = VAR_7;
 VAR_5->txlen = VAR_8;
 VAR_5->txidx = 0;
 VAR_5->intreg = VAR_2 | VAR_3;
 FUNC_3(VAR_5);


 FUNC_0(VAR_5, VAR_0, VAR_5->intreg);

 VAR_9 = 0;
 while (VAR_9 == 0 && VAR_5->intreg != 0)
  VAR_9 = FUNC_2(VAR_5, &VAR_5->mtx, 0, "imxspi", 10 * VAR_4);

 if (VAR_5->rxidx != VAR_5->rxlen || VAR_5->txidx != VAR_5->txlen)
  VAR_9 = VAR_1;

 return (VAR_9);
}
