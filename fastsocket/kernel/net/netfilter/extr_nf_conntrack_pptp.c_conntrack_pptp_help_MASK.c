
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union pptp_ctrl_union {int doff; int messageType; int magicCookie; int packetType; } ;
typedef size_t u_int16_t ;
struct tcphdr {int doff; int messageType; int magicCookie; int packetType; } ;
struct sk_buff {unsigned int len; } ;
struct pptp_pkt_hdr {int doff; int messageType; int magicCookie; int packetType; } ;
struct nf_ct_pptp_master {int sstate; int cstate; } ;
struct nf_conn {int dummy; } ;
struct PptpControlHeader {int doff; int messageType; int magicCookie; int packetType; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _tcph ;
typedef int _pptph ;
typedef int _ctlh ;
struct TYPE_3__ {struct nf_ct_pptp_master ct_pptp_info; } ;
struct TYPE_4__ {TYPE_1__ help; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,union pptp_ctrl_union*,union pptp_ctrl_union*,unsigned int,struct nf_conn*,int) ;
 unsigned int* VAR_8 ;
 int FUNC_6 (struct sk_buff*,union pptp_ctrl_union*,union pptp_ctrl_union*,unsigned int,struct nf_conn*,int) ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 (struct sk_buff*,unsigned int,unsigned int,union pptp_ctrl_union*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct sk_buff *VAR_9, unsigned int VAR_10,
      struct nf_conn *VAR_11, enum ip_conntrack_info VAR_12)

{
 int VAR_13 = FUNC_1(VAR_12);
 const struct nf_ct_pptp_master *VAR_14 = &FUNC_2(VAR_11)->help.ct_pptp_info;
 const struct tcphdr *VAR_15;
 struct tcphdr VAR_16;
 const struct pptp_pkt_hdr *VAR_17;
 struct pptp_pkt_hdr VAR_18;
 struct PptpControlHeader VAR_19, *VAR_20;
 union pptp_ctrl_union VAR_21, *VAR_22;
 unsigned int VAR_23 = VAR_9->len - VAR_10;
 unsigned int VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;
 u_int16_t VAR_30;


 if (VAR_12 != VAR_1 &&
     VAR_12 != VAR_1 + VAR_2)
  return VAR_3;

 VAR_26 = VAR_10;
 VAR_15 = FUNC_8(VAR_9, VAR_26, sizeof(VAR_16), &VAR_16);
 FUNC_0(!VAR_15);
 VAR_26 += VAR_15->doff * 4;
 VAR_24 = VAR_23 - VAR_15->doff * 4;

 VAR_17 = FUNC_8(VAR_9, VAR_26, sizeof(VAR_18), &VAR_18);
 if (!VAR_17) {
  FUNC_7("no full PPTP header, can't track\n");
  return VAR_3;
 }
 VAR_26 += sizeof(VAR_18);
 VAR_24 -= sizeof(VAR_18);


 if (FUNC_4(VAR_17->packetType) != VAR_6 ||
     FUNC_3(VAR_17->magicCookie) != VAR_4) {
  FUNC_7("not a control packet\n");
  return VAR_3;
 }

 VAR_20 = FUNC_8(VAR_9, VAR_26, sizeof(VAR_19), &VAR_19);
 if (!VAR_20)
  return VAR_3;
 VAR_26 += sizeof(VAR_19);
 VAR_24 -= sizeof(VAR_19);

 VAR_25 = VAR_24;
 VAR_30 = FUNC_4(VAR_20->messageType);
 if (VAR_30 > 0 && VAR_30 <= VAR_5 && VAR_25 < VAR_8[VAR_30])
  return VAR_3;
 if (VAR_25 > sizeof(*VAR_22))
  VAR_25 = sizeof(*VAR_22);

 VAR_22 = FUNC_8(VAR_9, VAR_26, VAR_25, &VAR_21);
 if (!VAR_22)
  return VAR_3;

 VAR_27 = VAR_14->sstate;
 VAR_28 = VAR_14->cstate;

 FUNC_9(&VAR_7);



 if (VAR_13 == VAR_0)

  VAR_29 = FUNC_6(VAR_9, VAR_20, VAR_22, VAR_25, VAR_11,
     VAR_12);
 else

  VAR_29 = FUNC_5(VAR_9, VAR_20, VAR_22, VAR_25, VAR_11,
           VAR_12);
 FUNC_7("sstate: %d->%d, cstate: %d->%d\n",
   VAR_27, VAR_14->sstate, VAR_28, VAR_14->cstate);
 FUNC_10(&VAR_7);

 return VAR_29;
}
