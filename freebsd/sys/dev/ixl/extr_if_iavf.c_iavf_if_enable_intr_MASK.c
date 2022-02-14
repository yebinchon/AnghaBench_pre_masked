
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int dummy; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;


 int FUNC_0 (struct ixl_vsi*) ;
 struct iavf_sc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 struct iavf_sc *VAR_1 = FUNC_1(VAR_0);
 struct ixl_vsi *VAR_2 = &VAR_1->vsi;

 FUNC_0(VAR_2);
}
