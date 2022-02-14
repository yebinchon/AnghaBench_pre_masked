
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int clear_timestamp; int assert_timestamp; } ;
struct TYPE_8__ {int mode; int api_version; } ;
struct TYPE_6__ {int current_mode; int clear_timestamp; int assert_timestamp; } ;
struct pps_state {int ppscap; int kcmode; TYPE_3__ ppsinfo; TYPE_4__ ppsparam; TYPE_2__ ppsinfo_ffc; } ;
struct pps_kcbind_args {int edge; int kernel_consumer; int tsformat; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct pps_fetch_ffc_args {TYPE_2__ pps_info_buf_ffc; TYPE_1__ timeout; int tsformat; } ;
struct pps_fetch_args {int dummy; } ;
typedef TYPE_4__ pps_params_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct pps_fetch_args*,struct pps_state*) ;

int
FUNC_2(u_long VAR_9, caddr_t VAR_10, struct pps_state *VAR_11)
{
 pps_params_t *VAR_12;
 struct pps_fetch_args *VAR_13;







 FUNC_0(VAR_11 != ((void*)0), ("NULL pps pointer in pps_ioctl"));
 switch (VAR_9) {
 case 137:
  return (0);
 case 136:
  return (0);
 case 130:
  VAR_12 = (pps_params_t *)VAR_10;
  if (VAR_12->mode & ~VAR_11->ppscap)
   return (VAR_0);





  VAR_11->ppsparam = *VAR_12;
  return (0);
 case 132:
  VAR_12 = (pps_params_t *)VAR_10;
  *VAR_12 = VAR_11->ppsparam;
  VAR_12->api_version = VAR_5;
  return (0);
 case 133:
  *(int*)VAR_10 = VAR_11->ppscap;
  return (0);
 case 135:
  VAR_13 = (struct pps_fetch_args *)VAR_10;
  return (FUNC_1(VAR_13, VAR_11));
 case 131:
  return (VAR_2);

 default:
  return (VAR_1);
 }
}
