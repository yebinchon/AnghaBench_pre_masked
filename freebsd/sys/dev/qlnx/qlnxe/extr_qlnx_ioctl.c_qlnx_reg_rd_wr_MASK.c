
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_hwfn {int dummy; } ;
struct TYPE_7__ {size_t hwfn_index; int cmd; int val; int addr; int access_type; } ;
typedef TYPE_2__ qlnx_reg_rd_wr_t ;
struct TYPE_6__ {struct ecore_hwfn* hwfns; } ;
struct TYPE_8__ {TYPE_1__ cdev; } ;
typedef TYPE_3__ qlnx_host_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ecore_hwfn*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_3, qlnx_reg_rd_wr_t *VAR_4)
{
 int VAR_5 = 0;
 struct ecore_hwfn *VAR_6;

 if (VAR_4->hwfn_index >= VAR_1) {
  return (VAR_0);
 }

 VAR_6 = &VAR_3->cdev.hwfns[VAR_4->hwfn_index];

 switch (VAR_4->cmd) {

  case 129:
   if (VAR_4->access_type == VAR_2) {
    VAR_4->val = FUNC_0(VAR_6,
       VAR_4->addr);
   }
   break;

  case 128:
   if (VAR_4->access_type == VAR_2) {
    FUNC_1(VAR_6, VAR_4->addr,
     VAR_4->val);
   }
   break;

  default:
   VAR_5 = VAR_0;
   break;
 }

 return (VAR_5);
}
