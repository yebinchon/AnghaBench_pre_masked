
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpc_token {struct tpc_token* params; } ;
struct ctl_softc {int tpc_lock; int tpc_tokens; int tpc_timeout; } ;


 int VAR_0 ;
 struct tpc_token* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct tpc_token*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tpc_token*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct ctl_softc *VAR_2)
{
 struct tpc_token *VAR_3;

 FUNC_2(&VAR_2->tpc_timeout);


 FUNC_5(&VAR_2->tpc_lock);
 while ((VAR_3 = FUNC_0(&VAR_2->tpc_tokens)) != ((void*)0)) {
  FUNC_1(&VAR_2->tpc_tokens, VAR_3, VAR_1);
  FUNC_3(VAR_3->params, VAR_0);
  FUNC_3(VAR_3, VAR_0);
 }
 FUNC_6(&VAR_2->tpc_lock);
 FUNC_4(&VAR_2->tpc_lock);
}
