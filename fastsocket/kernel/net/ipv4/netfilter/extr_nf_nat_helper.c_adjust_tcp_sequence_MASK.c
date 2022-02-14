
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_nat_seq {scalar_t__ offset_before; scalar_t__ offset_after; int correction_pos; } ;
struct nf_conn_nat {struct nf_nat_seq* seq; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_nat_seq*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 struct nf_conn_nat* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void
FUNC_7(u32 VAR_1,
      int VAR_2,
      struct nf_conn *VAR_3,
      enum ip_conntrack_info VAR_4)
{
 int VAR_5;
 struct nf_nat_seq *VAR_6, *VAR_7;
 struct nf_conn_nat *VAR_8 = FUNC_3(VAR_3);

 FUNC_4("adjust_tcp_sequence: seq = %u, sizediff = %d\n", VAR_1, VAR_1);

 VAR_5 = FUNC_0(VAR_4);

 VAR_6 = &VAR_8->seq[VAR_5];
 VAR_7 = &VAR_8->seq[!VAR_5];

 FUNC_4("nf_nat_resize_packet: Seq_offset before: ");
 FUNC_1(VAR_6);

 FUNC_5(&VAR_0);





 if (VAR_6->offset_before == VAR_6->offset_after ||
     FUNC_2(VAR_6->correction_pos, VAR_1)) {
     VAR_6->correction_pos = VAR_1;
     VAR_6->offset_before = VAR_6->offset_after;
     VAR_6->offset_after += VAR_2;
 }
 FUNC_6(&VAR_0);

 FUNC_4("nf_nat_resize_packet: Seq_offset after: ");
 FUNC_1(VAR_6);
}
