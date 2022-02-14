
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {int adapterId; } ;
struct TYPE_8__ {int VBus; TYPE_1__ mvSataAdapter; struct TYPE_8__* next; } ;
struct TYPE_7__ {scalar_t__ Magic; scalar_t__ nInBufferSize; scalar_t__ nOutBufferSize; scalar_t__ lpBytesReturned; scalar_t__ lpOutBuffer; int dwIoControlCode; scalar_t__ lpInBuffer; } ;
typedef int * PUCHAR ;
typedef TYPE_2__* PHPT_IOCTL_PARAM ;
typedef TYPE_3__ IAL_ADAPTER_T ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int *,scalar_t__,int *,scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (void*,int *,scalar_t__) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *,int ) ;
 TYPE_3__* VAR_7 ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 char* VAR_8 ;
 int * FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_9)
{
 int VAR_10;







 char *VAR_11 = VAR_8;
 if (VAR_9 >= 6) {
  if (FUNC_8(VAR_11,"hpt ",4) == 0) {
   IAL_ADAPTER_T *VAR_12;
   VAR_10 = VAR_11[4]-'0';
   for (VAR_12=VAR_7; VAR_12; VAR_12=VAR_12->next) {
    if (VAR_12->mvSataAdapter.adapterId==VAR_10)
     return (VAR_10 = FUNC_6(VAR_12, VAR_11+6, VAR_9-6)) >= 0? VAR_10 : -VAR_1;
   }
   return -VAR_1;
  }
 }

 return -VAR_1;
}
