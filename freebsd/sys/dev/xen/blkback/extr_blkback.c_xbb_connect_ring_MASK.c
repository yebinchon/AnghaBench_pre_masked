
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {size_t va; size_t ring_pages; size_t gnt_addr; int evtchn; int * bus_addr; int * handle; int * ring_ref; } ;
struct TYPE_3__ {int x86_64; int x86_32; int native; } ;
struct xbb_softc {int flags; size_t kva; size_t kva_size; size_t gnt_base_addr; int abi; int dev; int xen_intr_handle; TYPE_2__ ring_config; int otherend_id; TYPE_1__ rings; } ;
struct gnttab_map_grant_ref {size_t host_addr; scalar_t__ status; int dev_bus_addr; int handle; int dom; int ref; int flags; } ;
typedef int blkif_x86_64_sring_t ;
typedef int blkif_x86_32_sring_t ;
typedef int blkif_sring_t ;


 int FUNC_0 (int *,int *,size_t) ;



 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct gnttab_map_grant_ref*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct xbb_softc*) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ,int ,int *,struct xbb_softc*,int,int *) ;
 int FUNC_6 (int ,int,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct xbb_softc *VAR_9)
{
 struct gnttab_map_grant_ref VAR_10[VAR_7];
 struct gnttab_map_grant_ref *VAR_11;
 u_int VAR_12;
 int VAR_13;

 if ((VAR_9->flags & VAR_6) != 0)
  return (0);





 VAR_9->ring_config.va = VAR_9->kva
       + (VAR_9->kva_size
        - (VAR_9->ring_config.ring_pages * VAR_5));
 VAR_9->ring_config.gnt_addr = VAR_9->gnt_base_addr
      + (VAR_9->kva_size
       - (VAR_9->ring_config.ring_pages * VAR_5));

 for (VAR_12 = 0, VAR_11 = VAR_10;
      VAR_12 < VAR_9->ring_config.ring_pages;
      VAR_12++, VAR_11++) {

  VAR_11->host_addr = VAR_9->ring_config.gnt_addr
          + (VAR_12 * VAR_5);
  VAR_11->flags = VAR_1;
  VAR_11->ref = VAR_9->ring_config.ring_ref[VAR_12];
  VAR_11->dom = VAR_9->otherend_id;
 }

 VAR_13 = FUNC_2(VAR_2, VAR_10,
       VAR_9->ring_config.ring_pages);
 if (VAR_13)
  FUNC_3("blkback: Ring page grant table op failed (%d)", VAR_13);

 for (VAR_12 = 0, VAR_11 = VAR_10;
      VAR_12 < VAR_9->ring_config.ring_pages;
      VAR_12++, VAR_11++) {
  if (VAR_11->status != 0) {
   VAR_9->ring_config.va = 0;
   FUNC_6(VAR_9->dev, VAR_0,
      "Ring shared page mapping failed. "
      "Status %d.", VAR_11->status);
   return (VAR_0);
  }
  VAR_9->ring_config.handle[VAR_12] = VAR_11->handle;
  VAR_9->ring_config.bus_addr[VAR_12] = VAR_11->dev_bus_addr;
 }


 switch (VAR_9->abi) {
 case 130:
 {
  blkif_sring_t *VAR_14;
  VAR_14 = (blkif_sring_t *)VAR_9->ring_config.va;
  FUNC_0(&VAR_9->rings.native, VAR_14,
          VAR_9->ring_config.ring_pages * VAR_5);
  break;
 }
 case 129:
 {
  blkif_x86_32_sring_t *VAR_15;
  VAR_15 = (blkif_x86_32_sring_t *)VAR_9->ring_config.va;
  FUNC_0(&VAR_9->rings.x86_32, VAR_15,
          VAR_9->ring_config.ring_pages * VAR_5);
  break;
 }
 case 128:
 {
  blkif_x86_64_sring_t *VAR_16;
  VAR_16 = (blkif_x86_64_sring_t *)VAR_9->ring_config.va;
  FUNC_0(&VAR_9->rings.x86_64, VAR_16,
          VAR_9->ring_config.ring_pages * VAR_5);
  break;
 }
 default:
  FUNC_3("Unexpected blkif protocol ABI.");
 }

 VAR_9->flags |= VAR_6;

 VAR_13 = FUNC_5(VAR_9->dev,
       VAR_9->otherend_id,
       VAR_9->ring_config.evtchn,
       VAR_8,
                          ((void*)0),
              VAR_9,
       VAR_4 | VAR_3,
       &VAR_9->xen_intr_handle);
 if (VAR_13) {
  (void)FUNC_4(VAR_9);
  FUNC_6(VAR_9->dev, VAR_13, "binding event channel");
  return (VAR_13);
 }

 FUNC_1("rings connected!\n");

 return 0;
}
