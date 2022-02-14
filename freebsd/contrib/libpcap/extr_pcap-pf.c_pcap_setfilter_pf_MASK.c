
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_pf {int filtering_in_kernel; } ;
struct bpf_version {scalar_t__ bv_major; scalar_t__ bv_minor; } ;
struct bpf_program {int dummy; } ;
struct TYPE_4__ {scalar_t__ cc; int errbuf; int fd; struct pcap_pf* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct bpf_program*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_6, struct bpf_program *VAR_7)
{
 struct pcap_pf *VAR_8 = VAR_6->priv;
 struct bpf_version VAR_9;
 if (FUNC_2(VAR_6->fd, VAR_1, (caddr_t)&VAR_9) >= 0) {





  if (VAR_9.bv_major == VAR_2 &&
      VAR_9.bv_minor >= VAR_3) {



   if (FUNC_2(VAR_6->fd, VAR_0, (caddr_t)VAR_7) < 0) {
    FUNC_3(VAR_6->errbuf,
        sizeof(VAR_6->errbuf), VAR_4, "BIOCSETF");
    return (-1);
   }
   FUNC_0(VAR_5, "tcpdump: Using kernel BPF filter\n");
   VAR_8->filtering_in_kernel = 1;
   VAR_6->cc = 0;
   return (0);
  }
  FUNC_0(VAR_5,
     "tcpdump: Requires BPF language %ld.%ld or higher; kernel is %ld.%ld\n",
      VAR_2, VAR_3,
      VAR_9.bv_major, VAR_9.bv_minor);
 }




 if (FUNC_1(VAR_6, VAR_7) < 0)
  return (-1);





 FUNC_0(VAR_5, "tcpdump: Filtering in user process\n");
 VAR_8->filtering_in_kernel = 0;
 return (0);
}
