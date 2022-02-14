
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef unsigned char u_char ;
struct pcap_pkthdr {int caplen; int len; int ts; } ;
struct pcap_netfilter {int packets_read; int packets_nobufs; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; } ;
struct nfqnl_msg_packet_hdr {int packet_id; } ;
struct nfgenmsg {int res_id; } ;
typedef struct nfattr const nfattr ;
struct TYPE_5__ {int * bf_insns; } ;
struct TYPE_6__ {int cc; unsigned char* bp; scalar_t__ linktype; TYPE_1__ fcode; int errbuf; scalar_t__ break_loop; scalar_t__ buffer; int bufsize; int fd; struct pcap_netfilter* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int (* pcap_handler ) (unsigned char*,struct pcap_pkthdr*,unsigned char const*) ;
typedef scalar_t__ nftype_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_0 (struct nfattr const*) ;
 struct nfattr const* FUNC_1 (struct nfattr const*,int) ;
 scalar_t__ FUNC_2 (struct nfattr const*,int) ;
 int FUNC_3 (struct nfattr const*) ;
 int FUNC_4 (struct nfattr const*) ;
 scalar_t__ VAR_4 ;
 struct nfattr const* FUNC_5 (struct nfgenmsg const*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;


 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 void* FUNC_9 (struct nlmsghdr const*) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_12 (int *,unsigned char const*,int ,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_2__*,int ,int,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,scalar_t__,char*) ;
 int FUNC_18 (int ,int ,char*,int,...) ;
 int FUNC_19 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_20(pcap_t *VAR_16, int VAR_17, pcap_handler VAR_18, u_char *VAR_19)
{
 struct pcap_netfilter *VAR_20 = VAR_16->priv;
 register u_char *VAR_21, *VAR_22;
 int VAR_23 = 0;
 int VAR_24;




 if (VAR_16->break_loop) {





  VAR_16->break_loop = 0;
  return VAR_14;
 }
 VAR_24 = VAR_16->cc;
 if (VAR_24 == 0) {
  do {
   VAR_24 = FUNC_19(VAR_16->fd, VAR_16->buffer, VAR_16->bufsize, 0);
   if (VAR_16->break_loop) {
    VAR_16->break_loop = 0;
    return VAR_14;
   }
   if (VAR_15 == VAR_2)
    VAR_20->packets_nobufs++;
  } while ((VAR_24 == -1) && (VAR_15 == VAR_1 || VAR_15 == VAR_2));

  if (VAR_24 < 0) {
   FUNC_17(VAR_16->errbuf,
       VAR_12, VAR_15, "Can't receive packet");
   return VAR_13;
  }

  VAR_21 = (unsigned char *)VAR_16->buffer;
 } else
  VAR_21 = VAR_16->bp;
 VAR_22 = VAR_21 + VAR_24;
 while (VAR_21 < VAR_22) {
  const struct nlmsghdr *VAR_25 = (const struct nlmsghdr *) VAR_21;
  uint32_t VAR_26;
  nftype_t VAR_27 = VAR_11;
  if (VAR_16->break_loop) {
   VAR_16->bp = VAR_21;
   VAR_16->cc = VAR_22 - VAR_21;
   if (VAR_23 == 0) {
    VAR_16->break_loop = 0;
    return VAR_14;
   } else
    return VAR_23;
  }
  if (VAR_22 - VAR_21 < FUNC_10(0)) {




   break;
  }

  if (VAR_25->nlmsg_len < sizeof(struct nlmsghdr) || (u_int)VAR_24 < VAR_25->nlmsg_len) {
   FUNC_18(VAR_16->errbuf, VAR_12, "Message truncated: (got: %d) (nlmsg_len: %u)", VAR_24, VAR_25->nlmsg_len);
   return -1;
  }

  if (FUNC_7(VAR_25->nlmsg_type) == VAR_6 &&
      FUNC_6(VAR_25->nlmsg_type) == VAR_9)
   VAR_27 = VAR_4;
  else if (FUNC_7(VAR_25->nlmsg_type) == VAR_5 &&
           FUNC_6(VAR_25->nlmsg_type) == VAR_7)
   VAR_27 = VAR_8;

  if (VAR_27 != VAR_11) {
   const unsigned char *VAR_28 = ((void*)0);
   struct pcap_pkthdr VAR_29;

   const struct nfgenmsg *VAR_30 = ((void*)0);
   int VAR_31 = 0;

   if (VAR_16->linktype != VAR_0) {
    const struct nfattr *VAR_32 = ((void*)0);

    if (VAR_25->nlmsg_len < VAR_3) {
     FUNC_18(VAR_16->errbuf, VAR_12, "Malformed message: (nlmsg_len: %u)", VAR_25->nlmsg_len);
     return -1;
    }

    VAR_30 = FUNC_9(VAR_25);
    if (VAR_25->nlmsg_len > VAR_3) {
     struct nfattr *VAR_33 = FUNC_5(VAR_30);
     int VAR_34 = VAR_25->nlmsg_len - FUNC_8(VAR_3);

     while (FUNC_2(VAR_33, VAR_34)) {
      if (VAR_27 == VAR_8) {
       switch (FUNC_4(VAR_33)) {
        case 130:
         {
          const struct nfqnl_msg_packet_hdr *VAR_35 = (const struct nfqnl_msg_packet_hdr *) FUNC_0(VAR_33);

          VAR_31 = FUNC_15(VAR_35->packet_id);
          break;
         }
        case 129:
         VAR_32 = VAR_33;
         break;
       }

      } else if (VAR_27 == VAR_4) {
       switch (FUNC_4(VAR_33)) {
        case 128:
         VAR_32 = VAR_33;
         break;
       }
      }
      VAR_33 = FUNC_1(VAR_33, VAR_34);
     }
    }

    if (VAR_32) {
     VAR_28 = FUNC_0(VAR_32);
     VAR_29.len = VAR_29.caplen = FUNC_3(VAR_32);
    }

   } else {
    VAR_28 = FUNC_9(VAR_25);
    VAR_29.caplen = VAR_29.len = VAR_25->nlmsg_len-FUNC_8(sizeof(struct nlmsghdr));
   }

   if (VAR_28) {


    FUNC_13(&VAR_29.ts, ((void*)0));
    if (VAR_16->fcode.bf_insns == ((void*)0) ||
      FUNC_12(VAR_16->fcode.bf_insns, VAR_28, VAR_29.len, VAR_29.caplen))
    {
     VAR_20->packets_read++;
     VAR_18(VAR_19, &VAR_29, VAR_28);
     VAR_23++;
    }
   }

   if (VAR_27 == VAR_8) {



    if (VAR_30 != ((void*)0))
     FUNC_14(VAR_16, FUNC_16(VAR_30->res_id), VAR_31, VAR_10);
   }
  }

  VAR_26 = FUNC_8(VAR_25->nlmsg_len);





  if (VAR_26 > VAR_22 - VAR_21)
   VAR_26 = VAR_22 - VAR_21;

  VAR_21 += VAR_26;
  if (VAR_23 >= VAR_17 && !FUNC_11(VAR_17)) {
   VAR_16->bp = VAR_21;
   VAR_16->cc = VAR_22 - VAR_21;
   if (VAR_16->cc < 0)
    VAR_16->cc = 0;
   return VAR_23;
  }
 }

 VAR_16->cc = 0;
 return VAR_23;
}
