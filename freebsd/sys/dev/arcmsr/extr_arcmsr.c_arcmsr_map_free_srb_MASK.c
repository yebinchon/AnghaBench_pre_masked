
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct CommandControlBlock {unsigned long cdb_phyaddr_low; int cdb_phyaddr_high; int smid; struct AdapterControlBlock* acb; int dm_segs_dmamap; } ;
struct TYPE_4__ {unsigned long phyaddr; } ;
struct AdapterControlBlock {int pci_unit; scalar_t__ adapter_type; unsigned long vir2phy_offset; scalar_t__ pCompletionQ; struct CommandControlBlock** psrb_pool; struct CommandControlBlock** srbworkingQ; int acb_flags; int dm_segs_dmat; scalar_t__ uncacheptr; TYPE_1__ srb_phyaddr; } ;
typedef scalar_t__ pCompletion_Q ;
struct TYPE_5__ {scalar_t__ ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_6, bus_dma_segment_t *VAR_7, int VAR_8, int VAR_9)
{
 struct AdapterControlBlock *VAR_10 = VAR_6;
 struct CommandControlBlock *VAR_11;
 u_int32_t VAR_12;
 unsigned long VAR_13 = (unsigned long)VAR_7->ds_addr;

 VAR_10->srb_phyaddr.phyaddr = VAR_13;
 VAR_11 = (struct CommandControlBlock *)VAR_10->uncacheptr;
 for(VAR_12=0; VAR_12 < VAR_4; VAR_12++) {
  if(FUNC_0(VAR_10->dm_segs_dmat,
             0, &VAR_11->dm_segs_dmamap) != 0) {
   VAR_10->acb_flags |= VAR_3;
   FUNC_1("arcmsr%d:"
   " srb dmamap bus_dmamap_create error\n", VAR_10->pci_unit);
   return;
  }
  if((VAR_10->adapter_type == VAR_0) || (VAR_10->adapter_type == VAR_1)
    || (VAR_10->adapter_type == VAR_2))
  {
   VAR_11->cdb_phyaddr_low = VAR_13;
   VAR_11->cdb_phyaddr_high = (u_int32_t)((VAR_13 >> 16) >> 16);
  }
  else
   VAR_11->cdb_phyaddr_low = VAR_13 >> 5;
  VAR_11->acb = VAR_10;
  VAR_11->smid = VAR_12 << 16;
  VAR_10->srbworkingQ[VAR_12] = VAR_10->psrb_pool[VAR_12] = VAR_11;
  VAR_13 = VAR_13 + VAR_5;
  VAR_11 = (struct CommandControlBlock *)((unsigned long)VAR_11 + VAR_5);
 }
 if (VAR_10->adapter_type == VAR_2)
  VAR_10->pCompletionQ = (pCompletion_Q)VAR_11;
 VAR_10->vir2phy_offset = (unsigned long)VAR_11 - (unsigned long)VAR_13;
}
