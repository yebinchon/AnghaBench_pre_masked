
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;
struct ecore_vf_iov {int pf2vf_reply; } ;
struct ecore_sp_vport_update_params {int dummy; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,size_t,int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ,size_t) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct ecore_hwfn *VAR_4,
        struct ecore_sp_vport_update_params *VAR_5)
{
 struct ecore_vf_iov *VAR_6 = VAR_4->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_7;
 u16 VAR_8;

 for (VAR_8 = VAR_0;
      VAR_8 < VAR_1;
      VAR_8++) {
  if (!FUNC_2(VAR_4, VAR_5, VAR_8))
   continue;

  VAR_7 = (struct pfvf_def_resp_tlv *)
    FUNC_1(VAR_4, VAR_6->pf2vf_reply,
          VAR_8);
  if (VAR_7 && VAR_7->hdr.status)
   FUNC_0(VAR_4, VAR_2,
       "TLV[%d] type %s Configuration %s\n",
       VAR_8, VAR_3[VAR_8],
       (VAR_7 && VAR_7->hdr.status) ? "succeeded"
          : "failed");
 }
}
