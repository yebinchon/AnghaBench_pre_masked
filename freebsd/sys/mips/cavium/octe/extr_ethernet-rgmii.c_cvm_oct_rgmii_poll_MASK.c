
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_15__ {int port_bit; } ;
struct TYPE_16__ {void* u64; TYPE_4__ s; } ;
typedef TYPE_5__ cvmx_ipd_sub_port_fcs_t ;
struct TYPE_12__ {int speed; } ;
struct TYPE_17__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_6__ cvmx_helper_link_info_t ;
struct TYPE_13__ {scalar_t__ pcterr; } ;
struct TYPE_18__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_7__ cvmx_gmxx_rxx_int_reg_t ;
struct TYPE_14__ {int pre_chk; } ;
struct TYPE_19__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_8__ cvmx_gmxx_rxx_frm_ctl_t ;
struct TYPE_20__ {unsigned long long port; scalar_t__ link_info; int need_link_update; int * miibus; } ;
typedef TYPE_9__ cvm_oct_private_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (unsigned long long) ;
 scalar_t__ VAR_1 ;
 TYPE_6__ FUNC_5 (unsigned long long) ;
 TYPE_6__ FUNC_6 (unsigned long long) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,void*) ;
 int VAR_2 ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ifnet *VAR_3)
{
 cvm_oct_private_t *VAR_4 = (cvm_oct_private_t *)VAR_3->if_softc;
 cvmx_helper_link_info_t VAR_5;



 FUNC_10(&VAR_2);

 VAR_5 = FUNC_6(VAR_4->port);
 if (VAR_5.u64 == VAR_4->link_info) {



  if (VAR_1 && (VAR_5.s.speed == 10)) {



   int VAR_6 = FUNC_4(VAR_4->port);
   int VAR_7 = FUNC_3(VAR_4->port);
   cvmx_gmxx_rxx_int_reg_t VAR_8;
   VAR_8.u64 = FUNC_7(FUNC_1(VAR_7, VAR_6));
   if (VAR_8.s.pcterr) {






    cvmx_gmxx_rxx_frm_ctl_t VAR_9;
    cvmx_ipd_sub_port_fcs_t VAR_10;


    VAR_9.u64 = FUNC_7(FUNC_0(VAR_7, VAR_6));
    VAR_9.s.pre_chk = 0;
    FUNC_8(FUNC_0(VAR_7, VAR_6), VAR_9.u64);


    VAR_10.u64 = FUNC_7(VAR_0);
    VAR_10.s.port_bit &= 0xffffffffull ^ (1ull<<VAR_4->port);
    FUNC_8(VAR_0, VAR_10.u64);


    FUNC_8(FUNC_1(VAR_7, VAR_6), VAR_8.u64);
    FUNC_2("%s: Using 10Mbps with software preamble removal\n", FUNC_9(VAR_3));
   }
  }
  FUNC_11(&VAR_2);
  return;
 }





 if (VAR_1) {

  cvmx_gmxx_rxx_frm_ctl_t VAR_11;
  cvmx_ipd_sub_port_fcs_t VAR_12;
  cvmx_gmxx_rxx_int_reg_t VAR_13;
  int VAR_14 = FUNC_4(VAR_4->port);
  int VAR_15 = FUNC_3(VAR_4->port);


  VAR_11.u64 = FUNC_7(FUNC_0(VAR_15, VAR_14));
  VAR_11.s.pre_chk = 1;
  FUNC_8(FUNC_0(VAR_15, VAR_14), VAR_11.u64);

  VAR_12.u64 = FUNC_7(VAR_0);
  VAR_12.s.port_bit |= 1ull<<VAR_4->port;
  FUNC_8(VAR_0, VAR_12.u64);

  VAR_13.u64 = FUNC_7(FUNC_1(VAR_15, VAR_14));
  FUNC_8(FUNC_1(VAR_15, VAR_14), VAR_13.u64);
 }

 if (VAR_4->miibus == ((void*)0)) {
  VAR_5 = FUNC_5(VAR_4->port);
  VAR_4->link_info = VAR_5.u64;
  VAR_4->need_link_update = 1;
 }
 FUNC_11(&VAR_2);
}
