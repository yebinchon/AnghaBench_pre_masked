
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct dccp_hdr {scalar_t__ dccph_type; int dccph_cscov; int dccph_dport; int dccph_sport; } ;
struct TYPE_4__ {scalar_t__ dccpd_type; int dccpd_reset_code; scalar_t__ dccpd_ack_seq; scalar_t__ dccpd_seq; } ;
struct TYPE_3__ {int dccps_pcrlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 struct sock* FUNC_2 (int *,struct sk_buff*,int ,int ) ;
 int VAR_5 ;
 struct dccp_hdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct dccp_hdr const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ) ;
 struct iphdr* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct sock*,struct sk_buff*,int) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_23(struct sk_buff *VAR_6)
{
 const struct dccp_hdr *VAR_7;
 const struct iphdr *VAR_8;
 struct sock *VAR_9;
 int VAR_10;



 if (FUNC_6(VAR_6))
  goto discard_it;

 VAR_8 = FUNC_16(VAR_6);

 if (FUNC_12(VAR_6, VAR_8->saddr, VAR_8->daddr)) {
  FUNC_1("dropped packet with invalid checksum\n");
  goto discard_it;
 }

 VAR_7 = FUNC_3(VAR_6);

 FUNC_0(VAR_6)->dccpd_seq = FUNC_5(VAR_7);
 FUNC_0(VAR_6)->dccpd_type = VAR_7->dccph_type;

 FUNC_9("%8.8s src=%pI4@%-5d dst=%pI4@%-5d seq=%llu",
        FUNC_7(VAR_7->dccph_type),
        &VAR_8->saddr, FUNC_19(VAR_7->dccph_sport),
        &VAR_8->daddr, FUNC_19(VAR_7->dccph_dport),
        (unsigned long long) FUNC_0(VAR_6)->dccpd_seq);

 if (FUNC_8(VAR_6)) {
  FUNC_0(VAR_6)->dccpd_ack_seq = VAR_1;
  FUNC_10("\n");
 } else {
  FUNC_0(VAR_6)->dccpd_ack_seq = FUNC_4(VAR_6);
  FUNC_10(", ack=%llu\n", (unsigned long long)
      FUNC_0(VAR_6)->dccpd_ack_seq);
 }



 VAR_9 = FUNC_2(&VAR_5, VAR_6,
          VAR_7->dccph_sport, VAR_7->dccph_dport);




 if (VAR_9 == ((void*)0)) {
  FUNC_9("failed to look up flow ID in table and "
         "get corresponding socket\n");
  goto no_dccp_socket;
 }







 if (VAR_9->sk_state == VAR_3) {
  FUNC_9("sk->sk_state == DCCP_TIME_WAIT: do_time_wait\n");
  FUNC_15(FUNC_14(VAR_9));
  goto no_dccp_socket;
 }






 VAR_10 = FUNC_11(VAR_9)->dccps_pcrlen;
 if (VAR_7->dccph_cscov && (VAR_10 == 0 || VAR_7->dccph_cscov < VAR_10)) {
  FUNC_9("Packet CsCov %d does not satisfy MinCsCov %d\n",
         VAR_7->dccph_cscov, VAR_10);



  goto discard_and_relse;
 }

 if (!FUNC_22(VAR_9, VAR_4, VAR_6))
  goto discard_and_relse;
 FUNC_18(VAR_6);

 return FUNC_20(VAR_9, VAR_6, 1);

no_dccp_socket:
 if (!FUNC_22(((void*)0), VAR_4, VAR_6))
  goto discard_it;






 if (VAR_7->dccph_type != VAR_0) {
  FUNC_0(VAR_6)->dccpd_reset_code =
     VAR_2;
  FUNC_13(VAR_9, VAR_6);
 }

discard_it:
 FUNC_17(VAR_6);
 return 0;

discard_and_relse:
 FUNC_21(VAR_9);
 goto discard_it;
}
