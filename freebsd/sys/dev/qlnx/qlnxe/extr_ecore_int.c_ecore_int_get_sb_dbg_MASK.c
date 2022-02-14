
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_sb_info_dbg {int* pi; void* igu_cons; void* igu_prod; } ;
struct ecore_sb_info {int igu_sb_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 void* FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_6,
       struct ecore_ptt *VAR_7,
       struct ecore_sb_info *VAR_8,
       struct ecore_sb_info_dbg *VAR_9)
{
 u16 VAR_10 = VAR_8->igu_sb_id;
 int VAR_11;

 if (FUNC_0(VAR_6->p_dev))
  return VAR_1;

 if (VAR_10 > FUNC_1(VAR_6->p_dev))
  return VAR_1;

 VAR_9->igu_prod = FUNC_2(VAR_6, VAR_7,
        VAR_4 + VAR_10 * 4);
 VAR_9->igu_cons = FUNC_2(VAR_6, VAR_7,
        VAR_3 + VAR_10 * 4);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  VAR_9->pi[VAR_11] = (u16)FUNC_2(VAR_6, VAR_7,
           VAR_0 +
           VAR_10 * 4 * VAR_5 + VAR_11 * 4);

 return VAR_2;
}
