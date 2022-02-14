
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_program {int dummy; } ;
struct TYPE_4__ {int (* setfilter_op ) (TYPE_1__*,struct bpf_program*) ;} ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*,struct bpf_program*) ;

int
FUNC_1(pcap_t *VAR_0, struct bpf_program *VAR_1)
{
 return (VAR_0->setfilter_op(VAR_0, VAR_1));
}
