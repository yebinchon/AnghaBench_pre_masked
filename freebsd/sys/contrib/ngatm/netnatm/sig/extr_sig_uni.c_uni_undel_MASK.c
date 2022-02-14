
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni {int workq; int delq; } ;
struct sigqueue {int dummy; } ;
typedef struct sig sig ;


 scalar_t__ FUNC_0 (int *) ;
 struct sig* FUNC_1 (int *) ;
 int FUNC_2 (struct sigqueue*) ;
 int FUNC_3 (int *,struct sig*,int ) ;
 struct sig* FUNC_4 (struct sig*,int ) ;
 int FUNC_5 (int *,struct sig*,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct sig*,void*) ;

void
FUNC_7(struct uni *VAR_1, int (*VAR_2)(struct sig *, void *), void *VAR_3)
{
 struct sigqueue VAR_4;
 struct sig *VAR_5, *VAR_6;

 if (FUNC_0(&VAR_1->delq))
  return;

 FUNC_2(&VAR_4);

 VAR_5 = FUNC_1(&VAR_1->delq);
 while (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_5, VAR_0);
  if ((*VAR_2)(VAR_5, VAR_3)) {
   FUNC_5(&VAR_1->delq, VAR_5, VAR_0);
   FUNC_3(&VAR_1->workq, VAR_5, VAR_0);
  }
  VAR_5 = VAR_6;
 }
}
