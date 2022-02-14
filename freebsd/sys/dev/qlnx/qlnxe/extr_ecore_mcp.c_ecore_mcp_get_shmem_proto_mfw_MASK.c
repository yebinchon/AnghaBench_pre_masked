
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 scalar_t__ VAR_8 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_9,
         struct ecore_ptt *VAR_10,
         enum ecore_pci_personality *VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0;
 enum _ecore_status_t VAR_14;

 VAR_14 = FUNC_2(VAR_9, VAR_10,
    VAR_0, 0, &VAR_12, &VAR_13);
 if (VAR_14 != VAR_7)
  return VAR_14;
 if (VAR_12 != VAR_8) {
  FUNC_1(VAR_9, VAR_2,
      "MFW lacks support for command; Returns %08x\n",
      VAR_12);
  return VAR_1;
 }

 switch (VAR_13) {
 case 129:
  *VAR_11 = VAR_3;
  break;
 case 128:
  *VAR_11 = VAR_6;
  break;
 case 130:
  *VAR_11 = VAR_4;
  break;
 case 131:
  *VAR_11 = VAR_5;
  break;
 default:
  FUNC_0(VAR_9, 1,
     "MFW answers GET_PF_RDMA_PROTOCOL but param is %08x\n",
     VAR_13);
  return VAR_1;
 }

 FUNC_1(VAR_9, VAR_2,
     "According to capabilities, L2 personality is %08x [resp %08x param %08x]\n",
     (u32) *VAR_11, VAR_12, VAR_13);
 return VAR_7;
}
