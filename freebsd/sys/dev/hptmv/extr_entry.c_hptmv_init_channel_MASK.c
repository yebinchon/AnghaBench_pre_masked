
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mvDmaResponseQueueEntry {int dummy; } ;
struct mvDmaRequestQueueEntry {int dummy; } ;
typedef int dma_addr_t ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_7__ {size_t adapterId; TYPE_3__** sataChannel; } ;
struct TYPE_10__ {int requestsArrayBaseDmaAlignedAddr; int responsesArrayBaseDmaAlignedAddr; TYPE_2__* mvChannel; TYPE_1__ mvSataAdapter; scalar_t__ responsesArrayBaseAlignedAddr; scalar_t__ requestsArrayBaseAlignedAddr; } ;
struct TYPE_9__ {size_t channelNumber; int requestQueuePciLowAddress; int responseQueuePciLowAddress; struct mvDmaResponseQueueEntry* responseQueue; scalar_t__ responseQueuePciHiAddress; struct mvDmaRequestQueueEntry* requestQueue; scalar_t__ requestQueuePciHiAddress; void* maxReadTransfer; void* lba48Address; } ;
struct TYPE_8__ {int online; } ;
typedef size_t MV_U8 ;
typedef TYPE_3__ MV_SATA_CHANNEL ;
typedef TYPE_4__ IAL_ADAPTER_T ;
typedef size_t HPT_U64 ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*,size_t,size_t,...) ;
 void* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_3__** VAR_5 ;

__attribute__((used)) static int
FUNC_2(IAL_ADAPTER_T *VAR_6, MV_U8 VAR_7)
{
 MV_SATA_CHANNEL *VAR_8;
 dma_addr_t VAR_9;
 dma_addr_t VAR_10;

 if (VAR_7 >= VAR_3)
 {
  FUNC_1("RR18xx[%d]: Bad channelNum=%d",
     VAR_6->mvSataAdapter.adapterId, VAR_7);
  return -1;
 }

 VAR_8 = &VAR_5[VAR_6->mvSataAdapter.adapterId][VAR_7];
 VAR_6->mvSataAdapter.sataChannel[VAR_7] = VAR_8;
 VAR_8->channelNumber = VAR_7;
 VAR_8->lba48Address = VAR_2;
 VAR_8->maxReadTransfer = VAR_2;

 VAR_8->requestQueue = (struct mvDmaRequestQueueEntry *)
           (VAR_6->requestsArrayBaseAlignedAddr + (VAR_7 * VAR_0));
 VAR_9 = VAR_6->requestsArrayBaseDmaAlignedAddr + (VAR_7 * VAR_0);


 FUNC_0(("requestQueue addr is 0x%llX", (HPT_U64)(ULONG_PTR)VAR_9));


 if (VAR_9 & 0x3ff)
 {
  FUNC_1("RR18xx[%d]: request queue allocated isn't 1 K aligned,"
     " dma_addr=%llx channel=%d\n", VAR_6->mvSataAdapter.adapterId,
     (HPT_U64)(ULONG_PTR)VAR_9, VAR_7);
  return -1;
 }
 VAR_8->requestQueuePciLowAddress = VAR_9;
 VAR_8->requestQueuePciHiAddress = 0;
 FUNC_0(("RR18xx[%d,%d]: request queue allocated: 0x%p",
     VAR_6->mvSataAdapter.adapterId, VAR_7,
     VAR_8->requestQueue));
 VAR_8->responseQueue = (struct mvDmaResponseQueueEntry *)
         (VAR_6->responsesArrayBaseAlignedAddr + (VAR_7 * VAR_1));
 VAR_10 = VAR_6->responsesArrayBaseDmaAlignedAddr + (VAR_7 * VAR_1);


 if (VAR_10 & 0xff)
 {
  FUNC_1("RR18xx[%d,%d]: response queue allocated isn't 256 byte "
     "aligned, dma_addr=%llx\n",
     VAR_6->mvSataAdapter.adapterId, VAR_7, (HPT_U64)(ULONG_PTR)VAR_10);
  return -1;
 }
 VAR_8->responseQueuePciLowAddress = VAR_10;
 VAR_8->responseQueuePciHiAddress = 0;
 FUNC_0(("RR18xx[%d,%d]: response queue allocated: 0x%p",
     VAR_6->mvSataAdapter.adapterId, VAR_7,
     VAR_8->responseQueue));

 VAR_6->mvChannel[VAR_7].online = VAR_4;
 return 0;
}
