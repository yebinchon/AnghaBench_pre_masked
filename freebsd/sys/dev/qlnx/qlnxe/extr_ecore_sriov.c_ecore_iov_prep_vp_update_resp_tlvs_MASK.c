
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;
struct ecore_vf_info {int relative_vf_id; } ;
struct ecore_iov_vf_mbx {int * offset; scalar_t__ reply_virt; } ;
struct ecore_hwfn {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_4 ;
 struct pfvf_def_resp_tlv* FUNC_2 (int **,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct ecore_hwfn *VAR_5,
           struct ecore_vf_info *VAR_6,
           struct ecore_iov_vf_mbx *VAR_7,
           u8 VAR_8, u16 VAR_9,
           u16 VAR_10)
{
 struct pfvf_def_resp_tlv *VAR_11;
 u16 VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_7->reply_virt, 0, sizeof(union pfvf_tlvs));
 VAR_7->offset = (u8 *)VAR_7->reply_virt;
 VAR_12 = sizeof(struct pfvf_def_resp_tlv);
 VAR_13 = VAR_12;

 FUNC_2(&VAR_7->offset, VAR_1, VAR_12);


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  if (!(VAR_9 & (1 << VAR_14)))
   continue;

  VAR_11 = FUNC_2(&VAR_7->offset, FUNC_3(VAR_14),
         VAR_12);

  if (VAR_10 & (1 << VAR_14))
   VAR_11->hdr.status = VAR_8;
  else
   VAR_11->hdr.status = VAR_4;

  FUNC_0(VAR_5, VAR_3,
      "VF[%d] - vport_update response: TLV %d, status %02x\n",
      VAR_6->relative_vf_id,
      FUNC_3(VAR_14),
      VAR_11->hdr.status);

  VAR_13 += VAR_12;
 }

 FUNC_2(&VAR_7->offset, VAR_0,
        sizeof(struct channel_list_end_tlv));

 return VAR_13;
}
