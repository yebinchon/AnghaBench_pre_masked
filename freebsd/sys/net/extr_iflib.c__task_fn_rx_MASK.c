
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef TYPE_1__* iflib_rxq_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_7__ {int ifc_sysctl_rx_budget; int ifc_flags; int ifc_ifp; } ;
struct TYPE_6__ {int ifr_task; int ifr_id; int * ifr_cpu_exec_count; TYPE_2__* ifr_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 size_t VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(void *VAR_6)
{
 iflib_rxq_t VAR_7 = VAR_6;
 if_ctx_t VAR_8 = VAR_7->ifr_ctx;
 bool VAR_9;
 uint16_t VAR_10;




 FUNC_0(VAR_5);
 if (FUNC_4(!(FUNC_6(VAR_8->ifc_ifp) & VAR_2)))
  return;
 VAR_9 = 1;
 VAR_10 = VAR_8->ifc_sysctl_rx_budget;
 if (VAR_10 == 0)
  VAR_10 = 16;
 if (VAR_9 == 0 || (VAR_9 = FUNC_7(VAR_7, VAR_10)) == 0) {
  if (VAR_8->ifc_flags & VAR_1)
   FUNC_2(VAR_8);
  else
   FUNC_3(VAR_8, VAR_7->ifr_id);
  FUNC_0(VAR_4);
 }
 if (FUNC_4(!(FUNC_6(VAR_8->ifc_ifp) & VAR_2)))
  return;
 if (VAR_9)
  FUNC_1(&VAR_7->ifr_task);
}
