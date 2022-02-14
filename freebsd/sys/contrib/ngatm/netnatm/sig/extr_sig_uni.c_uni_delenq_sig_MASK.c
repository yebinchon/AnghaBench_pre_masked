
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int u_int ;
struct uni_msg {int dummy; } ;
struct uni_all {int dummy; } ;
struct uni {int delq; } ;
struct sig {struct uni_all* u; struct party* party; struct call* call; struct uni_msg* msg; void* cookie; void* sig; int type; } ;
struct party {int dummy; } ;
struct call {int dummy; } ;


 struct sig* FUNC_0 () ;
 int FUNC_1 (int *,struct sig*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct uni *VAR_1, u_int VAR_2, struct call *VAR_3,
    struct party *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    struct uni_msg *VAR_7, struct uni_all *VAR_8)
{
 struct sig *VAR_9;

 if ((VAR_9 = FUNC_0()) != ((void*)0)) {
  VAR_9->type = VAR_2;
  VAR_9->sig = VAR_5;
  VAR_9->cookie = VAR_6;
  VAR_9->msg = VAR_7;
  VAR_9->call = VAR_3;
  VAR_9->party = VAR_4;
  VAR_9->u = VAR_8;
  FUNC_1(&VAR_1->delq, VAR_9, VAR_0);
 }
}
