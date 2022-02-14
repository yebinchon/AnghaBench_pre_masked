
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sock_fprog {int * filter; scalar_t__ len; } ;
struct pcap_linux {int filter_in_userland; } ;
struct bpf_program {int dummy; } ;
struct TYPE_8__ {scalar_t__ bf_len; } ;
struct TYPE_9__ {int errbuf; TYPE_1__ fcode; struct pcap_linux* priv; } ;
typedef TYPE_2__ pcap_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,struct sock_fprog*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct bpf_program*) ;
 int FUNC_4 (int ,int ,scalar_t__,char*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct sock_fprog*) ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(pcap_t *VAR_6, struct bpf_program *VAR_7,
    int VAR_8)
{
 struct pcap_linux *VAR_9;






 if (!VAR_6)
  return -1;
 if (!VAR_7) {
         FUNC_8(VAR_6->errbuf, "setfilter: No filter specified",
   VAR_2);
  return -1;
 }

 VAR_9 = VAR_6->priv;



 if (FUNC_3(VAR_6, VAR_7) < 0)

  return -1;





 VAR_9->filter_in_userland = 1;
 return 0;
}
