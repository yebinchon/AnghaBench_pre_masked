
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aw_mmc_softc {int aw_dma_map_err; int aw_dma_buf_map; int aw_dma_buf_tag; TYPE_1__* aw_mmc_conf; int aw_dev; int aw_dma_desc; int aw_dma_map; int aw_dma_tag; } ;
struct TYPE_2__ {int dma_xferlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct aw_mmc_softc*,int ) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct aw_mmc_softc *VAR_10)
{
 int VAR_11;


 VAR_11 = FUNC_0(
     FUNC_4(VAR_10->aw_dev),
     VAR_0, 0,
     VAR_8,
     VAR_7,
     ((void*)0), ((void*)0),
     VAR_1, 1,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_10->aw_dma_tag);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_3(VAR_10->aw_dma_tag, &VAR_10->aw_dma_desc,
     VAR_4 | VAR_5 | VAR_6,
     &VAR_10->aw_dma_map);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_2(VAR_10->aw_dma_tag,
     VAR_10->aw_dma_map,
     VAR_10->aw_dma_desc, VAR_1,
     VAR_9, VAR_10, 0);
 if (VAR_11)
  return (VAR_11);
 if (VAR_10->aw_dma_map_err)
  return (VAR_10->aw_dma_map_err);


 VAR_11 = FUNC_0(
     FUNC_4(VAR_10->aw_dev),
     VAR_0, 0,
     VAR_8,
     VAR_7,
     ((void*)0), ((void*)0),
     VAR_10->aw_mmc_conf->dma_xferlen *
     VAR_2, VAR_2,
     VAR_10->aw_mmc_conf->dma_xferlen,
     VAR_3,
     ((void*)0), ((void*)0),
     &VAR_10->aw_dma_buf_tag);
 if (VAR_11)
  return (VAR_11);
 VAR_11 = FUNC_1(VAR_10->aw_dma_buf_tag, 0,
     &VAR_10->aw_dma_buf_map);
 if (VAR_11)
  return (VAR_11);

 return (0);
}
