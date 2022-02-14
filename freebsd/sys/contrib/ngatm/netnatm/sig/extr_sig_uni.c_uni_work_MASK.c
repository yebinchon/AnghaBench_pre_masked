
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni {int working; int workq; } ;
struct sig {int type; int u; int msg; int cookie; int sig; int party; int call; } ;


 int FUNC_0 (int ,char*) ;


 int FUNC_1 (struct sig*) ;



 struct sig* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sig*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct uni*,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct uni*,int ,int ,int ,int ) ;
 int FUNC_8 (struct uni*,int ,int ,int ,int ) ;

void
FUNC_9(struct uni *VAR_1)
{
 struct sig *VAR_2;

 if (VAR_1->working)
  return;
 VAR_1->working = 1;

 while ((VAR_2 = FUNC_2(&VAR_1->workq)) != ((void*)0)) {
  FUNC_3(&VAR_1->workq, VAR_2, VAR_0);
  switch (VAR_2->type) {

    case 131:
   FUNC_5(VAR_1, VAR_2->sig, VAR_2->cookie, VAR_2->msg);
   break;

    case 128:
   FUNC_8(VAR_1, VAR_2->sig, VAR_2->cookie, VAR_2->msg, VAR_2->u);
   break;

    case 129:
   FUNC_7(VAR_1, VAR_2->sig, VAR_2->cookie, VAR_2->msg, VAR_2->u);
   break;

    case 132:
   FUNC_4(VAR_2->call, VAR_2->sig, VAR_2->cookie, VAR_2->msg, VAR_2->u);
   break;

    case 130:
   FUNC_6(VAR_2->party, VAR_2->sig, VAR_2->cookie, VAR_2->msg, VAR_2->u);
   break;

    default:
   FUNC_0(0, ("bad signal type"));
  }
  FUNC_1(VAR_2);
 }

 VAR_1->working = 0;
}
