
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtad_kind; TYPE_1__* dtad_difo; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_4__ {scalar_t__ dtdo_destructive; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const dtrace_actdesc_t *VAR_1)
{
 return (FUNC_0(VAR_1->dtad_kind) || (VAR_1->dtad_kind ==
     VAR_0 && VAR_1->dtad_difo->dtdo_destructive));
}
