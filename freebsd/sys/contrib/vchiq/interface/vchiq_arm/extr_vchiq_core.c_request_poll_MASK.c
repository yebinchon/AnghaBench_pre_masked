
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int poll_needed; TYPE_1__* local; int * poll_services; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_8__ {int localport; int poll_flags; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
struct TYPE_6__ {int trigger; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

inline void
FUNC_4(VCHIQ_STATE_T *VAR_0, VCHIQ_SERVICE_T *VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 if (VAR_1) {
  do {
   VAR_3 = FUNC_1(&VAR_1->poll_flags);
  } while (FUNC_0(&VAR_1->poll_flags, VAR_3,
   VAR_3 | (1 << VAR_2)) != VAR_3);

  do {
   VAR_3 = FUNC_1(&VAR_0->poll_services[
    VAR_1->localport>>5]);
  } while (FUNC_0(
   &VAR_0->poll_services[VAR_1->localport>>5],
   VAR_3, VAR_3 | (1 << (VAR_1->localport & 0x1f)))
   != VAR_3);
 }

 VAR_0->poll_needed = 1;
 FUNC_3();


 FUNC_2(&VAR_0->local->trigger);
}
