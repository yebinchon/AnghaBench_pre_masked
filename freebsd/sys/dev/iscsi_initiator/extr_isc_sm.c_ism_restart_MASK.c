
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmd; } ;
struct TYPE_6__ {int flags; TYPE_1__ sn; int io_mtx; } ;
typedef TYPE_2__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int*) ;

void
FUNC_5(isc_session_t *VAR_1)
{
     int VAR_2;

     FUNC_3(2, "restart ...");
     VAR_2 = FUNC_0(VAR_1);






     FUNC_1(&VAR_1->io_mtx);
     if(VAR_1->flags & VAR_0) {
   FUNC_4(&VAR_1->flags);
     }
     FUNC_2(&VAR_1->io_mtx);

     FUNC_3(2, "restarted sn.cmd=0x%x lastcmd=0x%x", VAR_1->sn.cmd, VAR_2);
}
