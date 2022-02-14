
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* dten_vstate; struct TYPE_10__* dten_next; } ;
typedef TYPE_4__ dtrace_enabling_t ;
typedef int cred_t ;
struct TYPE_9__ {TYPE_2__* dtvs_state; } ;
struct TYPE_7__ {int * dcr_cred; } ;
struct TYPE_8__ {TYPE_1__ dts_cred; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
 dtrace_enabling_t *VAR_4;

 FUNC_4(&VAR_0);
 FUNC_4(&VAR_2);
 for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->dten_next) {






   (void) FUNC_2(VAR_4, ((void*)0));
 }

 FUNC_5(&VAR_2);
 FUNC_5(&VAR_0);
}
