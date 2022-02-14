
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int size; int phys; struct ecore_bulletin_content* p_virt; } ;
struct ecore_vf_info {TYPE_1__ bulletin; int vf_bulletin; int abs_vf_id; int relative_vf_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dmae_params {int dst_vfid; int flags; } ;
struct ecore_bulletin_content {int crc; int version; } ;
typedef int params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct ecore_dmae_params*,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int,struct ecore_dmae_params*) ;
 struct ecore_vf_info* FUNC_4 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_3,
      int VAR_4,
      struct ecore_ptt *VAR_5)
{
 struct ecore_bulletin_content *VAR_6;
 int VAR_7 = sizeof(VAR_6->crc);
 struct ecore_dmae_params VAR_8;
 struct ecore_vf_info *VAR_9;

 VAR_9 = FUNC_4(VAR_3, (u16)VAR_4, 1);
 if (!VAR_9)
  return VAR_1;


 if (!VAR_9->vf_bulletin)
  return VAR_1;

 VAR_6 = VAR_9->bulletin.p_virt;


 VAR_6->version++;
 VAR_6->crc = FUNC_1(0, (u8 *)VAR_6 + VAR_7,
         VAR_9->bulletin.size - VAR_7);

 FUNC_0(VAR_3, VAR_2,
     "Posting Bulletin 0x%08x to VF[%d] (CRC 0x%08x)\n",
     VAR_6->version, VAR_9->relative_vf_id,
     VAR_6->crc);


 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.flags = VAR_0;
 VAR_8.dst_vfid = VAR_9->abs_vf_id;
 return FUNC_3(VAR_3, VAR_5, VAR_9->bulletin.phys,
        VAR_9->vf_bulletin, VAR_9->bulletin.size / 4,
        &VAR_8);
}
