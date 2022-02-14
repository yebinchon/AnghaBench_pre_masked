
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlnx_fastpath {TYPE_1__* rxq; } ;
struct lro_entry {int dummy; } ;
struct lro_ctrl {int lro_active; } ;
struct ifnet {int if_capenable; } ;
struct TYPE_5__ {int num_rss; struct qlnx_fastpath* fp_array; struct ifnet* ifp; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_4__ {struct lro_ctrl lro; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct lro_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct lro_ctrl*,struct lro_entry*) ;
 int FUNC_4 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_5(qlnx_host_t *VAR_2)
{
 return;
}
