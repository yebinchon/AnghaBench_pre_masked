
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint16_t ;
struct vtpci_virtqueue {int vtv_no_intr; struct virtqueue* vtv_vq; } ;
struct vtpci_softc {scalar_t__ vtpci_nvqs; struct vtpci_virtqueue* vtpci_vqs; } ;
struct vq_alloc_info {int * vqai_intr; struct virtqueue** vqai_vq; } ;
struct virtqueue {int dummy; } ;
typedef int device_t ;


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
 struct vtpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 struct vtpci_virtqueue* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int,int ,int ,int ,struct vq_alloc_info*,struct virtqueue**) ;
 int FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct vtpci_softc*) ;
 int FUNC_6 (struct vtpci_softc*,int ) ;
 int FUNC_7 (struct vtpci_softc*,int) ;
 int FUNC_8 (struct vtpci_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_10, int VAR_11, int VAR_12,
    struct vq_alloc_info *VAR_13)
{
 struct vtpci_softc *VAR_14;
 struct virtqueue *VAR_15;
 struct vtpci_virtqueue *VAR_16;
 struct vq_alloc_info *VAR_17;
 int VAR_18, VAR_19;
 uint16_t VAR_20;

 VAR_14 = FUNC_0(VAR_10);

 if (VAR_14->vtpci_nvqs != 0)
  return (VAR_0);
 if (VAR_12 <= 0)
  return (VAR_1);

 VAR_14->vtpci_vqs = FUNC_2(VAR_12 * sizeof(struct vtpci_virtqueue),
     VAR_3, VAR_4 | VAR_5);
 if (VAR_14->vtpci_vqs == ((void*)0))
  return (VAR_2);

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_16 = &VAR_14->vtpci_vqs[VAR_18];
  VAR_17 = &VAR_13[VAR_18];

  FUNC_7(VAR_14, VAR_18);
  VAR_20 = FUNC_6(VAR_14, VAR_7);

  VAR_19 = FUNC_3(VAR_10, VAR_18, VAR_20, VAR_9,
      ~(vm_paddr_t)0, VAR_17, &VAR_15);
  if (VAR_19) {
   FUNC_1(VAR_10,
       "cannot allocate virtqueue %d: %d\n", VAR_18, VAR_19);
   break;
  }

  FUNC_8(VAR_14, VAR_8,
      FUNC_4(VAR_15) >> VAR_6);

  VAR_16->vtv_vq = *VAR_17->vqai_vq = VAR_15;
  VAR_16->vtv_no_intr = VAR_17->vqai_intr == ((void*)0);

  VAR_14->vtpci_nvqs++;
 }

 if (VAR_19)
  FUNC_5(VAR_14);

 return (VAR_19);
}
