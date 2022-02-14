
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecore_iov_vf_mbx {int * offset; scalar_t__ reply_virt; } ;
struct ecore_vf_info {struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int **,int,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_1,
       struct ecore_ptt *VAR_2,
       struct ecore_vf_info *VAR_3,
       u16 VAR_4, u16 VAR_5, u8 VAR_6)
{
 struct ecore_iov_vf_mbx *VAR_7 = &VAR_3->vf_mbx;

 VAR_7->offset = (u8 *)VAR_7->reply_virt;

 FUNC_0(&VAR_7->offset, VAR_4, VAR_5);
 FUNC_0(&VAR_7->offset, VAR_0,
        sizeof(struct channel_list_end_tlv));

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
}
