
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_results {int dummy; } ;
typedef enum ecore_pci_personality { ____Placeholder_ecore_pci_personality } ecore_pci_personality ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_3__ {int id; int personality; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct ecore_dcbx_results*,struct ecore_hwfn*,struct ecore_ptt*,int,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ecore_dcbx_results *VAR_1,
      struct ecore_hwfn *VAR_2, struct ecore_ptt *VAR_3,
      bool VAR_4, u8 VAR_5, u8 VAR_6,
      enum dcbx_protocol_type VAR_7)
{
 enum ecore_pci_personality VAR_8;
 enum dcbx_protocol_type VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0); VAR_10++) {
  VAR_9 = VAR_0[VAR_10].id;

  if (VAR_7 != VAR_9)
   continue;

  VAR_8 = VAR_0[VAR_10].personality;

  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7, VAR_8);
 }
}
