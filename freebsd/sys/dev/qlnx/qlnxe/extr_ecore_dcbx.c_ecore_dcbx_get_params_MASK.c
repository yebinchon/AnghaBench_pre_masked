
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_get {int dummy; } ;
typedef enum ecore_mib_read_type { ____Placeholder_ecore_mib_read_type } ecore_mib_read_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_2,
        struct ecore_dcbx_get *VAR_3,
        enum ecore_mib_read_type VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 131:
  FUNC_2(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_3(VAR_2, VAR_3);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_3);
  break;
 case 132:
  FUNC_1(VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_2, "MIB read err, unknown mib type %d\n", VAR_4);
  return VAR_0;
 }

 return VAR_1;
}
