
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccsig {scalar_t__ type; int arg1; scalar_t__ has_msg; int arg2; int sig; int target; } ;
struct ccdata {int free_sigs; int sigs; } ;


 scalar_t__ VAR_0 ;
 struct ccsig* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccsig*,int ) ;
 int FUNC_2 (int *,struct ccsig*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct ccdata*,char*,char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct ccdata *VAR_2)
{
 struct ccsig *VAR_3;

 FUNC_4(VAR_2, "start %s", "work");
 while ((VAR_3 = FUNC_0(&VAR_2->sigs)) != ((void*)0)) {
  FUNC_2(&VAR_2->sigs, VAR_3, VAR_1);
  if (VAR_3->type == VAR_0)
   FUNC_5(VAR_3->target, VAR_3->sig, VAR_3->arg1, VAR_3->arg2);
  else {
   FUNC_3(VAR_3->target, VAR_3->sig, VAR_3->arg1, VAR_3->arg2);
   if (VAR_3->has_msg)
    FUNC_6(VAR_3->arg1);
  }
  FUNC_1(&VAR_2->free_sigs, VAR_3, VAR_1);
 }
 FUNC_4(VAR_2, "end %s", "work");
}
