
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int ses_pending_requests; int ses_requests; } ;
typedef TYPE_4__ ses_softc_t ;
typedef int ses_cache_t ;
struct TYPE_12__ {TYPE_4__* private; } ;
struct TYPE_11__ {TYPE_4__* private; } ;
struct TYPE_14__ {TYPE_4__* enc_private; TYPE_3__ enc_daemon_cache; TYPE_2__ enc_cache; int enc_fsm_states; int enc_vec; TYPE_1__* periph; } ;
typedef TYPE_5__ enc_softc_t ;
struct TYPE_10__ {int path; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_5__*,int) ;

int
FUNC_6(enc_softc_t *VAR_5)
{
 ses_softc_t *VAR_6;

 FUNC_0(VAR_5->periph->path, VAR_0,
     ("entering enc_softc_init(%p)\n", VAR_5));

 VAR_5->enc_vec = VAR_4;
 VAR_5->enc_fsm_states = VAR_3;

 if (VAR_5->enc_private == ((void*)0))
  VAR_5->enc_private = FUNC_2(sizeof(ses_softc_t));
 if (VAR_5->enc_cache.private == ((void*)0))
  VAR_5->enc_cache.private = FUNC_2(sizeof(ses_cache_t));
 if (VAR_5->enc_daemon_cache.private == ((void*)0))
  VAR_5->enc_daemon_cache.private =
       FUNC_2(sizeof(ses_cache_t));

 if (VAR_5->enc_private == ((void*)0)
  || VAR_5->enc_cache.private == ((void*)0)
  || VAR_5->enc_daemon_cache.private == ((void*)0)) {
  FUNC_1(VAR_5->enc_private);
  FUNC_1(VAR_5->enc_cache.private);
  FUNC_1(VAR_5->enc_daemon_cache.private);
  return (VAR_1);
 }

 VAR_6 = VAR_5->enc_private;
 FUNC_3(&VAR_6->ses_requests);
 FUNC_3(&VAR_6->ses_pending_requests);

 FUNC_4(VAR_5, VAR_2);


 if (0) (void) FUNC_5(VAR_5, 1);

 return (0);
}
