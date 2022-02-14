
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bpf_ctx_t ;
struct TYPE_3__ {scalar_t__ arg; int * mem; } ;
typedef TYPE_1__ bpf_args_t ;



__attribute__((used)) static uint32_t
FUNC_0(const bpf_ctx_t *VAR_0, bpf_args_t *VAR_1, uint32_t VAR_2)
{

 return VAR_1->mem[(uintptr_t)VAR_1->arg];
}
