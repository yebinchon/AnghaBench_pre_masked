
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_8__ {scalar_t__ reply_address; } ;
struct TYPE_9__ {TYPE_2__ first_tlv; } ;
struct TYPE_12__ {scalar_t__ response_offset; int mbx_state; } ;
struct TYPE_10__ {int type; int length; } ;
struct TYPE_11__ {scalar_t__ reply_address; TYPE_4__ tl; int padding; } ;
struct ecore_iov_vf_mbx {int b_pending_msg; TYPE_6__ sw_mbx; TYPE_5__ first_tlv; TYPE_1__* req_virt; } ;
struct ecore_vf_info {int abs_vf_id; TYPE_3__ acquire; int b_malicious; int relative_vf_id; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_7__ {TYPE_5__ first_tlv; } ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int const,int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_vf_info*,int const) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_17 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_18 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_19 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_20 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_21 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_22 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_23 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;

void FUNC_24(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          int VAR_6)
{
 struct ecore_iov_vf_mbx *VAR_7;
 struct ecore_vf_info *VAR_8;

 VAR_8 = FUNC_3(VAR_4, (u16)VAR_6, 1);
 if (!VAR_8)
  return;

 VAR_7 = &VAR_8->vf_mbx;



 if (!VAR_7->b_pending_msg) {
  FUNC_0(VAR_4, 1,
     "VF[%02x]: Trying to process mailbox message when none is pending\n",
     VAR_8->abs_vf_id);
  return;
 }
 VAR_7->b_pending_msg = 0;


 VAR_7->first_tlv = VAR_7->req_virt->first_tlv;

 FUNC_1(VAR_4, VAR_0,
     "VF[%02x]: Processing mailbox message [type %04x]\n",
     VAR_8->abs_vf_id, VAR_7->first_tlv.tl.type);

 FUNC_2(VAR_4,
                             VAR_8->relative_vf_id,
                             VAR_7->first_tlv.tl.type);




 FUNC_4(VAR_4, VAR_8,
         VAR_7->first_tlv.tl.type);


 if (FUNC_6(VAR_7->first_tlv.tl.type) &&
     !VAR_8->b_malicious) {

  switch (VAR_7->first_tlv.tl.type) {
  case 143:
   FUNC_8(VAR_4, VAR_5, VAR_8);
   break;
  case 130:
   FUNC_14(VAR_4, VAR_5, VAR_8);
   break;
  case 129:
   FUNC_17(VAR_4, VAR_5, VAR_8);
   break;
  case 137:
   FUNC_12(VAR_4, VAR_5, VAR_8);
   break;
  case 136:
   FUNC_13(VAR_4, VAR_5, VAR_8);
   break;
  case 135:
   FUNC_15(VAR_4, VAR_5, VAR_8);
   break;
  case 134:
   FUNC_16(VAR_4, VAR_5, VAR_8);
   break;
  case 132:
   FUNC_19(VAR_4, VAR_5, VAR_8);
   break;
  case 128:
   FUNC_21(VAR_4, VAR_5, VAR_8);
   break;
  case 133:
   FUNC_18(VAR_4, VAR_5, VAR_8);
   break;
  case 142:
   FUNC_9(VAR_4, VAR_5, VAR_8);
   break;
  case 139:
   FUNC_10(VAR_4, VAR_5, VAR_8);
   break;
  case 138:
   FUNC_11(VAR_4, VAR_5, VAR_8);
   break;
  case 131:
   FUNC_20(VAR_4, VAR_5, VAR_8);
   break;
  case 140:
   FUNC_23(VAR_4, VAR_5, VAR_8);
   break;
  case 141:
   FUNC_22(VAR_4, VAR_5, VAR_8);
   break;
  }
 } else if (FUNC_6(VAR_7->first_tlv.tl.type)) {





  if (VAR_7->first_tlv.tl.type == 138) {

   FUNC_1(VAR_4, VAR_0,
       "VF [%02x] - considered malicious, but wanted to RELEASE. TODO\n",
       VAR_8->abs_vf_id);
  } else {
   FUNC_1(VAR_4, VAR_0,
       "VF [%02x] - considered malicious; Ignoring TLV [%04x]\n",
       VAR_8->abs_vf_id, VAR_7->first_tlv.tl.type);
  }

  FUNC_5(VAR_4, VAR_5, VAR_8,
           VAR_7->first_tlv.tl.type,
           sizeof(struct pfvf_def_resp_tlv),
           VAR_1);
 } else {






  FUNC_0(VAR_4, 0,
     "VF[%02x]: unknown TLV. type %04x length %04x padding %08x reply address %llu\n",
     VAR_8->abs_vf_id,
     VAR_7->first_tlv.tl.type,
     VAR_7->first_tlv.tl.length,
     VAR_7->first_tlv.padding,
     (unsigned long long)VAR_7->first_tlv.reply_address);




  if (VAR_8->acquire.first_tlv.reply_address &&
      (VAR_7->first_tlv.reply_address ==
       VAR_8->acquire.first_tlv.reply_address))
   FUNC_5(VAR_4, VAR_5, VAR_8,
            VAR_7->first_tlv.tl.type,
            sizeof(struct pfvf_def_resp_tlv),
            VAR_2);
  else
   FUNC_1(VAR_4, VAR_0,
       "VF[%02x]: Can't respond to TLV - no valid reply address\n",
       VAR_8->abs_vf_id);
 }

 FUNC_7(VAR_4, VAR_8,
           VAR_7->first_tlv.tl.type);





}
