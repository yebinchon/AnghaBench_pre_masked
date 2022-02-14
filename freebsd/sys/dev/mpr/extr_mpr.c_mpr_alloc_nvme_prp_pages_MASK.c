
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mpr_softc {int maxio; int prp_buffer_size; int prp_pages_free_lowwater; scalar_t__ prp_page_busaddr; scalar_t__ prp_pages; struct mpr_prp_page* prps; int prp_page_map; int prp_page_dmat; int mpr_parent_dmat; } ;
struct mpr_prp_page {scalar_t__ prp_page_busaddr; scalar_t__* prp_page; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (scalar_t__,int) ;
 struct mpr_prp_page* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct mpr_softc*,int ,char*) ;
 int FUNC_6 (struct mpr_softc*,struct mpr_prp_page*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_7(struct mpr_softc *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 struct mpr_prp_page *VAR_18;
 VAR_14 = VAR_12->maxio / VAR_9;
 VAR_13 = (VAR_9 / VAR_10) - 1;
 VAR_15 = (VAR_14 / VAR_13) + 1;

 VAR_12->prp_buffer_size = VAR_9 * VAR_15;
 VAR_16 = VAR_12->prp_buffer_size * VAR_8;
 if (FUNC_0( VAR_12->mpr_parent_dmat,
    4, 0,
    VAR_2,
    VAR_1,
    ((void*)0), ((void*)0),
    VAR_16,
    1,
    VAR_16,
    0,
    ((void*)0), ((void*)0),
    &VAR_12->prp_page_dmat)) {
  FUNC_5(VAR_12, VAR_4, "Cannot allocate NVMe PRP DMA "
      "tag\n");
  return (VAR_3);
 }
 if (FUNC_2(VAR_12->prp_page_dmat, (void **)&VAR_12->prp_pages,
     VAR_0, &VAR_12->prp_page_map)) {
  FUNC_5(VAR_12, VAR_4, "Cannot allocate NVMe PRP memory\n");
  return (VAR_3);
 }
 FUNC_3(VAR_12->prp_pages, VAR_16);
 FUNC_1(VAR_12->prp_page_dmat, VAR_12->prp_page_map, VAR_12->prp_pages,
     VAR_16, VAR_11, &VAR_12->prp_page_busaddr, 0);

 VAR_12->prps = FUNC_4(sizeof(struct mpr_prp_page) * VAR_8, VAR_5,
     VAR_6 | VAR_7);
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_18 = &VAR_12->prps[VAR_17];
  VAR_18->prp_page = (uint64_t *)(VAR_12->prp_pages +
      VAR_17 * VAR_12->prp_buffer_size);
  VAR_18->prp_page_busaddr = (uint64_t)(VAR_12->prp_page_busaddr +
      VAR_17 * VAR_12->prp_buffer_size);
  FUNC_6(VAR_12, VAR_18);
  VAR_12->prp_pages_free_lowwater++;
 }

 return (0);
}
