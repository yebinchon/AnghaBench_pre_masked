
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {scalar_t__* minor_ver_arr; int * major_ver_arr; } ;
struct vf_start_ramrod_data {TYPE_5__ hsi_fp_ver; int personality; int opaque_fid; int vf_id; } ;
struct TYPE_8__ {scalar_t__ eth_fp_hsi_minor; } ;
struct TYPE_9__ {TYPE_3__ vfdev_info; } ;
struct ecore_vf_info {int abs_vf_id; TYPE_4__ acquire; int opaque_fid; int concrete_fid; } ;
struct TYPE_6__ {struct vf_start_ramrod_data vf_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_7__ {int personality; } ;
struct ecore_hwfn {TYPE_2__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ,scalar_t__,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_15,
           struct ecore_vf_info *VAR_16)
{
 struct vf_start_ramrod_data *VAR_17 = VAR_10;
 struct ecore_spq_entry *VAR_18 = VAR_10;
 struct ecore_sp_init_data VAR_19;
 enum _ecore_status_t VAR_20 = VAR_3;
 u8 VAR_21;


 FUNC_4(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.cid = FUNC_6(VAR_15);
 VAR_19.opaque_fid = VAR_16->opaque_fid;
 VAR_19.comp_mode = VAR_4;

 VAR_20 = FUNC_5(VAR_15, &VAR_18,
       VAR_0,
       VAR_13, &VAR_19);
 if (VAR_20 != VAR_5)
  return VAR_20;

 VAR_17 = &VAR_18->ramrod.vf_start;

 VAR_17->vf_id = FUNC_2(VAR_16->concrete_fid, VAR_14);
 VAR_17->opaque_fid = FUNC_3(VAR_16->opaque_fid);

 switch (VAR_15->hw_info.personality) {
 case 130:
  VAR_17->personality = VAR_11;
  break;
 case 128:
 case 129:
  VAR_17->personality = VAR_12;
  break;
 default:
  FUNC_0(VAR_15, 1, "Unknown VF personality %d\n",
     VAR_15->hw_info.personality);
  return VAR_1;
 }

 VAR_21 = VAR_16->acquire.vfdev_info.eth_fp_hsi_minor;
 if (VAR_21 > VAR_7 &&
     VAR_21 != VAR_8) {
  FUNC_1(VAR_15, VAR_2,
      "VF [%d] - Requested fp hsi %02x.%02x which is slightly newer than PF's %02x.%02x; Configuring PFs version\n",
      VAR_16->abs_vf_id,
      VAR_6, VAR_21,
      VAR_6, VAR_7);
  VAR_21 = VAR_7;
 }

 VAR_17->hsi_fp_ver.major_ver_arr[VAR_9] = VAR_6;
 VAR_17->hsi_fp_ver.minor_ver_arr[VAR_9] = VAR_21;

 FUNC_1(VAR_15, VAR_2,
     "VF[%d] - Starting using HSI %02x.%02x\n",
     VAR_16->abs_vf_id, VAR_6, VAR_21);

 return FUNC_7(VAR_15, VAR_18, VAR_10);
}
