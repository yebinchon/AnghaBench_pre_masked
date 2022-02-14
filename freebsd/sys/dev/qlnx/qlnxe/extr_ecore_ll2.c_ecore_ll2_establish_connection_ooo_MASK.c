
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conn_type; } ;
struct ecore_ll2_info {TYPE_1__ input; } ;
struct ecore_hwfn {int p_ooo_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ll2_info*) ;

__attribute__((used)) static void
FUNC_2(struct ecore_hwfn *VAR_1,
       struct ecore_ll2_info *VAR_2)
{
 if (VAR_2->input.conn_type != VAR_0)
  return;

 FUNC_0(VAR_1->p_ooo_info);
 FUNC_1(VAR_1, VAR_2);
}
