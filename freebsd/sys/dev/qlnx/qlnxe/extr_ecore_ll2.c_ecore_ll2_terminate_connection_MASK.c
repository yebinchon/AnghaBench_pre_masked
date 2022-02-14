
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_3__ {scalar_t__ conn_type; } ;
struct ecore_ll2_info {TYPE_1__ input; } ;
struct ecore_hwfn {TYPE_2__* p_dev; int p_ooo_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ecore_ll2_info*) ;
 scalar_t__ FUNC_1 (struct ecore_ll2_info*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ecore_ll2_info* VAR_8 ;
 int FUNC_2 (int ,int *) ;
 struct ecore_ll2_info* FUNC_3 (struct ecore_hwfn*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_7 (int ) ;
 struct ecore_ptt* FUNC_8 (struct ecore_hwfn*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ll2_info*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ll2_info*) ;

enum _ecore_status_t FUNC_12(void *VAR_9,
          u8 VAR_10)
{
 struct ecore_hwfn *VAR_11 = (struct ecore_hwfn *)VAR_9;
 struct ecore_ll2_info *VAR_12 = VAR_8;
 enum _ecore_status_t VAR_13 = VAR_6;
 struct ecore_ptt *VAR_14;

 VAR_14 = FUNC_8(VAR_11);
 if (!VAR_14)
  return VAR_0;

 VAR_12 = FUNC_3(VAR_11, VAR_10);
 if (VAR_12 == VAR_8) {
  VAR_13 = VAR_1;
  goto out;
 }


 if (FUNC_1(VAR_12)) {
  VAR_13 = FUNC_11(VAR_11, VAR_12);
  if (VAR_13 != VAR_7)
   goto out;
  FUNC_5(VAR_11, VAR_10);
 }

 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_10(VAR_11, VAR_12);
  if (VAR_13)
   goto out;
  FUNC_4(VAR_11, VAR_10);
 }

 if (VAR_12->input.conn_type == VAR_3)
  FUNC_7(VAR_11->p_ooo_info);

 if (VAR_12->input.conn_type == VAR_2) {
  if (!FUNC_2(VAR_5,
       &VAR_11->p_dev->mf_bits))
   FUNC_6(VAR_11->p_dev, 0,
        VAR_4,
        0x8906, 0);
  FUNC_6(VAR_11->p_dev, 0,
       VAR_4,
       0x8914, 0);
 }

out:
 FUNC_9(VAR_11, VAR_14);

 return VAR_13;
}
