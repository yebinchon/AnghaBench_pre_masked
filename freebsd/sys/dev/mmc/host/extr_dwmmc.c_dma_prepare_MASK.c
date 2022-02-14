
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int len; int data; } ;
struct mmc_command {struct mmc_data* data; } ;
struct dwmmc_softc {int fifo_depth; int buf_map; int buf_tag; int desc_map; int desc_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dwmmc_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct dwmmc_softc*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct dwmmc_softc*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct dwmmc_softc *VAR_20, struct mmc_command *VAR_21)
{
 struct mmc_data *VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_22 = VAR_21->data;

 VAR_24 = FUNC_0(VAR_20, VAR_15);
 VAR_24 &= ~(VAR_17 | VAR_16);
 FUNC_1(VAR_20, VAR_15, VAR_24);

 VAR_23 = FUNC_2(VAR_20->buf_tag, VAR_20->buf_map,
  VAR_22->data, VAR_22->len, VAR_19,
  VAR_20, VAR_2);
 if (VAR_23 != 0)
  FUNC_4("dmamap_load failed\n");


 FUNC_3(VAR_20->desc_tag, VAR_20->desc_map,
     VAR_1);

 if (VAR_22->flags & VAR_4)
  FUNC_3(VAR_20->buf_tag, VAR_20->buf_map,
   VAR_1);
 else
  FUNC_3(VAR_20->buf_tag, VAR_20->buf_map,
   VAR_0);

 VAR_24 = (VAR_3 << VAR_12);
 VAR_24 |= ((VAR_20->fifo_depth / 2) - 1) << VAR_13;
 VAR_24 |= (VAR_20->fifo_depth / 2) << VAR_14;

 FUNC_1(VAR_20, VAR_11, VAR_24);
 FUNC_5();

 VAR_24 = FUNC_0(VAR_20, VAR_8);
 VAR_24 |= (VAR_10 | VAR_9);
 FUNC_1(VAR_20, VAR_8, VAR_24);
 FUNC_5();

 VAR_24 = FUNC_0(VAR_20, VAR_5);
 VAR_24 |= (VAR_6 | VAR_7);
 FUNC_1(VAR_20, VAR_5, VAR_24);


 FUNC_1(VAR_20, VAR_18, 1);

 return (0);
}
