
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct public_func {int config; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct public_func*,int ) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,struct public_func*,struct ecore_ptt*,int*) ;

int FUNC_4(struct ecore_hwfn *VAR_3,
      struct ecore_ptt *VAR_4,
      u32 VAR_5)
{
 enum ecore_pci_personality VAR_6 = VAR_0;
 struct public_func VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10;

 VAR_10 = FUNC_1(VAR_3->p_dev);

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  FUNC_2(VAR_3, VAR_4, &VAR_7,
      FUNC_0(VAR_3, VAR_8));
  if (VAR_7.config & VAR_2)
   continue;

  if (FUNC_3(VAR_3, &VAR_7, VAR_4,
           &VAR_6) !=
      VAR_1)
   continue;

  if ((1 << ((u32)VAR_6)) & VAR_5)
   VAR_9++;
 }

 return VAR_9;
}
