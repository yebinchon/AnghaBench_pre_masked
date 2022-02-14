
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_hdl_t ;
typedef scalar_t__ dtrace_actkind_t ;
struct TYPE_6__ {TYPE_3__* dtad_difo; scalar_t__ dtad_kind; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
typedef int dt_node_t ;
struct TYPE_5__ {int dtdt_size; } ;
struct TYPE_7__ {TYPE_1__ dtdo_rtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(dtrace_hdl_t *VAR_6, dtrace_actdesc_t *VAR_7,
    dt_node_t *VAR_8, dtrace_actkind_t VAR_9)
{
 FUNC_0(VAR_9 == VAR_1 || VAR_9 == VAR_0 ||
     VAR_9 == VAR_4 || VAR_9 == VAR_3 ||
     VAR_9 == VAR_2);

 FUNC_2(VAR_5, VAR_8);
 VAR_7->dtad_difo = FUNC_1(VAR_5);
 VAR_7->dtad_kind = VAR_9;
 VAR_7->dtad_difo->dtdo_rtype.dtdt_size = sizeof (uint64_t);
}
