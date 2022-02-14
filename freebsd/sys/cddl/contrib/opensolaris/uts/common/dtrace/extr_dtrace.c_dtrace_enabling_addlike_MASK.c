
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
typedef int dtrace_predicate_t ;
typedef int dtrace_enabling_t ;
struct TYPE_8__ {int * dtpdd_predicate; } ;
struct TYPE_9__ {int dted_uarg; int dted_probe; TYPE_1__ dted_pred; TYPE_3__* dted_action; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;
struct TYPE_10__ {struct TYPE_10__* dtad_next; } ;
typedef TYPE_3__ dtrace_actdesc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(dtrace_enabling_t *VAR_1, dtrace_ecbdesc_t *VAR_2,
    dtrace_probedesc_t *VAR_3)
{
 dtrace_ecbdesc_t *VAR_4;
 dtrace_predicate_t *VAR_5;
 dtrace_actdesc_t *VAR_6;





 VAR_4 = FUNC_3(sizeof (dtrace_ecbdesc_t), VAR_0);

 if ((VAR_5 = VAR_2->dted_pred.dtpdd_predicate) != ((void*)0))
  FUNC_2(VAR_5);

 for (VAR_6 = VAR_2->dted_action; VAR_6 != ((void*)0); VAR_6 = VAR_6->dtad_next)
  FUNC_0(VAR_6);

 VAR_4->dted_action = VAR_2->dted_action;
 VAR_4->dted_pred = VAR_2->dted_pred;
 VAR_4->dted_probe = *VAR_3;
 VAR_4->dted_uarg = VAR_2->dted_uarg;

 FUNC_1(VAR_1, VAR_4);
}
