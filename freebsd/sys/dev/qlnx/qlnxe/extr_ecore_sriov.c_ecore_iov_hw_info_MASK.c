
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct ecore_hwfn {int abs_pf_id; struct ecore_dev* p_dev; } ;
struct ecore_dev {TYPE_1__* p_iov_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int pos; int offset; void* first_vf_in_pf; int total_vfs; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct ecore_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct ecore_dev*,TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct ecore_dev*,int ) ;
 TYPE_1__* FUNC_6 (struct ecore_dev*,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (struct ecore_dev*) ;

enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_7)
{
 struct ecore_dev *VAR_8 = VAR_7->p_dev;
 int VAR_9;
 enum _ecore_status_t VAR_10;

 if (FUNC_3(VAR_7->p_dev))
  return VAR_2;


 VAR_9 = FUNC_5(VAR_7->p_dev,
        VAR_6);
 if (!VAR_9) {
  FUNC_1(VAR_7, VAR_0, "No PCIe IOV support\n");
  return VAR_2;
 }



 VAR_8->p_iov_info = FUNC_6(VAR_8, VAR_3,
     sizeof(*VAR_8->p_iov_info));
 if (!VAR_8->p_iov_info) {
  FUNC_0(VAR_7, 0,
     "Can't support IOV due to lack of memory\n");
  return VAR_1;
 }
 VAR_8->p_iov_info->pos = VAR_9;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  return VAR_10;





 if (!VAR_8->p_iov_info->total_vfs) {
  FUNC_1(VAR_7, VAR_0,
      "IOV capabilities, but no VFs are published\n");
  FUNC_4(VAR_8, VAR_8->p_iov_info);
  VAR_8->p_iov_info = VAR_5;
  return VAR_2;
 }
 if (VAR_7->p_dev->p_iov_info->offset < (256 - VAR_7->abs_pf_id)) {
  u32 VAR_11 = VAR_7->p_dev->p_iov_info->offset +
       VAR_7->abs_pf_id - 16;

  VAR_8->p_iov_info->first_vf_in_pf = VAR_11;

  if (FUNC_2(VAR_7))
   VAR_8->p_iov_info->first_vf_in_pf -= VAR_4;
 } else {
  u32 VAR_12 = VAR_7->p_dev->p_iov_info->offset +
       VAR_7->abs_pf_id - 256;

  VAR_8->p_iov_info->first_vf_in_pf = VAR_12;
 }

 FUNC_1(VAR_7, VAR_0,
     "First VF in hwfn 0x%08x\n",
     VAR_8->p_iov_info->first_vf_in_pf);

 return VAR_2;
}
