
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_pf_iov {int bulletins_size; int bulletins_phys; scalar_t__ p_bulletins; int mbx_reply_size; int mbx_reply_phys_addr; scalar_t__ mbx_reply_virt_addr; int mbx_msg_size; int mbx_msg_phys_addr; scalar_t__ mbx_msg_virt_addr; } ;
struct ecore_hwfn {int p_dev; struct ecore_pf_iov* pf_iov_info; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_0)
{
 struct ecore_pf_iov *VAR_1 = VAR_0->pf_iov_info;

 if (VAR_0->pf_iov_info->mbx_msg_virt_addr)
  FUNC_0(VAR_0->p_dev,
           VAR_1->mbx_msg_virt_addr,
           VAR_1->mbx_msg_phys_addr,
           VAR_1->mbx_msg_size);

 if (VAR_0->pf_iov_info->mbx_reply_virt_addr)
  FUNC_0(VAR_0->p_dev,
           VAR_1->mbx_reply_virt_addr,
           VAR_1->mbx_reply_phys_addr,
           VAR_1->mbx_reply_size);

 if (VAR_1->p_bulletins)
  FUNC_0(VAR_0->p_dev,
           VAR_1->p_bulletins,
           VAR_1->bulletins_phys,
           VAR_1->bulletins_size);
}
