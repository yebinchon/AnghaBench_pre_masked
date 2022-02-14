
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int if_mtu; scalar_t__ if_softc; } ;
struct TYPE_4__ {int minlen; int maxlen; } ;
struct TYPE_5__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_frm_len_chkx_t ;
struct TYPE_6__ {int port; } ;
typedef TYPE_3__ cvm_oct_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int,int) ;

int FUNC_9(struct ifnet *VAR_4, int VAR_5)
{
 cvm_oct_private_t *VAR_6 = (cvm_oct_private_t *)VAR_4->if_softc;
 int VAR_7 = FUNC_4(VAR_6->port);
 int VAR_8 = FUNC_3(VAR_6->port);
 int VAR_9 = 4;



 if ((VAR_5 + 14 + 4 + VAR_9 < 64) || (VAR_5 + 14 + 4 + VAR_9 > 65392)) {
  FUNC_8("MTU must be between %d and %d.\n", 64-14-4-VAR_9, 65392-14-4-VAR_9);
  return -VAR_1;
 }
 VAR_4->if_mtu = VAR_5;

 if ((VAR_7 < 2) && (FUNC_6(VAR_7) != VAR_0)) {
  int VAR_10 = VAR_5 + 14 + 4 + VAR_9;

  if (FUNC_5(VAR_2) || FUNC_5(VAR_3)) {

   FUNC_7(FUNC_0(VAR_8, VAR_7), VAR_10);
  } else {


   cvmx_pip_frm_len_chkx_t VAR_11;
   VAR_11.u64 = 0;
   VAR_11.s.minlen = 64;
   VAR_11.s.maxlen = VAR_10;
   FUNC_7(FUNC_2(VAR_7), VAR_11.u64);
  }


  FUNC_7(FUNC_1(VAR_8, VAR_7), (VAR_10 + 7) & ~7u);
 }
 return 0;
}
