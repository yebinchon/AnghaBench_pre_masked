
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_mib_read_type { ____Placeholder_ecore_mib_read_type } ecore_mib_read_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;





 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_1,
      struct ecore_ptt *VAR_2,
      enum ecore_mib_read_type VAR_3)
{
 enum _ecore_status_t VAR_4 = VAR_0;

 switch (VAR_3) {
 case 130:
  FUNC_1(VAR_1, VAR_2);
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
  break;
 case 132:
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_1, "MIB read err, unknown mib type %d\n", VAR_3);
 }

 return VAR_4;
}
