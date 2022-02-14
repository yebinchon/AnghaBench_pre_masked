
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct pcap_pkthdr {int len; int caplen; int ts; } ;
struct TYPE_5__ {int ps_recv; int ps_drop; } ;
struct pcap_nit {TYPE_1__ stat; } ;
struct nit_hdr {int nh_state; int nh_datalen; int nh_wirelen; int nh_timestamp; int nh_dropped; } ;
struct TYPE_6__ {int bf_insns; } ;
struct TYPE_7__ {int cc; int snapshot; int * bp; TYPE_2__ fcode; int errbuf; scalar_t__ break_loop; scalar_t__ buffer; int bufsize; int fd; struct pcap_nit* priv; } ;
typedef TYPE_3__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,struct pcap_pkthdr*,int *) ;

__attribute__((used)) static int
FUNC_6(pcap_t *VAR_2, int VAR_3, pcap_handler VAR_4, u_char *VAR_5)
{
 struct pcap_nit *VAR_6 = VAR_2->priv;
 register int VAR_7, VAR_8;
 register u_char *VAR_9, *VAR_10, *VAR_11;
 register struct nit_hdr *VAR_12;
 register int VAR_13;

 VAR_7 = VAR_2->cc;
 if (VAR_7 == 0) {
  VAR_7 = FUNC_4(VAR_2->fd, (char *)VAR_2->buffer, VAR_2->bufsize);
  if (VAR_7 < 0) {
   if (VAR_1 == VAR_0)
    return (0);
   FUNC_2(VAR_2->errbuf, sizeof(VAR_2->errbuf),
       VAR_1, "pcap_read");
   return (-1);
  }
  VAR_9 = (u_char *)VAR_2->buffer;
 } else
  VAR_9 = VAR_2->bp;






 VAR_8 = 0;
 VAR_11 = VAR_9 + VAR_7;
 while (VAR_9 < VAR_11) {
  if (VAR_2->break_loop) {
   if (VAR_8 == 0) {
    VAR_2->break_loop = 0;
    return (-2);
   } else {
    VAR_2->cc = VAR_11 - VAR_9;
    VAR_2->bp = VAR_9;
    return (VAR_8);
   }
  }

  VAR_12 = (struct nit_hdr *)VAR_9;
  VAR_10 = VAR_9 + sizeof(*VAR_12);

  switch (VAR_12->nh_state) {

  case 132:
   break;

  case 130:
  case 131:
  case 129:
   VAR_6->stat.ps_drop = VAR_12->nh_dropped;
   continue;

  case 128:
   continue;

  default:
   FUNC_3(VAR_2->errbuf, sizeof(VAR_2->errbuf),
       "bad nit state %d", VAR_12->nh_state);
   return (-1);
  }
  ++VAR_6->stat.ps_recv;
  VAR_9 += ((sizeof(struct nit_hdr) + VAR_12->nh_datalen +
      sizeof(int) - 1) & ~(sizeof(int) - 1));

  VAR_13 = VAR_12->nh_wirelen;
  if (VAR_13 > VAR_2->snapshot)
   VAR_13 = VAR_2->snapshot;
  if (FUNC_1(VAR_2->fcode.bf_insns, VAR_10, VAR_12->nh_wirelen, VAR_13)) {
   struct pcap_pkthdr VAR_14;
   VAR_14.ts = VAR_12->nh_timestamp;
   VAR_14.len = VAR_12->nh_wirelen;
   VAR_14.caplen = VAR_13;
   (*VAR_4)(VAR_5, &VAR_14, VAR_10);
   if (++VAR_8 >= VAR_3 && !FUNC_0(VAR_3)) {
    VAR_2->cc = VAR_11 - VAR_9;
    VAR_2->bp = VAR_9;
    return (VAR_8);
   }
  }
 }
 VAR_2->cc = 0;
 return (VAR_8);
}
