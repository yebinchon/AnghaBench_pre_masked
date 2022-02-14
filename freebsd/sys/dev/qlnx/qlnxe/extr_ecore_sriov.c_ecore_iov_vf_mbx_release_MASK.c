
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct ecore_vf_info {scalar_t__ state; int opaque_fid; int concrete_fid; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_vf_info*) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_6,
         struct ecore_ptt *VAR_7,
         struct ecore_vf_info *VAR_8)
{
 u16 VAR_9 = sizeof(struct pfvf_def_resp_tlv);
 u8 VAR_10 = VAR_3;
 enum _ecore_status_t VAR_11 = VAR_1;

 FUNC_2(VAR_6, VAR_8);

 if (VAR_8->state != VAR_5 && VAR_8->state != VAR_4) {

  VAR_11 = FUNC_3(VAR_6, VAR_8->concrete_fid,
          VAR_8->opaque_fid);

  if (VAR_11 != VAR_1) {
   FUNC_0(VAR_6, "ecore_sp_vf_stop returned error %d\n",
          VAR_11);
   VAR_10 = VAR_2;
  }

  VAR_8->state = VAR_5;
 }

 FUNC_1(VAR_6, VAR_7, VAR_8, VAR_0,
          VAR_9, VAR_10);
}
