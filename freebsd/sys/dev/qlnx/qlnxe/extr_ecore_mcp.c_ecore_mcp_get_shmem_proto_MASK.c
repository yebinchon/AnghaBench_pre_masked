
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct public_func {int config; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int FUNC_1 (struct ecore_hwfn*,int*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5,
     struct public_func *VAR_6,
     struct ecore_ptt *VAR_7,
     enum ecore_pci_personality *VAR_8)
{
 enum _ecore_status_t VAR_9 = VAR_3;

 switch (VAR_6->config & VAR_4) {
 case 131:
  if (FUNC_2(VAR_5, VAR_7, VAR_8) !=
      VAR_3)
   FUNC_1(VAR_5, VAR_8);
  break;
 case 129:
  *VAR_8 = VAR_2;
  break;
 case 130:
  *VAR_8 = VAR_1;
  break;
 case 128:
  FUNC_0(VAR_5, 1, "RoCE personality is not a valid value!\n");

 default:
  VAR_9 = VAR_0;
 }

 return VAR_9;
}
