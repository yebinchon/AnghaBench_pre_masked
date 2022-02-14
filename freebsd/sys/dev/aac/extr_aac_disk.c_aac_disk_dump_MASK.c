
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
typedef int uint8_t ;
typedef int u_int32_t ;
struct disk {struct aac_disk* d_drv1; } ;
struct aac_softc {int aac_max_sectors; int flags; int aac_buffer_dmat; int aac_dev; TYPE_1__* aac_common; } ;
struct TYPE_8__ {scalar_t__ Size; } ;
struct aac_fib {TYPE_4__ Header; int * data; } ;
struct aac_disk {TYPE_3__* ad_container; struct aac_softc* ad_controller; } ;
struct aac_blockwrite64 {size_t BlockNumber; size_t SectorCount; scalar_t__ Flags; scalar_t__ Pad; int ContainerId; int Command; } ;
struct aac_blockwrite {size_t BlockNumber; size_t ByteCount; int Stable; int ContainerId; int Command; } ;
typedef size_t off_t ;
typedef int bus_dmamap_t ;
typedef int bus_dmamap_callback_t ;
struct TYPE_6__ {int ObjectId; } ;
struct TYPE_7__ {TYPE_2__ co_mntobj; } ;
struct TYPE_5__ {struct aac_fib ac_sync_fib; } ;


 size_t VAR_0 ;
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
 int * VAR_13 ;
 int * VAR_14 ;
 scalar_t__ FUNC_0 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,void*,size_t,int *,struct aac_fib*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(void *VAR_15, void *VAR_16, vm_offset_t VAR_17, off_t VAR_18, size_t VAR_19)
{
 struct aac_disk *VAR_20;
 struct aac_softc *VAR_21;
 struct aac_fib *VAR_22;
 size_t VAR_23, VAR_24;
 int VAR_25;
 static bus_dmamap_t VAR_26;
 static int VAR_27 = 0;
 struct disk *VAR_28;
 bus_dmamap_callback_t *VAR_29;
 u_int32_t VAR_30;

 VAR_28 = VAR_15;
 VAR_20 = VAR_28->d_drv1;

 if (VAR_20 == ((void*)0))
  return (VAR_8);

 VAR_21= VAR_20->ad_controller;

 if (!VAR_27) {
  VAR_27 = 1;
  if (FUNC_1(VAR_21->aac_buffer_dmat, 0, &VAR_26)) {
   FUNC_5(VAR_21->aac_dev,
       "bus_dmamap_create failed\n");
   return (VAR_10);
  }
 }


 VAR_22 = &VAR_21->aac_common->ac_sync_fib;

 while (VAR_19 > 0) {
  VAR_24 = VAR_21->aac_max_sectors << 9;
  VAR_23 = (VAR_19 > VAR_24) ? VAR_24 : VAR_19;
  if ((VAR_21->flags & VAR_1) == 0) {
   struct aac_blockwrite *VAR_31;
   VAR_31 = (struct aac_blockwrite *)&VAR_22->data[0];
   VAR_31->Command = VAR_11;
   VAR_31->ContainerId = VAR_20->ad_container->co_mntobj.ObjectId;
   VAR_31->BlockNumber = VAR_18 / VAR_0;
   VAR_31->ByteCount = VAR_23;
   VAR_31->Stable = VAR_5;
   VAR_30 = VAR_6;
   VAR_29 = VAR_13;
   VAR_25 = sizeof(struct aac_blockwrite);
  } else {
   struct aac_blockwrite64 *VAR_32;
   VAR_32 = (struct aac_blockwrite64 *)&VAR_22->data[0];
   VAR_32->Command = VAR_12;
   VAR_32->ContainerId = VAR_20->ad_container->co_mntobj.ObjectId;
   VAR_32->BlockNumber = VAR_18 / VAR_0;
   VAR_32->SectorCount = VAR_23 / VAR_0;
   VAR_32->Pad = 0;
   VAR_32->Flags = 0;
   VAR_30 = VAR_7;
   VAR_29 = VAR_14;
   VAR_25 = sizeof(struct aac_blockwrite64);
  }







  if (FUNC_2(VAR_21->aac_buffer_dmat, VAR_26, VAR_16,
      VAR_23, VAR_29, VAR_22, VAR_4) != 0)
   return (VAR_10);

  FUNC_3(VAR_21->aac_buffer_dmat, VAR_26,
      VAR_3);


  VAR_25 += VAR_22->Header.Size;

  if (FUNC_0(VAR_21, VAR_30, 0, VAR_22, VAR_25)) {
   FUNC_5(VAR_21->aac_dev,
        "Error dumping block 0x%jx\n",
        (uintmax_t)VAR_17);
   return (VAR_9);
  }

  FUNC_3(VAR_21->aac_buffer_dmat, VAR_26,
      VAR_2);

  FUNC_4(VAR_21->aac_buffer_dmat, VAR_26);

  VAR_19 -= VAR_23;
  VAR_18 += VAR_23;
  VAR_16 = (uint8_t *)VAR_16 + VAR_23;
 }

 return (0);
}
