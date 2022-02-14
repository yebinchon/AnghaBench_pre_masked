
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_10__ {int tv_usec; int tv_sec; } ;
struct snoopheader {int snoop_packetlen; TYPE_4__ snoop_timestamp; } ;
struct TYPE_8__ {int ps_recv; } ;
struct pcap_snoop {TYPE_2__ stat; } ;
struct TYPE_9__ {int tv_usec; int tv_sec; } ;
struct pcap_pkthdr {int len; int caplen; TYPE_3__ ts; } ;
struct TYPE_7__ {int * bf_insns; } ;
struct TYPE_11__ {int snapshot; int offset; scalar_t__ linktype; TYPE_1__ fcode; scalar_t__ buffer; int errbuf; int bufsize; int fd; scalar_t__ break_loop; struct pcap_snoop* priv; } ;
typedef TYPE_5__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int *,int *,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,struct pcap_pkthdr*,int *) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_2, int VAR_3, pcap_handler VAR_4, u_char *VAR_5)
{
 struct pcap_snoop *VAR_6 = VAR_2->priv;
 int VAR_7;
 register struct snoopheader *VAR_8;
 register u_int VAR_9;
 register u_int VAR_10;
 register u_char *VAR_11;

again:



 if (VAR_2->break_loop) {





  VAR_2->break_loop = 0;
  return (-2);
 }
 VAR_7 = FUNC_2(VAR_2->fd, (char *)VAR_2->buffer, VAR_2->bufsize);
 if (VAR_7 < 0) {

  switch (VAR_1) {

  case 129:
   goto again;

  case 128:
   return (0);
  }
  FUNC_1(VAR_2->errbuf, sizeof(VAR_2->errbuf),
      VAR_1, "read");
  return (-1);
 }
 VAR_8 = (struct snoopheader *)VAR_2->buffer;
 VAR_9 = VAR_8->snoop_packetlen;






 if (VAR_7 == (VAR_2->snapshot + sizeof(struct snoopheader)) &&
     (VAR_9 < VAR_2->snapshot))
  VAR_9 += (64 * 1024);

 VAR_10 = (VAR_9 < VAR_2->snapshot) ? VAR_9 : VAR_2->snapshot;
 VAR_11 = (u_char *)(VAR_8 + 1) + VAR_2->offset;







 if (VAR_2->linktype == VAR_0 && *((short *)(VAR_11 + 2)) == 0) {
  u_int *VAR_12 = (u_int *)VAR_11;
  *VAR_12 >>= 16;
 }

 if (VAR_2->fcode.bf_insns == ((void*)0) ||
     FUNC_0(VAR_2->fcode.bf_insns, VAR_11, VAR_9, VAR_10)) {
  struct pcap_pkthdr VAR_13;
  ++VAR_6->stat.ps_recv;
  VAR_13.ts.tv_sec = VAR_8->snoop_timestamp.tv_sec;
  VAR_13.ts.tv_usec = VAR_8->snoop_timestamp.tv_usec;
  VAR_13.len = VAR_9;
  VAR_13.caplen = VAR_10;
  (*VAR_4)(VAR_5, &VAR_13, VAR_11);
  return (1);
 }
 return (0);
}
