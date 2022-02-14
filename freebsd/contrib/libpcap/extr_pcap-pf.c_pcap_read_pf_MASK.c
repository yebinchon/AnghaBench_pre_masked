
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; scalar_t__ len; int ts; } ;
struct pcap_pf {scalar_t__ TotMissed; scalar_t__ OrigMissed; int TotAccepted; scalar_t__ filtering_in_kernel; int TotDrops; int TotPkts; } ;
struct enstamp {int ens_stamplen; int ens_count; scalar_t__ ens_ifoverflows; int ens_tstamp; scalar_t__ ens_dropped; } ;
struct TYPE_4__ {int bf_insns; } ;
struct TYPE_5__ {int cc; int offset; scalar_t__ bufsize; int snapshot; int * bp; TYPE_1__ fcode; int errbuf; scalar_t__ break_loop; scalar_t__ fddipad; scalar_t__ buffer; int fd; struct pcap_pf* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,long,int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,int,scalar_t__,char*) ;
 int FUNC_6 (int ,int,char*,int) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int *,struct pcap_pkthdr*,int *) ;

__attribute__((used)) static int
FUNC_9(pcap_t *VAR_5, int VAR_6, pcap_handler VAR_7, u_char *VAR_8)
{
 struct pcap_pf *VAR_9 = VAR_5->priv;
 register u_char *VAR_10, *VAR_11;
 register int VAR_12, VAR_13, VAR_14, VAR_15;
 register struct enstamp *VAR_16;



 register u_int VAR_17;

 again:
 VAR_12 = VAR_5->cc;
 if (VAR_12 == 0) {
  VAR_12 = FUNC_7(VAR_5->fd, (char *)VAR_5->buffer + VAR_5->offset, VAR_5->bufsize);
  if (VAR_12 < 0) {
   if (VAR_4 == VAR_1)
    return (0);
   if (VAR_4 == VAR_0 &&
       FUNC_3(VAR_5->fd, 0L, VAR_2) + VAR_5->bufsize < 0) {






    (void)FUNC_3(VAR_5->fd, 0L, VAR_3);
    goto again;
   }
   FUNC_5(VAR_5->errbuf,
       sizeof(VAR_5->errbuf), VAR_4, "pf read");
   return (-1);
  }
  VAR_11 = (u_char *)VAR_5->buffer + VAR_5->offset;
 } else
  VAR_11 = VAR_5->bp;



 VAR_13 = 0;
 VAR_17 = VAR_5->fddipad;
 while (VAR_12 > 0) {
  if (VAR_5->break_loop) {
   if (VAR_13 == 0) {
    VAR_5->break_loop = 0;
    return (-2);
   } else {
    VAR_5->cc = VAR_12;
    VAR_5->bp = VAR_11;
    return (VAR_13);
   }
  }
  if (VAR_12 < sizeof(*VAR_16)) {
   FUNC_6(VAR_5->errbuf, sizeof(VAR_5->errbuf),
       "pf short read (%d)", VAR_12);
   return (-1);
  }






   VAR_16 = (struct enstamp *)VAR_11;
  if (VAR_16->ens_stamplen != sizeof(*VAR_16)) {
   FUNC_6(VAR_5->errbuf, sizeof(VAR_5->errbuf),
       "pf short stamplen (%d)",
       VAR_16->ens_stamplen);
   return (-1);
  }

  VAR_10 = VAR_11 + VAR_16->ens_stamplen;
  VAR_14 = VAR_16->ens_count;
  if (VAR_14 > VAR_5->snapshot)
   VAR_14 = VAR_5->snapshot;


  VAR_15 = FUNC_0(VAR_14 + VAR_16->ens_stamplen);
  VAR_12 -= VAR_15;
  VAR_11 += VAR_15;
  VAR_9->TotPkts++;
  VAR_9->TotDrops += VAR_16->ens_dropped;
  VAR_9->TotMissed = VAR_16->ens_ifoverflows;
  if (VAR_9->OrigMissed < 0)
   VAR_9->OrigMissed = VAR_9->TotMissed;
  if (VAR_9->filtering_in_kernel ||
      FUNC_2(VAR_5->fcode.bf_insns, VAR_10, VAR_16->ens_count, VAR_14)) {
   struct pcap_pkthdr VAR_18;
   VAR_9->TotAccepted++;
   VAR_18.ts = VAR_16->ens_tstamp;
   VAR_18.len = VAR_16->ens_count - VAR_17;
   VAR_10 += VAR_17;
   VAR_14 -= VAR_17;
   VAR_18.caplen = VAR_14;
   (*VAR_7)(VAR_8, &VAR_18, VAR_10);
   if (++VAR_13 >= VAR_6 && !FUNC_1(VAR_6)) {
    VAR_5->cc = VAR_12;
    VAR_5->bp = VAR_11;
    return (VAR_13);
   }
  }
 }
 VAR_5->cc = 0;
 return (VAR_13);
}
