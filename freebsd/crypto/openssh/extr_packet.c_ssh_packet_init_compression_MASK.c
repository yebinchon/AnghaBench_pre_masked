
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int * compression_buffer; } ;


 int VAR_0 ;
 int * FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct ssh *VAR_1)
{
 if (!VAR_1->state->compression_buffer &&
    ((VAR_1->state->compression_buffer = FUNC_0()) == ((void*)0)))
  return VAR_0;
 return 0;
}
