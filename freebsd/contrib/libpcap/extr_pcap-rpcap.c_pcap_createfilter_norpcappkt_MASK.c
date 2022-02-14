
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct pcap_rpcap {int rmt_flags; int rmt_clientside; int currentfilter; int rmt_sockdata; int rmt_sockctrl; } ;
struct bpf_program {int dummy; } ;
typedef int socklen_t ;
typedef int peerctrlport ;
typedef int peeraddress ;
struct TYPE_4__ {int errbuf; struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int mydataport ;
typedef int myctrlport ;
typedef int myaddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sockaddr*,int,char*,int,char*,int,int) ;
 int FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,struct bpf_program*,char*,int,int ) ;
 int FUNC_6 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,...) ;
 int FUNC_7 (char*,int ,int ) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(pcap_t *VAR_4, struct bpf_program *VAR_5)
{
 struct pcap_rpcap *VAR_6 = VAR_4->priv;
 int VAR_7 = 0;


 if (VAR_6->rmt_flags & VAR_3)
 {
  struct sockaddr_storage VAR_8;
  socklen_t VAR_9;
  char VAR_10[128];
  char VAR_11[128];
  char VAR_12[128];
  char VAR_13[128];
  char VAR_14[128];
  char *VAR_15;
  const int VAR_16 = 1024;
  size_t VAR_17;


  VAR_9 = sizeof(struct sockaddr_storage);
  if (FUNC_2(VAR_6->rmt_sockctrl, (struct sockaddr *) &VAR_8, &VAR_9) == -1)
  {
   FUNC_7("getpeername(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }

  if (FUNC_1((struct sockaddr *) &VAR_8, VAR_9, VAR_13,
   sizeof(VAR_13), VAR_14, sizeof(VAR_14), VAR_0 | VAR_1))
  {
   FUNC_7("getnameinfo(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }



  if (FUNC_3(VAR_6->rmt_sockctrl, (struct sockaddr *) &VAR_8, &VAR_9) == -1)
  {
   FUNC_7("getsockname(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }


  if (FUNC_1((struct sockaddr *) &VAR_8, VAR_9, VAR_10,
   sizeof(VAR_10), VAR_11, sizeof(VAR_11), VAR_0 | VAR_1))
  {
   FUNC_7("getnameinfo(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }


  if (FUNC_3(VAR_6->rmt_sockdata, (struct sockaddr *) &VAR_8, &VAR_9) == -1)
  {
   FUNC_7("getsockname(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }


  if (FUNC_1((struct sockaddr *) &VAR_8, VAR_9, ((void*)0), 0, VAR_12, sizeof(VAR_12), VAR_1))
  {
   FUNC_7("getnameinfo(): ", VAR_4->errbuf, VAR_2);
   return -1;
  }

  VAR_17 = VAR_6->currentfilter ? FUNC_8(VAR_6->currentfilter) : 0;

  VAR_15 = (char *)FUNC_4(VAR_17 + VAR_16 + 1);

  if (VAR_17)
  {
   FUNC_6(VAR_15, VAR_17 + VAR_16,
    "(%s) and not (host %s and host %s and port %s and port %s) and not (host %s and host %s and port %s)",
    VAR_6->currentfilter, VAR_10, VAR_13, VAR_11, VAR_14, VAR_10, VAR_13, VAR_12);
  }
  else
  {
   FUNC_6(VAR_15, VAR_17 + VAR_16,
    "not (host %s and host %s and port %s and port %s) and not (host %s and host %s and port %s)",
    VAR_10, VAR_13, VAR_11, VAR_14, VAR_10, VAR_13, VAR_12);
  }

  VAR_15[VAR_17 + VAR_16] = 0;






  VAR_6->rmt_clientside = 0;

  if (FUNC_5(VAR_4, VAR_5, VAR_15, 1, 0) == -1)
   VAR_7 = -1;


  VAR_6->rmt_clientside = 1;

  FUNC_0(VAR_15);
 }

 return VAR_7;
}
