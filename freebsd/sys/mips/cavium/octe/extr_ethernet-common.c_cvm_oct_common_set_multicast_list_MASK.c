
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int if_flags; scalar_t__ if_softc; } ;
struct TYPE_5__ {int bcst; int mcst; int cam_mode; } ;
struct TYPE_6__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gmxx_rxx_adr_ctl_t ;
struct TYPE_7__ {unsigned long long u64; } ;
typedef TYPE_3__ cvmx_gmxx_prtx_cfg_t ;
struct TYPE_8__ {int port; } ;
typedef TYPE_4__ cvm_oct_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned long long FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

void FUNC_8(struct ifnet *VAR_3)
{
 cvmx_gmxx_prtx_cfg_t VAR_4;
 cvm_oct_private_t *VAR_5 = (cvm_oct_private_t *)VAR_3->if_softc;
 int VAR_6 = FUNC_4(VAR_5->port);
 int VAR_7 = FUNC_3(VAR_5->port);

 if ((VAR_6 < 2) && (FUNC_5(VAR_6) != VAR_0)) {
  cvmx_gmxx_rxx_adr_ctl_t VAR_8;
  VAR_8.u64 = 0;
  VAR_8.s.bcst = 1;

  if ( (VAR_3->if_flags&VAR_1) ||
      (VAR_3->if_flags & VAR_2))
   VAR_8.s.mcst = 2;
  else
   VAR_8.s.mcst = 1;

  if (VAR_3->if_flags & VAR_2)
   VAR_8.s.cam_mode = 0;
  else
   VAR_8.s.cam_mode = 1;

  VAR_4.u64 = FUNC_6(FUNC_0(VAR_7, VAR_6));
  FUNC_7(FUNC_0(VAR_7, VAR_6), VAR_4.u64 & ~1ull);

  FUNC_7(FUNC_2(VAR_7, VAR_6), VAR_8.u64);
  if (VAR_3->if_flags&VAR_2)
   FUNC_7(FUNC_1(VAR_7, VAR_6), 0);
  else
   FUNC_7(FUNC_1(VAR_7, VAR_6), 1);

  FUNC_7(FUNC_0(VAR_7, VAR_6), VAR_4.u64);
 }
}
