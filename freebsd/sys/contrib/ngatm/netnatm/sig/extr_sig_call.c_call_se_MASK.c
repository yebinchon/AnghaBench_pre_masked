
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_all {int dummy; } ;
struct call {int se_active; TYPE_1__* uni; int mine; int cref; int stat_epref; scalar_t__ cnt322; } ;
struct TYPE_2__ {int timer322; } ;


 int FUNC_0 (struct uni_all*,int ,int ,int) ;
 int FUNC_1 (struct call*,int ,int ) ;
 struct uni_all* FUNC_2 () ;
 int FUNC_3 (struct uni_all*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (struct uni_all*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct call *VAR_2)
{
 struct uni_all *VAR_3;

 VAR_2->cnt322 = 0;
 if (VAR_2->se_active)
  return;

 FUNC_4(&VAR_2->stat_epref, 0, sizeof(VAR_2->stat_epref));
 if ((VAR_3 = FUNC_2()) != ((void*)0)) {
  FUNC_0(VAR_3, VAR_0, VAR_2->cref, !VAR_2->mine);
  (void)FUNC_5(VAR_3, VAR_2->uni);
  FUNC_3(VAR_3);
 }

 FUNC_1(VAR_2, VAR_1, VAR_2->uni->timer322);
 VAR_2->se_active = 1;
}
