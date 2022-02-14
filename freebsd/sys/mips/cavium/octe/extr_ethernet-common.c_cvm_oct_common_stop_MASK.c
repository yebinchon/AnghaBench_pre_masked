
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_4__ {scalar_t__ en; } ;
struct TYPE_5__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gmxx_prtx_cfg_t ;
struct TYPE_6__ {int port; } ;
typedef TYPE_3__ cvm_oct_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct ifnet *VAR_0)
{
 cvmx_gmxx_prtx_cfg_t VAR_1;
 cvm_oct_private_t *VAR_2 = (cvm_oct_private_t *)VAR_0->if_softc;
 int VAR_3 = FUNC_2(VAR_2->port);
 int VAR_4 = FUNC_1(VAR_2->port);

 VAR_1.u64 = FUNC_3(FUNC_0(VAR_4, VAR_3));
 VAR_1.s.en = 0;
 FUNC_4(FUNC_0(VAR_4, VAR_3), VAR_1.u64);
 return 0;
}
