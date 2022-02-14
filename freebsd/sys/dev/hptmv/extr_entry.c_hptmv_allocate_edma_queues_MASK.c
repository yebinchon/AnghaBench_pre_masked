
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_4__ {int adapterId; } ;
struct TYPE_5__ {int requestsArrayBaseDmaAddr; int requestsArrayBaseDmaAlignedAddr; int responsesArrayBaseDmaAddr; int responsesArrayBaseDmaAlignedAddr; int * responsesArrayBaseAddr; int * requestsArrayBaseAddr; TYPE_1__ mvSataAdapter; int * responsesArrayBaseAlignedAddr; int * requestsArrayBaseAlignedAddr; } ;
typedef int MV_U8 ;
typedef TYPE_2__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int ,unsigned long) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(IAL_ADAPTER_T *VAR_7)
{
 VAR_7->requestsArrayBaseAddr = (MV_U8 *)FUNC_2(VAR_5,
   VAR_2, VAR_3, 0, 0xffffffff, VAR_4, 0ul);
 if (VAR_7->requestsArrayBaseAddr == ((void*)0))
 {
  FUNC_0("RR18xx[%d]: Failed to allocate memory for EDMA request"
     " queues\n", VAR_7->mvSataAdapter.adapterId);
  return -1;
 }
 VAR_7->requestsArrayBaseDmaAddr = FUNC_3(VAR_7->requestsArrayBaseAddr);
 VAR_7->requestsArrayBaseAlignedAddr = VAR_7->requestsArrayBaseAddr;
 VAR_7->requestsArrayBaseAlignedAddr += VAR_0;
 VAR_7->requestsArrayBaseAlignedAddr = (MV_U8 *)
  (((ULONG_PTR)VAR_7->requestsArrayBaseAlignedAddr) & ~(ULONG_PTR)(VAR_0 - 1));
 VAR_7->requestsArrayBaseDmaAlignedAddr = VAR_7->requestsArrayBaseDmaAddr;
 VAR_7->requestsArrayBaseDmaAlignedAddr += VAR_0;
 VAR_7->requestsArrayBaseDmaAlignedAddr &= ~(ULONG_PTR)(VAR_0 - 1);

 if ((VAR_7->requestsArrayBaseDmaAlignedAddr - VAR_7->requestsArrayBaseDmaAddr) !=
  (VAR_7->requestsArrayBaseAlignedAddr - VAR_7->requestsArrayBaseAddr))
 {
  FUNC_0("RR18xx[%d]: Error in Request Quueues Alignment\n",
     VAR_7->mvSataAdapter.adapterId);
  FUNC_1(VAR_7->requestsArrayBaseAddr, VAR_5, VAR_2);
  return -1;
 }

 VAR_7->responsesArrayBaseAddr = (MV_U8 *)FUNC_2(VAR_6,
   VAR_2, VAR_3, 0, 0xffffffff, VAR_4, 0ul);
 if (VAR_7->responsesArrayBaseAddr == ((void*)0))
 {
  FUNC_0("RR18xx[%d]: Failed to allocate memory for EDMA response"
     " queues\n", VAR_7->mvSataAdapter.adapterId);
  FUNC_1(VAR_7->requestsArrayBaseAddr, VAR_6, VAR_2);
  return -1;
 }
 VAR_7->responsesArrayBaseDmaAddr = FUNC_3(VAR_7->responsesArrayBaseAddr);
 VAR_7->responsesArrayBaseAlignedAddr = VAR_7->responsesArrayBaseAddr;
 VAR_7->responsesArrayBaseAlignedAddr += VAR_1;
 VAR_7->responsesArrayBaseAlignedAddr = (MV_U8 *)
  (((ULONG_PTR)VAR_7->responsesArrayBaseAlignedAddr) & ~(ULONG_PTR)(VAR_1 - 1));
 VAR_7->responsesArrayBaseDmaAlignedAddr = VAR_7->responsesArrayBaseDmaAddr;
 VAR_7->responsesArrayBaseDmaAlignedAddr += VAR_1;
 VAR_7->responsesArrayBaseDmaAlignedAddr &= ~(ULONG_PTR)(VAR_1 - 1);

 if ((VAR_7->responsesArrayBaseDmaAlignedAddr - VAR_7->responsesArrayBaseDmaAddr) !=
  (VAR_7->responsesArrayBaseAlignedAddr - VAR_7->responsesArrayBaseAddr))
 {
  FUNC_0("RR18xx[%d]: Error in Response Queues Alignment\n",
     VAR_7->mvSataAdapter.adapterId);
  FUNC_1(VAR_7->requestsArrayBaseAddr, VAR_5, VAR_2);
  FUNC_1(VAR_7->responsesArrayBaseAddr, VAR_6, VAR_2);
  return -1;
 }
 return 0;
}
