
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cgraph_edge {int call_stmt; TYPE_1__* caller; TYPE_2__* next_callee; TYPE_3__* prev_callee; } ;
struct TYPE_6__ {TYPE_2__* next_callee; } ;
struct TYPE_5__ {TYPE_3__* prev_callee; } ;
struct TYPE_4__ {scalar_t__ call_site_hash; TYPE_2__* callees; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2 (struct cgraph_edge *VAR_0)
{
  if (VAR_0->prev_callee)
    VAR_0->prev_callee->next_callee = VAR_0->next_callee;
  if (VAR_0->next_callee)
    VAR_0->next_callee->prev_callee = VAR_0->prev_callee;
  if (!VAR_0->prev_callee)
    VAR_0->caller->callees = VAR_0->next_callee;
  if (VAR_0->caller->call_site_hash)
    FUNC_1 (VAR_0->caller->call_site_hash,
          VAR_0->call_stmt,
            FUNC_0 (VAR_0->call_stmt));
}
