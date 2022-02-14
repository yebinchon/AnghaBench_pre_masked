
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_4__ {int enc_cache_lock; int enc_cache; int enc_daemon_cache; } ;
typedef TYPE_1__ enc_softc_t ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(enc_softc_t *VAR_0, struct enc_fsm_state *VAR_1,
    union ccb *VAR_2, uint8_t **VAR_3, int VAR_4, int VAR_5)
{

 FUNC_1(&VAR_0->enc_cache_lock);
 FUNC_0(VAR_0, &VAR_0->enc_daemon_cache,
          &VAR_0->enc_cache);
 FUNC_2(&VAR_0->enc_cache_lock);

 return (0);
}
