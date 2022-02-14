
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hpt_iop_request_ioctl_command {int bytes_returned; int * buf; } ;
struct hpt_iop_ioctl_param {scalar_t__ Magic; int nInBufferSize; int nOutBufferSize; scalar_t__ lpBytesReturned; scalar_t__ lpOutBuffer; scalar_t__ lpInBuffer; } ;
struct hpt_iop_hba {int config_done; scalar_t__ ctlcfg_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*,int *,int) ;
 scalar_t__ FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_3 (struct hpt_iop_hba*,struct hpt_iop_request_ioctl_command*,struct hpt_iop_ioctl_param*) ;
 int FUNC_4 (struct hpt_iop_hba*) ;

__attribute__((used)) static int FUNC_5(struct hpt_iop_hba *VAR_3,
    struct hpt_iop_ioctl_param *VAR_4)
{
 struct hpt_iop_request_ioctl_command *VAR_5;

 if ((VAR_4->Magic != VAR_1) &&
  (VAR_4->Magic != VAR_2))
  return VAR_0;

 VAR_5 = (struct hpt_iop_request_ioctl_command *)(VAR_3->ctlcfg_ptr);
 VAR_3->config_done = 0;
 FUNC_2(VAR_3);
 if (VAR_4->nInBufferSize)
  if (FUNC_0((void *)VAR_4->lpInBuffer,
    VAR_5->buf, VAR_4->nInBufferSize))
   goto invalid;
 if (FUNC_3(VAR_3, VAR_5, VAR_4))
  goto invalid;

 if (VAR_3->config_done == 1) {
  if (VAR_4->nOutBufferSize)
   if (FUNC_1(VAR_5->buf +
    ((VAR_4->nInBufferSize + 3) & ~3),
    (void *)VAR_4->lpOutBuffer,
    VAR_4->nOutBufferSize))
    goto invalid;

  if (VAR_4->lpBytesReturned)
   if (FUNC_1(&VAR_5->bytes_returned,
    (void*)VAR_4->lpBytesReturned,
    sizeof(u_int32_t)))
    goto invalid;
  FUNC_4(VAR_3);
  return 0;
 } else{
invalid:
  FUNC_4(VAR_3);
  return VAR_0;
 }
}
