
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
struct call {scalar_t__ cnt322; TYPE_3__* uni; scalar_t__ se_active; int stat_epref; scalar_t__ mine; int cref; } ;
struct TYPE_7__ {scalar_t__ init322; int cause; int timer322; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct uni_all*,int ,int ,int) ;
 int FUNC_3 (struct call*,int ,int ) ;
 struct uni_all* FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct uni_all*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*,int ,int,char*,int ,char*,scalar_t__) ;
 int FUNC_7 (struct call*) ;
 int VAR_4 ;
 int FUNC_8 (struct uni_all*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_9(struct call *VAR_5)
{
 struct uni_all *VAR_6;

 FUNC_6(VAR_5->uni, VAR_2, 1, "call %u/%s T322 tick %d",
     VAR_5->cref, VAR_5->mine ? "mine" : "his", VAR_5->cnt322 + 1);

 if (++VAR_5->cnt322 < VAR_5->uni->init322) {
  if ((VAR_6 = FUNC_4()) != ((void*)0)) {
   FUNC_2(VAR_6, VAR_3, VAR_5->cref, !VAR_5->mine);
   VAR_6->u.status_enq.epref = VAR_5->stat_epref;
   (void)FUNC_8(VAR_6, VAR_5->uni);
   FUNC_5(VAR_6);
  }
  FUNC_3(VAR_5, VAR_4, VAR_5->uni->timer322);
  return;
 }
 VAR_5->se_active = 0;

 FUNC_1(VAR_5->uni->cause, VAR_0, VAR_1);
 FUNC_0(VAR_5->uni->cause, "322");

 FUNC_7(VAR_5);
}
