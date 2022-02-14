
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int64_t ;
typedef size_t u_int32_t ;
struct mrsas_softc {int prp_count; int mrsas_dev; int max_chain_frame_sz; int nvme_page_size; } ;
struct mrsas_mpt_cmd {int length; size_t chain_frame_phys_addr; scalar_t__ chain_frame; TYPE_1__* io_request; struct mrsas_softc* sc; } ;
typedef TYPE_2__* pMpi25IeeeSgeChain64_t ;
struct TYPE_7__ {size_t ds_addr; int ds_len; } ;
typedef TYPE_3__ bus_dma_segment_t ;
typedef size_t bus_addr_t ;
struct TYPE_6__ {size_t Address; int Flags; size_t Length; scalar_t__ NextChainOffset; } ;
struct TYPE_5__ {int SGL; } ;
typedef int MPI25_IEEE_SGE_CHAIN64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,size_t*) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mrsas_mpt_cmd *VAR_4, bus_dma_segment_t *VAR_5, int VAR_6)
{
 struct mrsas_softc *VAR_7 = VAR_4->sc;
 int VAR_8, VAR_9, VAR_10 = 0;
 pMpi25IeeeSgeChain64_t VAR_11, VAR_12, VAR_13;
 u_int64_t *VAR_14;
 bus_addr_t VAR_15;
 u_int64_t VAR_16;
 u_int32_t VAR_17, VAR_18, VAR_19 = 0;
 u_int32_t VAR_20;
 int VAR_21 = VAR_4->length;
 u_int32_t VAR_22 = FUNC_1(VAR_7->nvme_page_size,
     VAR_3);

 VAR_13 = (pMpi25IeeeSgeChain64_t) &VAR_4->io_request->SGL;
 VAR_17 = VAR_22 - 1;
 VAR_14 = (u_int64_t *) VAR_4->chain_frame;
 VAR_15 = VAR_4->chain_frame_phys_addr;
 FUNC_2(VAR_14, 0, VAR_7->max_chain_frame_sz);


 VAR_11 = (pMpi25IeeeSgeChain64_t)
     ((u_int8_t *)VAR_13 + sizeof(MPI25_IEEE_SGE_CHAIN64));


 VAR_11->Address = VAR_4->chain_frame_phys_addr;
 VAR_11->NextChainOffset = 0;
 VAR_11->Flags = VAR_0 |
     VAR_1 |
     VAR_2;



 VAR_12 = VAR_13;
 VAR_16 = VAR_5[VAR_19].ds_addr;
 VAR_8 = VAR_5[VAR_19].ds_len;
 VAR_19++;

 VAR_9 = (u_int32_t) (VAR_16 & VAR_17);
 VAR_20 = VAR_22 - VAR_9;

 VAR_12->Address = VAR_16;
 VAR_12->Length = VAR_20;

 VAR_21 -= VAR_20;

 if (VAR_8 > VAR_20) {
  VAR_16 += VAR_20;
  VAR_8 -= VAR_20;
 } else if (VAR_8 == VAR_20) {
  VAR_16 = VAR_5[VAR_19].ds_addr;
  VAR_8 = VAR_5[VAR_19].ds_len;
  VAR_19++;
 }

 for (;;) {

  VAR_9 = (u_int32_t) (VAR_16 & VAR_17);


  VAR_18 = (uintptr_t)(VAR_14 + 1) & VAR_17;
  if (!VAR_18) {
   FUNC_0(VAR_7->mrsas_dev, "BRCM: Put prp pointer as we are at page boundary"
     " ptr_sgl: 0x%p\n", VAR_14);
   VAR_15++;
   *VAR_14 = (uintptr_t)VAR_15;
   VAR_14++;
   VAR_10++;
  }

  *VAR_14 = VAR_16;
  VAR_14++;
  VAR_15++;
  VAR_10++;


  VAR_16 += VAR_22;
  VAR_8 -= VAR_22;
  VAR_21 -= VAR_22;

  if (VAR_21 <= 0)
   break;

  if (VAR_8 > 0)
   continue;

  VAR_16 = VAR_5[VAR_19].ds_addr;
  VAR_8 = VAR_5[VAR_19].ds_len;
  VAR_19++;
 }

 VAR_11->Length = VAR_10 * sizeof(u_int64_t);
 FUNC_3(&VAR_7->prp_count);

}
