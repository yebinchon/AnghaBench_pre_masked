
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_5__ {int ses_pending_requests; } ;
typedef TYPE_1__ ses_softc_t ;
struct TYPE_6__ {TYPE_1__* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_0, struct enc_fsm_state *VAR_1,
    union ccb *VAR_2, uint8_t **VAR_3, int VAR_4, int VAR_5)
{
 ses_softc_t *VAR_6;

 VAR_6 = VAR_0->enc_private;





 FUNC_1(&VAR_6->ses_pending_requests, VAR_4);
 FUNC_0(VAR_0);
 return (0);
}
