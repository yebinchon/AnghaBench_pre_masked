
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {uintptr_t xbd_ring_pages; int xbd_dev; int xen_intr_handle; int * xbd_ring_ref; int xbd_ring; } ;
typedef int ring_ref_name ;
typedef int blkif_sring_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 uintptr_t VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int * FUNC_2 (uintptr_t,int ,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (uintptr_t) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int *,int ,struct xbd_softc*,int,int *) ;
 int FUNC_6 (int ,int,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int ,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_11(struct xbd_softc *VAR_10)
{
 blkif_sring_t *VAR_11;
 uintptr_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_10->xbd_ring_pages * VAR_7, VAR_4,
     VAR_3|VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_10->xbd_dev, VAR_0, "allocating shared ring");
  return (VAR_0);
 }
 FUNC_1(VAR_11);
 FUNC_0(&VAR_10->xbd_ring, VAR_11, VAR_10->xbd_ring_pages * VAR_7);

 for (VAR_14 = 0, VAR_12 = (uintptr_t)VAR_11;
      VAR_14 < VAR_10->xbd_ring_pages;
      VAR_14++, VAR_12 += VAR_7) {

  VAR_13 = FUNC_9(VAR_10->xbd_dev,
      (FUNC_4(VAR_12) >> VAR_6),
      &VAR_10->xbd_ring_ref[VAR_14]);
  if (VAR_13) {
   FUNC_6(VAR_10->xbd_dev, VAR_13,
       "granting ring_ref(%d)", VAR_14);
   return (VAR_13);
  }
 }
 if (VAR_10->xbd_ring_pages == 1) {
  VAR_13 = FUNC_10(VAR_8, FUNC_7(VAR_10->xbd_dev),
      "ring-ref", "%u", VAR_10->xbd_ring_ref[0]);
  if (VAR_13) {
   FUNC_6(VAR_10->xbd_dev, VAR_13,
       "writing %s/ring-ref",
       FUNC_7(VAR_10->xbd_dev));
   return (VAR_13);
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_10->xbd_ring_pages; VAR_14++) {
   char VAR_15[]= "ring_refXX";

   FUNC_3(VAR_15, sizeof(VAR_15),
       "ring-ref%u", VAR_14);
   VAR_13 = FUNC_10(VAR_8, FUNC_7(VAR_10->xbd_dev),
        VAR_15, "%u", VAR_10->xbd_ring_ref[VAR_14]);
   if (VAR_13) {
    FUNC_6(VAR_10->xbd_dev, VAR_13,
        "writing %s/%s",
        FUNC_7(VAR_10->xbd_dev),
        VAR_15);
    return (VAR_13);
   }
  }
 }

 VAR_13 = FUNC_5(VAR_10->xbd_dev,
     FUNC_8(VAR_10->xbd_dev), ((void*)0), VAR_9, VAR_10,
     VAR_2 | VAR_1, &VAR_10->xen_intr_handle);
 if (VAR_13) {
  FUNC_6(VAR_10->xbd_dev, VAR_13,
      "xen_intr_alloc_and_bind_local_port failed");
  return (VAR_13);
 }

 return (0);
}
