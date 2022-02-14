
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
 int VAR_4 ;

 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct cdev *VAR_8, u_long VAR_9, caddr_t VAR_10, int VAR_11, struct thread *VAR_12)
{
 PHPT_IOCTL_PARAM VAR_13=(PHPT_IOCTL_PARAM)VAR_10;
 IOCTL_ARG VAR_14;
 HPT_U32 VAR_15 = 0;

 switch (VAR_9){
 case 129:
 {
  if (VAR_13->Magic == VAR_2 || VAR_13->Magic == VAR_3) {
   FUNC_0(("<8>ioctl=%x in=%p len=%d out=%p len=%d\n",
    VAR_13->dwIoControlCode,
    VAR_13->lpInBuffer,
    VAR_13->nInBufferSize,
    VAR_13->lpOutBuffer,
    VAR_13->nOutBufferSize));

  FUNC_7(&VAR_14, 0, sizeof(VAR_14));

  VAR_14.dwIoControlCode = VAR_13->dwIoControlCode;
  VAR_14.nInBufferSize = VAR_13->nInBufferSize;
  VAR_14.nOutBufferSize = VAR_13->nOutBufferSize;
  VAR_14.lpBytesReturned = &VAR_15;

  if (VAR_14.nInBufferSize) {
   VAR_14.lpInBuffer = FUNC_6(VAR_14.nInBufferSize, VAR_5, VAR_6);
   if (!VAR_14.lpInBuffer)
    goto invalid;
   if (FUNC_1((void*)VAR_13->lpInBuffer,
     VAR_14.lpInBuffer, VAR_13->nInBufferSize))
    goto invalid;
  }

  if (VAR_14.nOutBufferSize) {
   VAR_14.lpOutBuffer = FUNC_6(VAR_14.nOutBufferSize, VAR_5, VAR_6 | VAR_7);
   if (!VAR_14.lpOutBuffer)
    goto invalid;
  }


  FUNC_8(&VAR_1);


  FUNC_4(&VAR_14);


  FUNC_9(&VAR_1);


  if (VAR_14.result==VAR_4) {
   if (VAR_13->nOutBufferSize) {
    if (FUNC_2(VAR_14.lpOutBuffer,
     (void*)VAR_13->lpOutBuffer, VAR_13->nOutBufferSize))
     goto invalid;
   }
   if (VAR_13->lpBytesReturned) {
    if (FUNC_2(&VAR_15,
     (void*)VAR_13->lpBytesReturned, sizeof(HPT_U32)))
     goto invalid;
   }
   if (VAR_14.lpInBuffer) FUNC_3(VAR_14.lpInBuffer, VAR_5);
   if (VAR_14.lpOutBuffer) FUNC_3(VAR_14.lpOutBuffer, VAR_5);
   return 0;
  }
invalid:
  if (VAR_14.lpInBuffer) FUNC_3(VAR_14.lpInBuffer, VAR_5);
  if (VAR_14.lpOutBuffer) FUNC_3(VAR_14.lpOutBuffer, VAR_5);
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
