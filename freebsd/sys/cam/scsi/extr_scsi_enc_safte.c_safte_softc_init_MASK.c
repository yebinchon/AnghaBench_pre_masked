
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scfg {int requests; } ;
struct TYPE_4__ {scalar_t__ enc_status; scalar_t__ nelms; } ;
struct TYPE_5__ {TYPE_1__ enc_cache; struct scfg* enc_private; int enc_fsm_states; int enc_vec; } ;
typedef TYPE_2__ enc_softc_t ;


 struct scfg* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(enc_softc_t *VAR_4)
{
 struct scfg *VAR_5;

 VAR_4->enc_vec = VAR_3;
 VAR_4->enc_fsm_states = VAR_2;

 if (VAR_4->enc_private == ((void*)0)) {
  VAR_4->enc_private = FUNC_0(VAR_1);
  if (VAR_4->enc_private == ((void*)0))
   return (VAR_0);
 }
 VAR_5 = VAR_4->enc_private;

 VAR_4->enc_cache.nelms = 0;
 VAR_4->enc_cache.enc_status = 0;

 FUNC_1(&VAR_5->requests);
 return (0);
}
