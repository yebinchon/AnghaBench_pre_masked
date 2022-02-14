
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {scalar_t__ xfer_len; } ;
struct mmc_command {struct mmc_data* data; } ;
struct dwmmc_softc {int fifo_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dwmmc_softc*,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct dwmmc_softc *VAR_5, struct mmc_command *VAR_6)
{
 struct mmc_data *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->data;
 VAR_7->xfer_len = 0;

 VAR_8 = (VAR_0 << VAR_2);
 VAR_8 |= ((VAR_5->fifo_depth / 2) - 1) << VAR_3;
 VAR_8 |= (VAR_5->fifo_depth / 2) << VAR_4;

 FUNC_0(VAR_5, VAR_1, VAR_8);
 FUNC_1();

 return (0);
}
