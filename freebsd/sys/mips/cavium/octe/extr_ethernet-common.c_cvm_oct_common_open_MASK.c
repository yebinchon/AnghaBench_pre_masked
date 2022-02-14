
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_9__ {int link_up; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_8__ {int en; } ;
struct TYPE_11__ {int u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_gmxx_prtx_cfg_t ;
struct TYPE_12__ {int port; int * miibus; } ;
typedef TYPE_5__ cvm_oct_private_t ;
struct TYPE_13__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_6__* FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ifnet*,int ) ;

int FUNC_8(struct ifnet *VAR_3)
{
 cvmx_gmxx_prtx_cfg_t VAR_4;
 cvm_oct_private_t *VAR_5 = (cvm_oct_private_t *)VAR_3->if_softc;
 int VAR_6 = FUNC_2(VAR_5->port);
 int VAR_7 = FUNC_1(VAR_5->port);
 cvmx_helper_link_info_t VAR_8;

 VAR_4.u64 = FUNC_4(FUNC_0(VAR_7, VAR_6));
 VAR_4.s.en = 1;
 FUNC_6(FUNC_0(VAR_7, VAR_6), VAR_4.u64);




        if (FUNC_5()->board_type != VAR_0 && VAR_5->miibus == ((void*)0)) {
             VAR_8 = FUNC_3(VAR_5->port);
             if (!VAR_8.s.link_up)
  FUNC_7(VAR_3, VAR_1);
      else
  FUNC_7(VAR_3, VAR_2);
        }

 return 0;
}
