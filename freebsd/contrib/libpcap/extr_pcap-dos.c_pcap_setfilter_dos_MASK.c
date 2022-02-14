
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_program {int dummy; } ;
struct TYPE_3__ {struct bpf_program fcode; } ;
typedef TYPE_1__ pcap_t ;



__attribute__((used)) static int FUNC_0 (pcap_t *VAR_0, struct bpf_program *VAR_1)
{
  if (!VAR_0)
     return (-1);
  VAR_0->fcode = *VAR_1;
  return (0);
}
