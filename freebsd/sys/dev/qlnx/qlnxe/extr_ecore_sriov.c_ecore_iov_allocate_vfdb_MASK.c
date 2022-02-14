
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u16 ;
struct ecore_pf_iov {int mbx_msg_size; void* mbx_msg_virt_addr; int mbx_reply_size; void* mbx_reply_virt_addr; int bulletins_size; void* p_bulletins; scalar_t__ bulletins_phys; scalar_t__ mbx_reply_phys_addr; scalar_t__ mbx_msg_phys_addr; } ;
struct ecore_hwfn {TYPE_2__* p_dev; struct ecore_pf_iov* pf_iov_info; } ;
struct ecore_bulletin_content {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {TYPE_1__* p_iov_info; } ;
struct TYPE_3__ {int total_vfs; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,void*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (TYPE_2__*,scalar_t__*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_3)
{
 struct ecore_pf_iov *VAR_4 = VAR_3->pf_iov_info;
 void **VAR_5;
 u16 VAR_6 = 0;

 VAR_6 = VAR_3->p_dev->p_iov_info->total_vfs;

 FUNC_0(VAR_3, VAR_0,
     "ecore_iov_allocate_vfdb for %d VFs\n", VAR_6);


 VAR_4->mbx_msg_size = sizeof(union vfpf_tlvs) * VAR_6;
 VAR_5 = &VAR_4->mbx_msg_virt_addr;
 *VAR_5 = FUNC_1(VAR_3->p_dev,
         &VAR_4->mbx_msg_phys_addr,
         VAR_4->mbx_msg_size);
 if (!*VAR_5)
  return VAR_1;


 VAR_4->mbx_reply_size = sizeof(union pfvf_tlvs) * VAR_6;
 VAR_5 = &VAR_4->mbx_reply_virt_addr;
 *VAR_5 = FUNC_1(VAR_3->p_dev,
         &VAR_4->mbx_reply_phys_addr,
         VAR_4->mbx_reply_size);
 if (!*VAR_5)
  return VAR_1;

 VAR_4->bulletins_size = sizeof(struct ecore_bulletin_content) *
         VAR_6;
 VAR_5 = &VAR_4->p_bulletins;
 *VAR_5 = FUNC_1(VAR_3->p_dev,
         &VAR_4->bulletins_phys,
         VAR_4->bulletins_size);
 if (!*VAR_5)
  return VAR_1;

 FUNC_0(VAR_3, VAR_0,
     "PF's Requests mailbox [%p virt 0x%llx phys],  Response mailbox [%p virt 0x%llx phys] Bulletins [%p virt 0x%llx phys]\n",
     VAR_4->mbx_msg_virt_addr,
     (unsigned long long)VAR_4->mbx_msg_phys_addr,
     VAR_4->mbx_reply_virt_addr,
     (unsigned long long)VAR_4->mbx_reply_phys_addr,
     VAR_4->p_bulletins,
     (unsigned long long)VAR_4->bulletins_phys);

 return VAR_2;
}
