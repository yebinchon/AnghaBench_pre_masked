
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ecore_hwfn {int p_dev; } ;
struct TYPE_2__ {size_t* dscp_pri_map; } ;
struct ecore_dcbx_get {TYPE_1__ dscp; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ecore_dcbx_get* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct ecore_dcbx_get*) ;
 int FUNC_3 (struct ecore_dcbx_get*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_dcbx_get*,int ) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_6,
        u8 VAR_7, u8 *VAR_8)
{
 struct ecore_dcbx_get *VAR_9;
 enum _ecore_status_t VAR_10;

 if (VAR_7 >= VAR_0) {
  FUNC_0(VAR_6, "Invalid dscp index %d\n", VAR_7);
  return VAR_2;
 }

 VAR_9 = FUNC_1(VAR_6->p_dev, VAR_5,
     sizeof(*VAR_9));
 if (!VAR_9)
  return VAR_3;

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 VAR_10 = FUNC_4(VAR_6, VAR_9,
         VAR_1);
 if (VAR_10) {
  FUNC_2(VAR_6->p_dev, VAR_9);
  return VAR_10;
 }

 *VAR_8 = VAR_9->dscp.dscp_pri_map[VAR_7];
 FUNC_2(VAR_6->p_dev, VAR_9);

 return VAR_4;
}
