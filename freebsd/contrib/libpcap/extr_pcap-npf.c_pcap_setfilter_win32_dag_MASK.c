
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_program {int dummy; } ;
struct TYPE_4__ {int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct bpf_program*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_0, struct bpf_program *VAR_1) {

 if(!VAR_1)
 {
  FUNC_1(VAR_0->errbuf, "setfilter: No filter specified", sizeof(VAR_0->errbuf));
  return (-1);
 }


 if (FUNC_0(VAR_0, VAR_1) < 0)
  return (-1);

 return (0);
}
