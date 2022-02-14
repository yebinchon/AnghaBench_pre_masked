
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int ioctl_args ;
typedef int caddr_t ;
struct TYPE_6__ {int nInBufferSize; int nOutBufferSize; int * lpOutBuffer; int * lpInBuffer; int result; int * lpBytesReturned; int dwIoControlCode; } ;
struct TYPE_5__ {int nInBufferSize; int nOutBufferSize; scalar_t__ lpBytesReturned; scalar_t__ lpOutBuffer; scalar_t__ lpInBuffer; int dwIoControlCode; int Magic; } ;
typedef TYPE_1__* PHPT_IOCTL_PARAM ;
typedef TYPE_2__ IOCTL_ARG ;
typedef int HPT_U32 ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct cdev *VAR_7, u_long VAR_8, caddr_t VAR_9, int VAR_10, struct thread *VAR_11)
{
 PHPT_IOCTL_PARAM VAR_12=(PHPT_IOCTL_PARAM)VAR_9;
 IOCTL_ARG VAR_13;
 HPT_U32 VAR_14 = 0;

 switch (VAR_8){
 case 129:
 {
  if (VAR_12->Magic == VAR_1 || VAR_12->Magic == VAR_2) {
   FUNC_0(("ioctl=%x in=%p len=%d out=%p len=%d\n",
    VAR_12->dwIoControlCode,
    VAR_12->lpInBuffer,
    VAR_12->nInBufferSize,
    VAR_12->lpOutBuffer,
    VAR_12->nOutBufferSize));

  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  VAR_13.dwIoControlCode = VAR_12->dwIoControlCode;
  VAR_13.nInBufferSize = VAR_12->nInBufferSize;
  VAR_13.nOutBufferSize = VAR_12->nOutBufferSize;
  VAR_13.lpBytesReturned = &VAR_14;

  if (VAR_13.nInBufferSize) {
   VAR_13.lpInBuffer = FUNC_6(VAR_13.nInBufferSize, VAR_4, VAR_5);
   if (!VAR_13.lpInBuffer)
    goto invalid;
   if (FUNC_1((void*)VAR_12->lpInBuffer,
     VAR_13.lpInBuffer, VAR_12->nInBufferSize))
    goto invalid;
  }

  if (VAR_13.nOutBufferSize) {
   VAR_13.lpOutBuffer = FUNC_6(VAR_13.nOutBufferSize, VAR_4, VAR_5 | VAR_6);
   if (!VAR_13.lpOutBuffer)
    goto invalid;
  }

  FUNC_4(&VAR_13);

  if (VAR_13.result==VAR_3) {
   if (VAR_12->nOutBufferSize) {
    if (FUNC_2(VAR_13.lpOutBuffer,
     (void*)VAR_12->lpOutBuffer, VAR_12->nOutBufferSize))
     goto invalid;
   }
   if (VAR_12->lpBytesReturned) {
    if (FUNC_2(&VAR_14,
     (void*)VAR_12->lpBytesReturned, sizeof(HPT_U32)))
     goto invalid;
   }
   if (VAR_13.lpInBuffer) FUNC_3(VAR_13.lpInBuffer, VAR_4);
   if (VAR_13.lpOutBuffer) FUNC_3(VAR_13.lpOutBuffer, VAR_4);
   return 0;
  }
invalid:
  if (VAR_13.lpInBuffer) FUNC_3(VAR_13.lpInBuffer, VAR_4);
  if (VAR_13.lpOutBuffer) FUNC_3(VAR_13.lpOutBuffer, VAR_4);
  return VAR_0;
 }
 return VAR_0;
 }

 case 128:
 {
  return FUNC_5();
 }
 default:
  FUNC_0(("invalid command!"));
  return VAR_0;
 }

}
