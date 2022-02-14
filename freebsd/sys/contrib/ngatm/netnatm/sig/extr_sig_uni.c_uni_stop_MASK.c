
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni {int delq; int workq; int calls; } ;
struct call {int dummy; } ;


 int FUNC_0 (int *) ;
 struct call* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct call*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct call*,int) ;

__attribute__((used)) static void
FUNC_4(struct uni *VAR_1)
{
 struct call *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->calls)) != ((void*)0)) {
  FUNC_2(&VAR_1->calls, VAR_2, VAR_0);
  FUNC_3(VAR_2, 1);
 }

 FUNC_0(&VAR_1->workq);
 FUNC_0(&VAR_1->delq);
}
