
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct spi_softc {int debug; int mtx; int dev; int ** cspins; } ;
struct spi_command {int tx_data_sz; int tx_data; int rx_data; int tx_cmd_sz; int tx_cmd; int rx_cmd; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_softc*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 struct spi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct spi_softc*,size_t,size_t,size_t) ;
 int FUNC_8 (struct spi_softc*,size_t,int) ;
 int FUNC_9 (struct spi_softc*,int ,int ,int ) ;
 int FUNC_10 (int ,size_t*) ;
 int FUNC_11 (int ,size_t*) ;
 int FUNC_12 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_4, device_t VAR_5, struct spi_command *VAR_6)
{
 struct spi_softc *VAR_7 = FUNC_2(VAR_4);
 uint32_t VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_11(VAR_5, &VAR_8);
 FUNC_10(VAR_5, &VAR_10);
 FUNC_12(VAR_5, &VAR_9);

 if (VAR_8 > VAR_0 || VAR_7->cspins[VAR_8] == ((void*)0)) {
  if (VAR_7->debug || VAR_3)
   FUNC_3(VAR_7->dev, "Invalid chip select %u\n", VAR_8);
  return (VAR_2);
 }

 FUNC_5(&VAR_7->mtx);
 FUNC_1(VAR_7->dev);

 if (VAR_7->debug >= 1) {
  FUNC_3(VAR_7->dev,
      "spi_transfer, cs 0x%x clock %u mode %u\n",
      VAR_8, VAR_10, VAR_9);
 }


 FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_8(VAR_7, VAR_8, 1);


 VAR_11 = 0;
 if (VAR_6->tx_cmd_sz > 0)
  VAR_11 = FUNC_9(VAR_7, VAR_6->rx_cmd, VAR_6->tx_cmd,
      VAR_6->tx_cmd_sz);
 if (VAR_6->tx_data_sz > 0 && VAR_11 == 0)
  VAR_11 = FUNC_9(VAR_7, VAR_6->rx_data, VAR_6->tx_data,
      VAR_6->tx_data_sz);


 FUNC_8(VAR_7, VAR_8, 0);
 FUNC_0(VAR_7, VAR_1, 0);

 FUNC_4(VAR_7->dev);
 FUNC_6(&VAR_7->mtx);

 return (VAR_11);
}
