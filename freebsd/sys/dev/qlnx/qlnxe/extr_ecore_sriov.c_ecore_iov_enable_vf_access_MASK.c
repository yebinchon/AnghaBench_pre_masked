
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_vf_info {int b_malicious; int state; int abs_vf_id; scalar_t__ concrete_fid; int num_sbs; scalar_t__ to_disable; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; int hw_mode; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int rel_pf_id; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_vf_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_7,
             struct ecore_ptt *VAR_8,
             struct ecore_vf_info *VAR_9)
{
 u32 VAR_10 = VAR_3;
 enum _ecore_status_t VAR_11 = VAR_1;




 VAR_9->b_malicious = 0;

 if (VAR_9->to_disable)
  return VAR_1;

 FUNC_0(VAR_7, VAR_0, "Enable internal access for vf %x [abs %x]\n",
     VAR_9->abs_vf_id, FUNC_1(VAR_7, VAR_9));

 FUNC_8(VAR_7, VAR_8,
         FUNC_1(VAR_7, VAR_9));

 FUNC_7(VAR_7, VAR_8, VAR_9);

 VAR_11 = FUNC_6(VAR_7, VAR_8,
          VAR_9->abs_vf_id, VAR_9->num_sbs);
 if (VAR_11 != VAR_1)
  return VAR_11;

 FUNC_4(VAR_7, VAR_8, (u16)VAR_9->concrete_fid);

 FUNC_2(VAR_10, VAR_4, VAR_7->rel_pf_id);
 FUNC_3(VAR_7, VAR_2, VAR_10);

 FUNC_5(VAR_7, VAR_8, VAR_5, VAR_9->abs_vf_id,
         VAR_7->hw_info.hw_mode);


 FUNC_4(VAR_7, VAR_8, (u16)VAR_7->hw_info.concrete_fid);

 VAR_9->state = VAR_6;

 return VAR_11;
}
