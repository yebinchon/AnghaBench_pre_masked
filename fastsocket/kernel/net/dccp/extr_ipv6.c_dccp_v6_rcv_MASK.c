
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {scalar_t__ dccph_type; int dccph_cscov; int dccph_dport; int dccph_sport; } ;
struct TYPE_6__ {scalar_t__ dccpd_type; int dccpd_reset_code; int dccpd_ack_seq; int dccpd_seq; } ;
struct TYPE_5__ {int dccps_pcrlen; } ;
struct TYPE_4__ {int daddr; int saddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 struct sock* FUNC_2 (int *,struct sk_buff*,int ,int ) ;
 int VAR_5 ;
 struct dccp_hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct dccp_hdr const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,...) ;
 TYPE_2__* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int *,int *) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sock*,struct sk_buff*,int) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_6)
{
 const struct dccp_hdr *VAR_7;
 struct sock *VAR_8;
 int VAR_9;



 if (FUNC_6(VAR_6))
  goto discard_it;


 if (FUNC_10(VAR_6, &FUNC_14(VAR_6)->saddr,
         &FUNC_14(VAR_6)->daddr)) {
  FUNC_1("dropped packet with invalid checksum\n");
  goto discard_it;
 }

 VAR_7 = FUNC_3(VAR_6);

 FUNC_0(VAR_6)->dccpd_seq = FUNC_5(VAR_7);
 FUNC_0(VAR_6)->dccpd_type = VAR_7->dccph_type;

 if (FUNC_7(VAR_6))
  FUNC_0(VAR_6)->dccpd_ack_seq = VAR_1;
 else
  FUNC_0(VAR_6)->dccpd_ack_seq = FUNC_4(VAR_6);



 VAR_8 = FUNC_2(&VAR_5, VAR_6,
           VAR_7->dccph_sport, VAR_7->dccph_dport);




 if (VAR_8 == ((void*)0)) {
  FUNC_8("failed to look up flow ID in table and "
         "get corresponding socket\n");
  goto no_dccp_socket;
 }







 if (VAR_8->sk_state == VAR_3) {
  FUNC_8("sk->sk_state == DCCP_TIME_WAIT: do_time_wait\n");
  FUNC_13(FUNC_12(VAR_8));
  goto no_dccp_socket;
 }






 VAR_9 = FUNC_9(VAR_8)->dccps_pcrlen;
 if (VAR_7->dccph_cscov && (VAR_9 == 0 || VAR_7->dccph_cscov < VAR_9)) {
  FUNC_8("Packet CsCov %d does not satisfy MinCsCov %d\n",
         VAR_7->dccph_cscov, VAR_9);

  goto discard_and_relse;
 }

 if (!FUNC_18(VAR_8, VAR_4, VAR_6))
  goto discard_and_relse;

 return FUNC_16(VAR_8, VAR_6, 1) ? -1 : 0;

no_dccp_socket:
 if (!FUNC_18(((void*)0), VAR_4, VAR_6))
  goto discard_it;






 if (VAR_7->dccph_type != VAR_0) {
  FUNC_0(VAR_6)->dccpd_reset_code =
     VAR_2;
  FUNC_11(VAR_8, VAR_6);
 }

discard_it:
 FUNC_15(VAR_6);
 return 0;

discard_and_relse:
 FUNC_17(VAR_8);
 goto discard_it;
}
