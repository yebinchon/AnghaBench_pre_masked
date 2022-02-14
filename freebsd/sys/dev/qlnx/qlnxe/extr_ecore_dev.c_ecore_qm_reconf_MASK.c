
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_qm_info {int num_pqs; int start_pq; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int hw_mode; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int rel_pf_id; struct ecore_qm_info qm_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int ,int ) ;
 int VAR_3 ;

enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_4,
         struct ecore_ptt *VAR_5)
{
 struct ecore_qm_info *VAR_6 = &VAR_4->qm_info;
 bool VAR_7;
 enum _ecore_status_t VAR_8;


 FUNC_3(VAR_4);


 FUNC_0(&VAR_3);
 VAR_7 = FUNC_6(VAR_4, VAR_5, 0, 1,
          VAR_6->start_pq, VAR_6->num_pqs);
 FUNC_1(&VAR_3);
 if (!VAR_7)
  return VAR_0;


 FUNC_2(VAR_4);


 FUNC_5(VAR_4, VAR_5, 0);


 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_2, VAR_4->rel_pf_id,
       VAR_4->hw_info.hw_mode);
 if (VAR_8 != VAR_1)
  return VAR_8;


 FUNC_0(&VAR_3);
 VAR_7 = FUNC_6(VAR_4, VAR_5, 1, 1,
          VAR_6->start_pq, VAR_6->num_pqs);
 FUNC_1(&VAR_3);
 if (!VAR_7)
  return VAR_0;

 return VAR_1;
}
