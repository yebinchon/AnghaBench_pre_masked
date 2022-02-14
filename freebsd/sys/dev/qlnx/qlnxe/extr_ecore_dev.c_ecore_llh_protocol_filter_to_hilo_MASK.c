
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_dev {int dummy; } ;
typedef enum ecore_llh_prot_filter_type_t { ____Placeholder_ecore_llh_prot_filter_type_t } ecore_llh_prot_filter_type_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int) ;
 int VAR_0 ;







 int VAR_1 ;

__attribute__((used)) static enum _ecore_status_t
FUNC_1(struct ecore_dev *VAR_2,
      enum ecore_llh_prot_filter_type_t VAR_3,
      u16 VAR_4, u16 VAR_5,
      u32 *VAR_6, u32 *VAR_7)
{
 *VAR_6 = 0;
 *VAR_7 = 0;

 switch (VAR_3) {
 case 134:
  *VAR_6 = VAR_4;
  break;
 case 131:
 case 128:
  *VAR_7 = VAR_4 << 16;
  break;
 case 133:
 case 130:
  *VAR_7 = VAR_5;
  break;
 case 132:
 case 129:
  *VAR_7 = (VAR_4 << 16) | VAR_5;
  break;
 default:
  FUNC_0(VAR_2, 1,
     "Non valid LLH protocol filter type %d\n", VAR_3);
  return VAR_0;
 }

 return VAR_1;
}
