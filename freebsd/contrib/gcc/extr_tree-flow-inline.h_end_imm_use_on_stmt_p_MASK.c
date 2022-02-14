
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iter_node; int * imm_use; } ;
typedef TYPE_1__ imm_use_iterator ;



__attribute__((used)) static inline bool
FUNC_0 (imm_use_iterator *VAR_0)
{
  return (VAR_0->imm_use == &(VAR_0->iter_node));
}
