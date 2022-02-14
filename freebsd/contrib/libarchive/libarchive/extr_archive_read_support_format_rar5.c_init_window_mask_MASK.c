
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ window_mask; scalar_t__ window_size; } ;
struct rar5 {TYPE_1__ cstate; } ;



__attribute__((used)) static void FUNC_0(struct rar5* VAR_0) {
 if (VAR_0->cstate.window_size)
  VAR_0->cstate.window_mask = VAR_0->cstate.window_size - 1;
 else
  VAR_0->cstate.window_mask = 0;
}
