
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int epref; } ;
struct TYPE_6__ {TYPE_1__ status_enq; } ;
struct uni_all {TYPE_2__ u; } ;
struct call {int se_active; TYPE_3__* uni; int stat_epref; } ;
struct TYPE_7__ {int timer322; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct call*,int ,int ) ;
 int FUNC_1 (struct uni_all*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,struct call*,int *,int ,int ,int *,struct uni_all*) ;
 int FUNC_3 (struct uni_all*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(struct call *VAR_3, struct uni_all *VAR_4)
{
 if (VAR_3->se_active) {
  FUNC_2(VAR_3->uni, VAR_1, VAR_3, ((void*)0),
      VAR_0, 0, ((void*)0), VAR_4);
  return;
 }

 VAR_3->stat_epref = VAR_4->u.status_enq.epref;
 (void)FUNC_3(VAR_4, VAR_3->uni);
 FUNC_1(VAR_4);

 FUNC_0(VAR_3, VAR_2, VAR_3->uni->timer322);
 VAR_3->se_active = 1;
}
