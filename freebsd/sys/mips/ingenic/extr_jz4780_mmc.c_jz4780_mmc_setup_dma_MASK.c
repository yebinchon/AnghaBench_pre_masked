
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_mmc_softc {int sc_dma_map_err; int sc_dma_buf_map; int sc_dma_buf_tag; int sc_dev; int sc_dma_desc; int sc_dma_map; int sc_dma_tag; } ;
struct jz4780_mmc_dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct jz4780_mmc_softc*,int ) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct jz4780_mmc_softc *VAR_8)
{
 int VAR_9, VAR_10;


 VAR_9 = sizeof(struct jz4780_mmc_dma_desc) * VAR_6;
 VAR_10 = FUNC_0(FUNC_4(VAR_8->sc_dev), 1, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_9, 1, VAR_9, 0, ((void*)0), ((void*)0), &VAR_8->sc_dma_tag);
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_3(VAR_8->sc_dma_tag, &VAR_8->sc_dma_desc,
     VAR_1 | VAR_2, &VAR_8->sc_dma_map);
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_2(VAR_8->sc_dma_tag, VAR_8->sc_dma_map,
     VAR_8->sc_dma_desc, VAR_9, VAR_7, VAR_8, 0);
 if (VAR_10)
  return (VAR_10);
 if (VAR_8->sc_dma_map_err)
  return (VAR_8->sc_dma_map_err);


 VAR_10 = FUNC_0(FUNC_4(VAR_8->sc_dev), 1, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_5 * VAR_6, VAR_6,
     VAR_5, VAR_0, ((void*)0), ((void*)0),
     &VAR_8->sc_dma_buf_tag);
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_1(VAR_8->sc_dma_buf_tag, 0,
     &VAR_8->sc_dma_buf_map);
 if (VAR_10)
  return (VAR_10);

 return (0);
}
