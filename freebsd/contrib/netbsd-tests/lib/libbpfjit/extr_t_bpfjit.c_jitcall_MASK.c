
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int (* bpfjit_func_t ) (int *,TYPE_1__*) ;
struct TYPE_4__ {unsigned int wirelen; unsigned int buflen; int const* pkt; } ;
typedef TYPE_1__ bpf_args_t ;



__attribute__((used)) static inline
unsigned int FUNC_0(bpfjit_func_t VAR_0,
    const uint8_t *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 bpf_args_t VAR_4;

 VAR_4.pkt = VAR_1;
 VAR_4.wirelen = VAR_2;
 VAR_4.buflen = VAR_3;

 return VAR_0(((void*)0), &VAR_4);
}
