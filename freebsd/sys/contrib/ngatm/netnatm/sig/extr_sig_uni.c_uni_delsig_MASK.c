
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uni {int delq; int workq; } ;
struct sig {scalar_t__ type; scalar_t__ u; scalar_t__ msg; struct party* party; struct call* call; } ;
struct party {int dummy; } ;
struct call {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sig*) ;
 scalar_t__ VAR_1 ;
 struct sig* FUNC_1 (int *) ;
 struct sig* FUNC_2 (struct sig*,int ) ;
 int FUNC_3 (int *,struct sig*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6(struct uni *VAR_3, u_int VAR_4, struct call *VAR_5, struct party *VAR_6)
{
 struct sig *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(&VAR_3->workq);
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_7, VAR_2);
  if ((VAR_4 == VAR_0 && VAR_7->type == VAR_0 &&
      VAR_7->call == VAR_5) ||
      (VAR_4 == VAR_1 && VAR_7->type == VAR_1 &&
      VAR_7->call == VAR_5 && VAR_7->party == VAR_6)) {
   FUNC_3(&VAR_3->workq, VAR_7, VAR_2);
   if (VAR_7->msg)
    FUNC_5(VAR_7->msg);
   if (VAR_7->u)
    FUNC_4(VAR_7->u);
   FUNC_0(VAR_7);
  }
  VAR_7 = VAR_8;
 }

 VAR_7 = FUNC_1(&VAR_3->delq);
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_7, VAR_2);
  if ((VAR_4 == VAR_0 && VAR_7->type == VAR_0 &&
      VAR_7->call == VAR_5) ||
      (VAR_4 == VAR_1 && VAR_7->type == VAR_1 &&
      VAR_7->call == VAR_5 && VAR_7->party == VAR_6)) {
   FUNC_3(&VAR_3->delq, VAR_7, VAR_2);
   if (VAR_7->msg)
    FUNC_5(VAR_7->msg);
   if (VAR_7->u)
    FUNC_4(VAR_7->u);
   FUNC_0(VAR_7); }

  VAR_7 = VAR_8;
 }
}
