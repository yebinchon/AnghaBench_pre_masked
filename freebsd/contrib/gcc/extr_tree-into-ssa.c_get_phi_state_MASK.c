
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum need_phi_state { ____Placeholder_need_phi_state } need_phi_state ;
struct TYPE_4__ {int need_phi_state; } ;
struct TYPE_3__ {int need_phi_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static inline enum need_phi_state
FUNC_3 (tree VAR_1)
{
  if (FUNC_0 (VAR_1) == VAR_0)
    return FUNC_1 (VAR_1)->need_phi_state;
  else
    return FUNC_2 (VAR_1)->need_phi_state;
}
