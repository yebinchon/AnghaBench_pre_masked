
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union event_ring_element {int dummy; } event_ring_element ;
typedef int u16 ;
struct ecore_hwfn {int p_dev; struct ecore_eq* p_eq; } ;
struct ecore_eq {int p_fw_cons; int eq_sb_index; int chain; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ecore_eq*) ;
 int VAR_6 ;
 struct ecore_eq* FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int,int *,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct ecore_hwfn*,int ,struct ecore_eq*,int *,int *) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_8, u16 VAR_9)
{
 struct ecore_eq *VAR_10;


 VAR_10 = FUNC_2(VAR_8->p_dev, VAR_5, sizeof(*VAR_10));
 if (!VAR_10) {
  FUNC_0(VAR_8, 0,
     "Failed to allocate `struct ecore_eq'\n");
  return VAR_3;
 }


 if (FUNC_3(VAR_8->p_dev,
         VAR_2,
         VAR_1,
         VAR_0,
         VAR_9,
         sizeof(union event_ring_element),
         &VAR_10->chain, VAR_6) != VAR_4) {
  FUNC_0(VAR_8, 0, "Failed to allocate eq chain\n");
  goto eq_allocate_fail;
 }


 FUNC_4(VAR_8, VAR_7,
         VAR_10, &VAR_10->eq_sb_index, &VAR_10->p_fw_cons);

 VAR_8->p_eq = VAR_10;
 return VAR_4;

eq_allocate_fail:
 FUNC_1(VAR_8->p_dev, VAR_10);
 return VAR_3;
}
