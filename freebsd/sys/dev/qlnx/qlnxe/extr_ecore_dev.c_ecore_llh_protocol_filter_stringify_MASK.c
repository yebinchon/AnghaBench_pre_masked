
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecore_dev {int dummy; } ;
typedef int osal_size_t ;
typedef enum ecore_llh_prot_filter_type_t { ____Placeholder_ecore_llh_prot_filter_type_t } ecore_llh_prot_filter_type_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int) ;
 int VAR_0 ;







 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int ,...) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_dev *VAR_2,
        enum ecore_llh_prot_filter_type_t VAR_3,
        u16 VAR_4, u16 VAR_5,
        u8 *VAR_6, osal_size_t VAR_7)
{
 switch (VAR_3) {
 case 134:
  FUNC_1(VAR_6, VAR_7, "Ethertype 0x%04x",
         VAR_4);
  break;
 case 131:
  FUNC_1(VAR_6, VAR_7, "TCP src port 0x%04x",
         VAR_4);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_7, "UDP src port 0x%04x",
         VAR_4);
  break;
 case 133:
  FUNC_1(VAR_6, VAR_7, "TCP dst port 0x%04x", VAR_5);
  break;
 case 130:
  FUNC_1(VAR_6, VAR_7, "UDP dst port 0x%04x", VAR_5);
  break;
 case 132:
  FUNC_1(VAR_6, VAR_7, "TCP src/dst ports 0x%04x/0x%04x",
         VAR_4, VAR_5);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_7, "UDP src/dst ports 0x%04x/0x%04x",
         VAR_4, VAR_5);
  break;
 default:
  FUNC_0(VAR_2, 1,
     "Non valid LLH protocol filter type %d\n", VAR_3);
  return VAR_0;
 }

 return VAR_1;
}
