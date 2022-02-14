
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_1__* dtpr_provider; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_7__ {TYPE_2__* dte_probe; } ;
typedef TYPE_3__ dtrace_ecb_t ;
struct TYPE_5__ {int dtpv_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int **,int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,int ,int ,int ,void*) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_3(dtrace_ecb_t *VAR_3)
{
 dtrace_probe_t *VAR_4 = VAR_3->dte_probe;




 FUNC_0(VAR_4 != ((void*)0));

 if (VAR_1)
  return;

 if (VAR_2 != ((void*)0))
  return;

 if (FUNC_1(&VAR_2, ((void*)0), VAR_0) != ((void*)0))
  return;






 FUNC_2("dtrace: panic action at probe %s:%s:%s:%s (ecb %p)",
     VAR_4->dtpr_provider->dtpv_name, VAR_4->dtpr_mod,
     VAR_4->dtpr_func, VAR_4->dtpr_name, (void *)VAR_3);
}
