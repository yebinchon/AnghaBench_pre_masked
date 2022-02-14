
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct vtmmio_virtqueue {int vtv_no_intr; struct virtqueue* vtv_vq; } ;
struct vtmmio_softc {scalar_t__ vtmmio_nvqs; struct vtmmio_virtqueue* vtmmio_vqs; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct vtmmio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 struct vtmmio_virtqueue* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int,int,int,int ,struct vq_alloc_info*,struct virtqueue**) ;
 int FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct vtmmio_softc*) ;
 int FUNC_6 (struct vtmmio_softc*,int ) ;
 int FUNC_7 (struct vtmmio_softc*,int) ;
 int FUNC_8 (struct vtmmio_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_14, int VAR_15, int VAR_16,
    struct vq_alloc_info *VAR_17)
{
 struct vtmmio_virtqueue *VAR_18;
 struct vq_alloc_info *VAR_19;
 struct vtmmio_softc *VAR_20;
 struct virtqueue *VAR_21;
 uint32_t VAR_22;
 int VAR_23, VAR_24;

 VAR_20 = FUNC_0(VAR_14);

 if (VAR_20->vtmmio_nvqs != 0)
  return (VAR_0);
 if (VAR_16 <= 0)
  return (VAR_1);

 VAR_20->vtmmio_vqs = FUNC_2(VAR_16 * sizeof(struct vtmmio_virtqueue),
     VAR_3, VAR_4 | VAR_5);
 if (VAR_20->vtmmio_vqs == ((void*)0))
  return (VAR_2);

 FUNC_8(VAR_20, VAR_7,
     (1 << VAR_6));

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  VAR_18 = &VAR_20->vtmmio_vqs[VAR_23];
  VAR_19 = &VAR_17[VAR_23];

  FUNC_8(VAR_20, VAR_12, VAR_23);

  FUNC_7(VAR_20, VAR_23);
  VAR_22 = FUNC_6(VAR_20, VAR_10);

  VAR_24 = FUNC_3(VAR_14, VAR_23, VAR_22,
      VAR_13, ~(vm_paddr_t)0, VAR_19, &VAR_21);
  if (VAR_24) {
   FUNC_1(VAR_14,
       "cannot allocate virtqueue %d: %d\n",
       VAR_23, VAR_24);
   break;
  }

  FUNC_8(VAR_20, VAR_9, VAR_22);
  FUNC_8(VAR_20, VAR_8,
      VAR_13);




  FUNC_8(VAR_20, VAR_11,
      FUNC_4(VAR_21) >> VAR_6);

  VAR_18->vtv_vq = *VAR_19->vqai_vq = VAR_21;
  VAR_18->vtv_no_intr = VAR_19->vqai_intr == ((void*)0);

  VAR_20->vtmmio_nvqs++;
 }

 if (VAR_24)
  FUNC_5(VAR_20);

 return (VAR_24);
}
