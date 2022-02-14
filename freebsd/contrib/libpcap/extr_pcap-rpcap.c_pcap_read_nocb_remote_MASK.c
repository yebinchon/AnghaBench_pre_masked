
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int u_char ;
struct timeval {int tv_sec; int tv_usec; } ;
struct rpcap_pkthdr {int caplen; int len; int timestamp_sec; int timestamp_usec; int npkt; } ;
struct rpcap_header {int plen; scalar_t__ type; } ;
struct pcap_rpcap {int rmt_flags; unsigned int TotCapt; int TotNetDrops; int protocol_version; scalar_t__ rmt_sockdata; } ;
struct TYPE_7__ {int tv_sec; int tv_usec; } ;
struct pcap_pkthdr {int caplen; int len; TYPE_2__ ts; } ;
struct TYPE_6__ {int timeout; } ;
struct TYPE_8__ {int bufsize; int errbuf; scalar_t__ cc; scalar_t__ buffer; scalar_t__ bp; TYPE_1__ opt; struct pcap_rpcap* priv; } ;
typedef TYPE_3__ pcap_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (scalar_t__,int ,struct rpcap_header*,int ) ;
 int FUNC_5 (scalar_t__,TYPE_3__*,int) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_9(pcap_t *VAR_5, struct pcap_pkthdr *VAR_6, u_char **VAR_7)
{
 struct pcap_rpcap *VAR_8 = VAR_5->priv;
 struct rpcap_header *VAR_9;
 struct rpcap_pkthdr *VAR_10;
 u_char *VAR_11;
 uint32 VAR_12;
 int VAR_13;
 int VAR_14;


 struct timeval VAR_15;
 fd_set VAR_16;





 VAR_15.tv_sec = VAR_5->opt.timeout / 1000;
 VAR_15.tv_usec = (VAR_5->opt.timeout - VAR_15.tv_sec * 1000) * 1000;


 FUNC_1(&VAR_16);





 FUNC_0(VAR_8->rmt_sockdata, &VAR_16);

 VAR_13 = FUNC_6((int) VAR_8->rmt_sockdata + 1, &VAR_16, ((void*)0), ((void*)0), &VAR_15);
 if (VAR_13 == -1)
 {

  if (VAR_4 == VAR_0)
  {

   return 0;
  }

  FUNC_7("select(): ", VAR_5->errbuf, VAR_1);
  return -1;
 }


 if (VAR_13 == 0)
  return 0;





 VAR_9 = (struct rpcap_header *) VAR_5->buffer;
 VAR_10 = (struct rpcap_pkthdr *) ((char *)VAR_5->buffer + sizeof(struct rpcap_header));
 VAR_11 = (u_char *)VAR_5->buffer + sizeof(struct rpcap_header) + sizeof(struct rpcap_pkthdr);

 if (VAR_8->rmt_flags & VAR_2)
 {

  VAR_14 = FUNC_8(VAR_8->rmt_sockdata, VAR_5->buffer,
      VAR_5->bufsize, VAR_5->errbuf, VAR_1);
  if (VAR_14 == -1)
  {

   return -1;
  }
  if (VAR_14 == -3)
  {

   return 0;
  }
  if ((size_t)VAR_14 < sizeof(struct rpcap_header))
  {



   FUNC_3(VAR_5->errbuf, VAR_1,
       "UDP packet message is shorter than an rpcap header");
   return -1;
  }
  VAR_12 = FUNC_2(VAR_9->plen);
  if ((size_t)VAR_14 < sizeof(struct rpcap_header) + VAR_12)
  {




   FUNC_3(VAR_5->errbuf, VAR_1,
       "UDP packet message is shorter than its rpcap header claims");
   return -1;
  }
 }
 else
 {
  int VAR_17;

  if ((size_t)VAR_5->cc < sizeof(struct rpcap_header))
  {





   VAR_17 = FUNC_5(VAR_8->rmt_sockdata, VAR_5,
       sizeof(struct rpcap_header));
   if (VAR_17 == -1)
   {

    return -1;
   }
   if (VAR_17 == -3)
   {

    return 0;
   }
  }







  VAR_12 = FUNC_2(VAR_9->plen);
  if (VAR_12 > VAR_5->bufsize - sizeof(struct rpcap_header))
  {






   FUNC_3(VAR_5->errbuf, VAR_1,
       "Server sent us a message larger than the largest expected packet message");
   return -1;
  }
  VAR_17 = FUNC_5(VAR_8->rmt_sockdata, VAR_5,
      sizeof(struct rpcap_header) + VAR_12);
  if (VAR_17 == -1)
  {

   return -1;
  }
  if (VAR_17 == -3)
  {

   return 0;
  }






  VAR_5->bp = VAR_5->buffer;
  VAR_5->cc = 0;
 }




 VAR_9->plen = VAR_12;




 if (FUNC_4(VAR_8->rmt_sockdata, VAR_8->protocol_version,
     VAR_9, VAR_5->errbuf) == -1)
 {
  return 0;
 }




 if (VAR_9->type != VAR_3)
 {
  return 0;
 }

 if (FUNC_2(VAR_10->caplen) > VAR_12)
 {
  FUNC_3(VAR_5->errbuf, VAR_1,
      "Packet's captured data goes past the end of the received packet message.");
  return -1;
 }


 VAR_6->caplen = FUNC_2(VAR_10->caplen);
 VAR_6->len = FUNC_2(VAR_10->len);
 VAR_6->ts.tv_sec = FUNC_2(VAR_10->timestamp_sec);
 VAR_6->ts.tv_usec = FUNC_2(VAR_10->timestamp_usec);


 *VAR_7 = VAR_11;





 VAR_8->TotCapt++;

 if (VAR_8->rmt_flags & VAR_2)
 {
  unsigned int VAR_18;


  VAR_18 = FUNC_2(VAR_10->npkt);

  if (VAR_8->TotCapt != VAR_18)
  {
   VAR_8->TotNetDrops += (VAR_18 - VAR_8->TotCapt);
   VAR_8->TotCapt = VAR_18;
  }
 }


 return 1;
}
