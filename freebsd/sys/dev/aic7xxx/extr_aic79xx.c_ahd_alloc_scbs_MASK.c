
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct scb_platform_data {int io_timer; TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct scb_platform_data* sense_map; struct scb_platform_data* sg_map; struct scb_platform_data* hscb_map; struct scb_platform_data* platform_data; void* busaddr; int * vaddr; } ;
struct scb_data {int numscbs; int scbs_left; int sgs_left; int sense_left; int sense_dmat; int sense_maps; int sg_dmat; int sg_maps; int hscb_dmat; int hscb_maps; } ;
struct scb {int io_timer; TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct scb* sense_map; struct scb* sg_map; struct scb* hscb_map; struct scb* platform_data; void* busaddr; int * vaddr; } ;
struct map_node {int io_timer; TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct map_node* sense_map; struct map_node* sg_map; struct map_node* hscb_map; struct map_node* platform_data; void* busaddr; int * vaddr; } ;
struct hardware_scb {int tag; int hscb_busaddr; } ;
struct ahd_softc {int flags; int buffer_dmat; struct scb_data scb_data; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_dma64_seg {int dummy; } ;
typedef void* bus_addr_t ;
struct TYPE_2__ {struct scb_platform_data* col_scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct scb_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct scb_platform_data*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_3 (struct ahd_softc*,int) ;
 int FUNC_4 (struct ahd_softc*,struct scb_platform_data*) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,int ,int ,int *) ;
 int FUNC_8 (struct ahd_softc*,int ,int ,int *,int,int ,void**,int ) ;
 scalar_t__ FUNC_9 (struct ahd_softc*,int ,void**,int,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct scb_platform_data*,int ) ;
 int VAR_12 ;
 struct scb_platform_data* FUNC_14 (int,int ,int ) ;
 int FUNC_15 (struct hardware_scb*,int ,int) ;
 int FUNC_16 (char*) ;

int
FUNC_17(struct ahd_softc *VAR_13)
{
 struct scb_data *VAR_14;
 struct scb *VAR_15;
 struct hardware_scb *VAR_16;
 struct map_node *VAR_17;
 struct map_node *VAR_18;
 struct map_node *VAR_19;
 uint8_t *VAR_20;
 uint8_t *VAR_21;
 bus_addr_t VAR_22;
 bus_addr_t VAR_23;
 bus_addr_t VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_14 = &VAR_13->scb_data;
 if (VAR_14->numscbs >= VAR_1)

  return (0);

 if (VAR_14->scbs_left != 0) {
  int VAR_27;

  VAR_27 = (VAR_8 / sizeof(*VAR_16)) - VAR_14->scbs_left;
  VAR_17 = FUNC_1(&VAR_14->hscb_maps);
  VAR_16 = &((struct hardware_scb *)VAR_17->vaddr)[VAR_27];
  VAR_22 = VAR_17->busaddr + (VAR_27 * sizeof(*VAR_16));
 } else {
  VAR_17 = FUNC_14(sizeof(*VAR_17), VAR_6, VAR_7);

  if (VAR_17 == ((void*)0))
   return (0);


  if (FUNC_9(VAR_13, VAR_14->hscb_dmat,
         (void **)&VAR_17->vaddr,
         VAR_5 | VAR_4,
         &VAR_17->dmamap) != 0) {
   FUNC_13(VAR_17, VAR_6);
   return (0);
  }

  FUNC_2(&VAR_14->hscb_maps, VAR_17, VAR_12);

  FUNC_8(VAR_13, VAR_14->hscb_dmat, VAR_17->dmamap,
    VAR_17->vaddr, VAR_8, VAR_11,
    &VAR_17->busaddr, 0);

  VAR_16 = (struct hardware_scb *)VAR_17->vaddr;
  VAR_22 = VAR_17->busaddr;
  VAR_14->scbs_left = VAR_8 / sizeof(*VAR_16);
 }

 if (VAR_14->sgs_left != 0) {
  int VAR_28;

  VAR_28 = ((FUNC_5(VAR_13) / FUNC_6(VAR_13))
         - VAR_14->sgs_left) * FUNC_6(VAR_13);
  VAR_18 = FUNC_1(&VAR_14->sg_maps);
  VAR_20 = VAR_18->vaddr + VAR_28;
  VAR_23 = VAR_18->busaddr + VAR_28;
 } else {
  VAR_18 = FUNC_14(sizeof(*VAR_18), VAR_6, VAR_7);

  if (VAR_18 == ((void*)0))
   return (0);


  if (FUNC_9(VAR_13, VAR_14->sg_dmat,
         (void **)&VAR_18->vaddr,
         VAR_5 | VAR_4,
         &VAR_18->dmamap) != 0) {
   FUNC_13(VAR_18, VAR_6);
   return (0);
  }

  FUNC_2(&VAR_14->sg_maps, VAR_18, VAR_12);

  FUNC_8(VAR_13, VAR_14->sg_dmat, VAR_18->dmamap,
    VAR_18->vaddr, FUNC_5(VAR_13),
    VAR_11, &VAR_18->busaddr, 0);

  VAR_20 = VAR_18->vaddr;
  VAR_23 = VAR_18->busaddr;
  VAR_14->sgs_left =
      FUNC_5(VAR_13) / FUNC_6(VAR_13);




 }

 if (VAR_14->sense_left != 0) {
  int VAR_29;

  VAR_29 = VAR_8 - (VAR_2 * VAR_14->sense_left);
  VAR_19 = FUNC_1(&VAR_14->sense_maps);
  VAR_21 = VAR_19->vaddr + VAR_29;
  VAR_24 = VAR_19->busaddr + VAR_29;
 } else {
  VAR_19 = FUNC_14(sizeof(*VAR_19), VAR_6, VAR_7);

  if (VAR_19 == ((void*)0))
   return (0);


  if (FUNC_9(VAR_13, VAR_14->sense_dmat,
         (void **)&VAR_19->vaddr,
         VAR_5, &VAR_19->dmamap) != 0) {
   FUNC_13(VAR_19, VAR_6);
   return (0);
  }

  FUNC_2(&VAR_14->sense_maps, VAR_19, VAR_12);

  FUNC_8(VAR_13, VAR_14->sense_dmat, VAR_19->dmamap,
    VAR_19->vaddr, VAR_8, VAR_11,
    &VAR_19->busaddr, 0);

  VAR_21 = VAR_19->vaddr;
  VAR_24 = VAR_19->busaddr;
  VAR_14->sense_left = VAR_8 / VAR_2;




 }

 VAR_25 = FUNC_0(VAR_14->sense_left, VAR_14->scbs_left);
 VAR_25 = FUNC_0(VAR_25, VAR_14->sgs_left);
 VAR_25 = FUNC_0(VAR_25, (VAR_1 - VAR_14->numscbs));
 VAR_14->sense_left -= VAR_25;
 VAR_14->scbs_left -= VAR_25;
 VAR_14->sgs_left -= VAR_25;
 for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
  struct scb_platform_data *VAR_30;
  u_int VAR_31;




  VAR_15 = (struct scb *)FUNC_14(sizeof(*VAR_15),
      VAR_6, VAR_7);
  if (VAR_15 == ((void*)0))
   break;

  VAR_30 = (struct scb_platform_data *)FUNC_14(sizeof(*VAR_30),
          VAR_6, VAR_7);
  if (VAR_30 == ((void*)0)) {
   FUNC_13(VAR_15, VAR_6);
   break;
  }
  VAR_15->platform_data = VAR_30;
  VAR_15->hscb_map = VAR_17;
  VAR_15->sg_map = VAR_18;
  VAR_15->sense_map = VAR_19;
  VAR_15->sg_list = VAR_20;
  VAR_15->sense_data = VAR_21;
  VAR_15->sense_busaddr = VAR_24;
  FUNC_15(VAR_16, 0, sizeof(*VAR_16));
  VAR_15->hscb = VAR_16;
  VAR_16->hscb_busaddr = FUNC_11(VAR_22);





  VAR_15->sg_list_busaddr = VAR_23;
  if ((VAR_13->flags & VAR_0) != 0)
   VAR_15->sg_list_busaddr
       += sizeof(struct ahd_dma64_seg);
  else
   VAR_15->sg_list_busaddr += sizeof(struct ahd_dma_seg);
  VAR_15->ahd_softc = VAR_13;
  VAR_15->flags = VAR_9;
  VAR_15->hscb->tag = FUNC_10(VAR_14->numscbs);
  VAR_31 = VAR_14->numscbs ^ 0x100;
  VAR_15->col_scb = FUNC_3(VAR_13, VAR_31);
  if (VAR_15->col_scb != ((void*)0))
   VAR_15->col_scb->col_scb = VAR_15;
  FUNC_12(&VAR_15->io_timer);
  FUNC_4(VAR_13, VAR_15);
  VAR_16++;
  VAR_22 += sizeof(*VAR_16);
  VAR_20 += FUNC_6(VAR_13);
  VAR_23 += FUNC_6(VAR_13);
  VAR_21 += VAR_2;
  VAR_24 += VAR_2;
  VAR_14->numscbs++;
 }
 return (VAR_26);
}
