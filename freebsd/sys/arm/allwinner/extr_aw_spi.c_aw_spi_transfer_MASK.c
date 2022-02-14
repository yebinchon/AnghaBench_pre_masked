
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_command {int rx_data_sz; int tx_data_sz; int tx_data; int rx_data; int rx_cmd_sz; int tx_cmd_sz; int tx_cmd; int rx_cmd; } ;
struct aw_spi_softc {int mtx; int mod_freq; int clk_mod; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aw_spi_softc*,int ) ;
 int FUNC_1 (struct aw_spi_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct aw_spi_softc*,int) ;
 int FUNC_3 (struct aw_spi_softc*,int,int) ;
 int FUNC_4 (struct aw_spi_softc*,int) ;
 int FUNC_5 (struct aw_spi_softc*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int ) ;
 struct aw_spi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ,int*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_7, device_t VAR_8, struct spi_command *VAR_9)
{
 struct aw_spi_softc *VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_10 = FUNC_8(VAR_7);

 FUNC_13(VAR_8, &VAR_11);
 FUNC_12(VAR_8, &VAR_13);
 FUNC_14(VAR_8, &VAR_12);


 FUNC_7(VAR_10->clk_mod, 2 * VAR_13, VAR_4);
 FUNC_6(VAR_10->clk_mod, &VAR_10->mod_freq);
 if (VAR_11 >= VAR_3) {
  FUNC_9(VAR_7, "Invalid cs %d\n", VAR_11);
  return (VAR_5);
 }

 FUNC_10(&VAR_10->mtx);


 VAR_14 = FUNC_0(VAR_10, VAR_0);
 VAR_14 |= VAR_1 | VAR_2;
 FUNC_1(VAR_10, VAR_0, VAR_14);


 FUNC_2(VAR_10, VAR_13);
 FUNC_4(VAR_10, VAR_12);
 if (VAR_11 & VAR_6)
  FUNC_3(VAR_10, VAR_11, 0);
 else
  FUNC_3(VAR_10, VAR_11, 1);


 VAR_15 = 0;
 if (VAR_9->tx_cmd_sz > 0)
  VAR_15 = FUNC_5(VAR_10, VAR_9->rx_cmd, VAR_9->tx_cmd,
      VAR_9->tx_cmd_sz, VAR_9->rx_cmd_sz);
 if (VAR_9->tx_data_sz > 0 && VAR_15 == 0)
  VAR_15 = FUNC_5(VAR_10, VAR_9->rx_data, VAR_9->tx_data,
      VAR_9->tx_data_sz, VAR_9->rx_data_sz);

 if (VAR_11 & VAR_6)
  FUNC_3(VAR_10, VAR_11, 1);
 else
  FUNC_3(VAR_10, VAR_11, 0);


 VAR_14 = FUNC_0(VAR_10, VAR_0);
 VAR_14 &= ~VAR_1;
 FUNC_1(VAR_10, VAR_0, VAR_14);

 FUNC_11(&VAR_10->mtx);

 return (VAR_15);
}
