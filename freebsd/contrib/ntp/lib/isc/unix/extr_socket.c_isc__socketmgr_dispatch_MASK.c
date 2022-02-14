
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int writeset; int readset; int maxfd; int nevents; } ;
typedef TYPE_1__ isc_socketwait_t ;
typedef int isc_socketmgr_t ;
typedef int isc_result_t ;
struct TYPE_8__ {int events; } ;
typedef TYPE_2__ isc__socketmgr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,...) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;

isc_result_t
FUNC_2(isc_socketmgr_t *VAR_4, isc_socketwait_t *VAR_5) {
 isc__socketmgr_t *VAR_6 = (isc__socketmgr_t *)VAR_4;

 FUNC_0(VAR_5 == &VAR_3);





 if (VAR_6 == ((void*)0))
  return (VAR_0);
}
