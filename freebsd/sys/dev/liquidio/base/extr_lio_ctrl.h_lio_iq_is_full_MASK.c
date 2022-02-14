
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct octeon_device {TYPE_1__** instr_queue; } ;
struct TYPE_2__ {int max_count; int instr_pending; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int
FUNC_1(struct octeon_device *VAR_0, uint32_t VAR_1)
{

 return (FUNC_0(&VAR_0->instr_queue[VAR_1]->instr_pending) >=
  (VAR_0->instr_queue[VAR_1]->max_count - 2));
}
