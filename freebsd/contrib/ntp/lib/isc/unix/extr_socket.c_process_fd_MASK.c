
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ isc_boolean_t ;
struct TYPE_10__ {scalar_t__* fdstate; int * fdlock; TYPE_2__** fds; } ;
typedef TYPE_1__ isc__socketmgr_t ;
struct TYPE_11__ {int lock; scalar_t__ connecting; scalar_t__ listener; } ;
typedef TYPE_2__ isc__socket_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void
FUNC_9(isc__socketmgr_t *VAR_5, int VAR_6, isc_boolean_t VAR_7,
    isc_boolean_t VAR_8)
{
 isc__socket_t *VAR_9;
 isc_boolean_t VAR_10;
 isc_boolean_t VAR_11 = VAR_1, VAR_12 = VAR_1;
 int VAR_13 = FUNC_0(VAR_6);




 FUNC_1(&VAR_5->fdlock[VAR_13]);
 if (VAR_5->fdstate[VAR_6] == VAR_0) {
  FUNC_3(&VAR_5->fdlock[VAR_13]);

  (void)FUNC_8(VAR_5, VAR_6, VAR_3);
  (void)FUNC_8(VAR_5, VAR_6, VAR_4);
  return;
 }

 VAR_9 = VAR_5->fds[VAR_6];
 VAR_10 = VAR_1;
 if (VAR_7) {
  if (VAR_9 == ((void*)0)) {
   VAR_11 = VAR_2;
   goto check_write;
  }
  VAR_10 = VAR_2;
  FUNC_1(&VAR_9->lock);
  if (!FUNC_2(VAR_9)) {
   if (VAR_9->listener)
    FUNC_4(VAR_9);
   else
    FUNC_6(VAR_9);
  }
  VAR_11 = VAR_2;
 }
check_write:
 if (VAR_8) {
  if (VAR_9 == ((void*)0)) {
   VAR_12 = VAR_2;
   goto unlock_fd;
  }
  if (!VAR_10) {
   VAR_10 = VAR_2;
   FUNC_1(&VAR_9->lock);
  }
  if (!FUNC_2(VAR_9)) {
   if (VAR_9->connecting)
    FUNC_5(VAR_9);
   else
    FUNC_7(VAR_9);
  }
  VAR_12 = VAR_2;
 }
 if (VAR_10)
  FUNC_3(&VAR_9->lock);

 unlock_fd:
 FUNC_3(&VAR_5->fdlock[VAR_13]);
 if (VAR_11)
  (void)FUNC_8(VAR_5, VAR_6, VAR_3);
 if (VAR_12)
  (void)FUNC_8(VAR_5, VAR_6, VAR_4);

}
