
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int dummy; } ;
struct ixl_pf {int qtag; scalar_t__ iw_enabled; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;


 int FUNC_0 (char*) ;
 struct ixl_pf* FUNC_1 (int ) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vsi*,int *) ;
 int FUNC_3 (struct ixl_vsi*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct ixl_pf*) ;

void
FUNC_5(if_ctx_t VAR_1)
{
 struct ixl_pf *VAR_2 = FUNC_1(VAR_1);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;

 FUNC_0("ixl_if_stop: begin\n");
 FUNC_3(VAR_3);
 FUNC_2(VAR_2, VAR_3, &VAR_2->qtag);
}
