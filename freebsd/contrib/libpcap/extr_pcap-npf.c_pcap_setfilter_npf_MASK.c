
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_win {int filtering_in_kernel; int adapter; } ;
struct bpf_program {int dummy; } ;
struct TYPE_4__ {scalar_t__ cc; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct bpf_program*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct bpf_program*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_1, struct bpf_program *VAR_2)
{
 struct pcap_win *VAR_3 = VAR_1->priv;

 if(FUNC_0(VAR_3->adapter,VAR_2)==VAR_0){
  if (FUNC_1(VAR_1, VAR_2) < 0)
   return (-1);
  VAR_3->filtering_in_kernel = 0;
  return (0);
 }




 VAR_3->filtering_in_kernel = 1;







 VAR_1->cc = 0;
 return (0);
}
