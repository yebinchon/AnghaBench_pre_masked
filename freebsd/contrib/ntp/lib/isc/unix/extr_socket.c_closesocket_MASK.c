
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ isc_sockettype_t ;
struct TYPE_7__ {scalar_t__* fdstate; int maxfd; int* pipe_fds; int lock; int * fdlock; int stats; int ** fds; } ;
typedef TYPE_1__ isc__socketmgr_t ;
struct TYPE_8__ {scalar_t__ type; int * statsindex; } ;
typedef TYPE_2__ isc__socket_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void
FUNC_6(isc__socketmgr_t *VAR_8, isc__socket_t *VAR_9, int VAR_10) {
 isc_sockettype_t VAR_11 = VAR_9->type;
 int VAR_12 = FUNC_0(VAR_10);





 FUNC_1(&VAR_8->fdlock[VAR_12]);
 VAR_8->fds[VAR_10] = ((void*)0);
 if (VAR_11 == VAR_7)
  VAR_8->fdstate[VAR_10] = VAR_0;
 else
  VAR_8->fdstate[VAR_10] = VAR_1;
 FUNC_2(&VAR_8->fdlock[VAR_12]);
 if (VAR_11 == VAR_7) {
  (void)FUNC_5(VAR_8, VAR_10, VAR_4);
  (void)FUNC_5(VAR_8, VAR_10, VAR_5);
 } else
  FUNC_4(VAR_8, VAR_10, VAR_3);

 FUNC_3(VAR_8->stats, VAR_9->statsindex[VAR_6]);
}
