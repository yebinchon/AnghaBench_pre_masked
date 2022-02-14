
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int isc_sockettype_t ;
typedef int isc_socketmgr_t ;
typedef int isc_socketmethods_t ;
typedef int isc_socket_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_18__ {size_t maxfd; int lock; int socklist; int * fdlock; int * fdstate; TYPE_5__** fds; int stats; } ;
typedef TYPE_4__ isc__socketmgr_t ;
struct TYPE_15__ {int * methods; } ;
struct TYPE_19__ {int type; int pf; int references; size_t fd; TYPE_3__* manager; TYPE_1__ common; int * statsindex; } ;
typedef TYPE_5__ isc__socket_t ;
struct TYPE_17__ {TYPE_2__* fdpollinfo; } ;
struct TYPE_16__ {scalar_t__ want_read; scalar_t__ want_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 size_t VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,TYPE_5__**) ;
 int FUNC_8 (TYPE_5__**) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int *,int ,int ,int ,int ,char*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;

__attribute__((used)) static isc_result_t
FUNC_12(isc_socketmgr_t *VAR_16, int VAR_17, isc_sockettype_t VAR_18,
       isc_socket_t **VAR_19, isc_socket_t *VAR_20)
{
 isc__socket_t *VAR_21 = ((void*)0);
 isc__socketmgr_t *VAR_22 = (isc__socketmgr_t *)VAR_16;
 isc_result_t VAR_23;
 int VAR_24;

 FUNC_4(FUNC_6(VAR_22));
 FUNC_4(VAR_19 != ((void*)0) && *VAR_19 == ((void*)0));
 FUNC_4(VAR_18 != VAR_8);

 VAR_23 = FUNC_7(VAR_22, VAR_18, &VAR_21);
 if (VAR_23 != VAR_4)
  return (VAR_23);

 switch (VAR_21->type) {
 case 129:
  VAR_21->statsindex =
   (VAR_17 == VAR_0) ? VAR_14 : VAR_15;
  break;
 case 130:
  VAR_21->statsindex =
   (VAR_17 == VAR_0) ? VAR_11 : VAR_12;
  break;
 case 128:
  VAR_21->statsindex = VAR_13;
  break;
 default:
  FUNC_1(0);
 }

 VAR_21->pf = VAR_17;

 VAR_23 = FUNC_10(VAR_22, VAR_21, (isc__socket_t *)VAR_20);
 if (VAR_23 != VAR_4) {
  FUNC_9(VAR_22->stats, VAR_21->statsindex[VAR_6]);
  FUNC_8(&VAR_21);
  return (VAR_23);
 }

 VAR_21->common.methods = (isc_socketmethods_t *)&VAR_10;
 VAR_21->references = 1;
 *VAR_19 = (isc_socket_t *)VAR_21;






 VAR_24 = FUNC_0(VAR_21->fd);
 FUNC_3(&VAR_22->fdlock[VAR_24]);
 VAR_22->fds[VAR_21->fd] = VAR_21;
 VAR_22->fdstate[VAR_21->fd] = VAR_5;




 FUNC_5(&VAR_22->fdlock[VAR_24]);

 FUNC_3(&VAR_22->lock);
 FUNC_2(VAR_22->socklist, VAR_21, VAR_9);




 FUNC_5(&VAR_22->lock);

 FUNC_11(VAR_21, ((void*)0), VAR_1, VAR_7, VAR_2,
     VAR_3, VAR_20 == ((void*)0) ? "dupped" : "created");

 return (VAR_4);
}
