
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_bpf {int filtering_in_kernel; } ;
struct bpf_program {int dummy; } ;
struct TYPE_4__ {int errbuf; scalar_t__ cc; int fd; int fcode; struct pcap_bpf* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct bpf_program*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_4, struct bpf_program *VAR_5)
{
 struct pcap_bpf *VAR_6 = VAR_4->priv;




 FUNC_3(&VAR_4->fcode);




 if (FUNC_1(VAR_4->fd, VAR_0, (caddr_t)VAR_5) == 0) {



  VAR_6->filtering_in_kernel = 1;
  VAR_4->cc = 0;
  return (0);
 }
 if (VAR_3 != VAR_1) {
  FUNC_2(VAR_4->errbuf, VAR_2,
      VAR_3, "BIOCSETF");
  return (-1);
 }






 if (FUNC_0(VAR_4, VAR_5) < 0)
  return (-1);
 VAR_6->filtering_in_kernel = 0;
 return (0);
}
