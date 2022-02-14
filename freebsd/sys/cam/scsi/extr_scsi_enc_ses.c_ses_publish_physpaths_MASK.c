
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct ses_iterator {int dummy; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_6__ {int enc_daemon_cache; } ;
typedef TYPE_1__ enc_softc_t ;
typedef int enc_element_t ;
typedef int enc_cache_t ;


 int FUNC_0 (TYPE_1__*,int *,struct ses_iterator*) ;
 int * FUNC_1 (struct ses_iterator*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,struct ses_iterator*) ;

__attribute__((used)) static int
FUNC_4(enc_softc_t *VAR_0, struct enc_fsm_state *VAR_1,
    union ccb *VAR_2, uint8_t **VAR_3, int VAR_4, int VAR_5)
{
 struct ses_iterator VAR_6;
 enc_cache_t *VAR_7;
 enc_element_t *VAR_8;

 VAR_7 = &VAR_0->enc_daemon_cache;

 FUNC_0(VAR_0, VAR_7, &VAR_6);
 while ((VAR_8 = FUNC_1(&VAR_6)) != ((void*)0)) {






  if (FUNC_3(VAR_0, VAR_8, &VAR_6) == 0)
   FUNC_2(VAR_0, VAR_8);
 }

 return (0);
}
