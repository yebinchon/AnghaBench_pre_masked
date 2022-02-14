
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct authunix_parms {int aup_time; int * aup_gids; int * aup_machname; } ;
struct TYPE_11__ {scalar_t__ oa_base; int oa_length; } ;
struct audata {TYPE_1__ au_origcred; int au_shfaults; } ;
typedef int bool_t ;
struct TYPE_12__ {int x_op; } ;
typedef TYPE_2__ XDR ;
struct TYPE_13__ {TYPE_1__ ah_cred; } ;
typedef TYPE_3__ AUTH ;


 struct audata* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,struct authunix_parms*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_8(AUTH *VAR_4, void *VAR_5)
{
 struct audata *VAR_6 = FUNC_0(VAR_4);
 struct authunix_parms VAR_7;
 struct timeval VAR_8;
 XDR VAR_9;
 int VAR_10;

 FUNC_3(VAR_4 != ((void*)0));

 if (VAR_4->ah_cred.oa_base == VAR_6->au_origcred.oa_base) {

  return (VAR_0);
 }
 VAR_6->au_shfaults ++;


 VAR_7.aup_machname = ((void*)0);
 VAR_7.aup_gids = ((void*)0);
 FUNC_7(&VAR_9, VAR_6->au_origcred.oa_base,
     VAR_6->au_origcred.oa_length, VAR_1);
 VAR_10 = FUNC_6(&VAR_9, &VAR_7);
 if (! VAR_10)
  goto done;


 (void)FUNC_4(&VAR_8, ((void*)0));
 VAR_7.aup_time = VAR_8.tv_sec;
 VAR_9.x_op = VAR_2;
 FUNC_2(&VAR_9, 0);
 VAR_10 = FUNC_6(&VAR_9, &VAR_7);
 if (! VAR_10)
  goto done;
 VAR_4->ah_cred = VAR_6->au_origcred;
 FUNC_5(VAR_4);
done:

 VAR_9.x_op = VAR_3;
 (void)FUNC_6(&VAR_9, &VAR_7);
 FUNC_1(&VAR_9);
 return (VAR_10);
}
