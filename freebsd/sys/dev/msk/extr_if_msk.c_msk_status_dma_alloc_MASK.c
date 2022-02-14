
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_stat_desc {int dummy; } ;
struct msk_softc {int msk_stat_count; scalar_t__ msk_stat_ring_paddr; int msk_dev; int msk_stat_ring; int msk_stat_map; int msk_stat_tag; } ;
struct msk_dmamap_arg {scalar_t__ msk_busaddr; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,struct msk_dmamap_arg*,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(struct msk_softc *VAR_9)
{
 struct msk_dmamap_arg VAR_10;
 bus_size_t VAR_11;
 int VAR_12, VAR_13;
 VAR_12 = 3 * VAR_5 + VAR_7;
 VAR_12 = FUNC_5(4096, FUNC_6(VAR_12, 1024));
 VAR_9->msk_stat_count = VAR_12;
 VAR_11 = VAR_12 * sizeof(struct msk_stat_desc);
 VAR_13 = FUNC_0(
      FUNC_3(VAR_9->msk_dev),
      VAR_6, 0,
      VAR_4,
      VAR_4,
      ((void*)0), ((void*)0),
      VAR_11,
      1,
      VAR_11,
      0,
      ((void*)0), ((void*)0),
      &VAR_9->msk_stat_tag);
 if (VAR_13 != 0) {
  FUNC_4(VAR_9->msk_dev,
      "failed to create status DMA tag\n");
  return (VAR_13);
 }


 VAR_13 = FUNC_2(VAR_9->msk_stat_tag,
     (void **)&VAR_9->msk_stat_ring, VAR_2 | VAR_0 |
     VAR_3, &VAR_9->msk_stat_map);
 if (VAR_13 != 0) {
  FUNC_4(VAR_9->msk_dev,
      "failed to allocate DMA'able memory for status ring\n");
  return (VAR_13);
 }

 VAR_10.msk_busaddr = 0;
 VAR_13 = FUNC_1(VAR_9->msk_stat_tag, VAR_9->msk_stat_map,
     VAR_9->msk_stat_ring, VAR_11, VAR_8, &VAR_10, VAR_1);
 if (VAR_13 != 0) {
  FUNC_4(VAR_9->msk_dev,
      "failed to load DMA'able memory for status ring\n");
  return (VAR_13);
 }
 VAR_9->msk_stat_ring_paddr = VAR_10.msk_busaddr;

 return (0);
}
