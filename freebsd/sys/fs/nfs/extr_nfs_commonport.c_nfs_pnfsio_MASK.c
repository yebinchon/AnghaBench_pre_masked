
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_fn_t ;
struct taskqueue {int dummy; } ;
struct pnfsio {int inprog; int tsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct taskqueue* FUNC_1 (char*,int ,int ,struct taskqueue**) ;
 int FUNC_2 (struct taskqueue*,int *) ;
 int FUNC_3 (struct taskqueue*) ;
 int FUNC_4 (struct taskqueue**,int,int ,char*) ;
 int VAR_5 ;

int
FUNC_5(task_fn_t *VAR_6, void *VAR_7)
{
 struct pnfsio *VAR_8;
 int VAR_9;
 static struct taskqueue *VAR_10 = ((void*)0);

 VAR_8 = (struct pnfsio *)VAR_7;
 if (VAR_10 == ((void*)0)) {
  if (VAR_4 == 0)
   return (VAR_1);
  if (VAR_4 < 0)
   VAR_4 = VAR_3 * 4;
  VAR_10 = FUNC_1("pnfsioq", VAR_2,
      VAR_5, &VAR_10);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  VAR_9 = FUNC_4(&VAR_10, VAR_4,
      0, "pnfsiot");
  if (VAR_9 != 0) {
   FUNC_3(VAR_10);
   VAR_10 = ((void*)0);
   return (VAR_9);
  }
 }
 VAR_8->inprog = 1;
 FUNC_0(&VAR_8->tsk, 0, VAR_6, VAR_7);
 VAR_9 = FUNC_2(VAR_10, &VAR_8->tsk);
 if (VAR_9 != 0)
  VAR_8->inprog = 0;
 return (VAR_9);
}
