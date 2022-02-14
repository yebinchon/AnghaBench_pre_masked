
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_info_message {int fport; int lport; void* faddr; void* laddr; int len; int seq; } ;
struct rds_info_iterator {int dummy; } ;
struct TYPE_2__ {int h_dport; int h_sport; int h_len; int h_sequence; } ;
struct rds_incoming {TYPE_1__ i_hdr; } ;
typedef int minfo ;
typedef void* __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rds_info_iterator*,struct rds_info_message*,int) ;

void FUNC_3(struct rds_incoming *VAR_0,
         struct rds_info_iterator *VAR_1,
         __be32 VAR_2, __be32 VAR_3, int VAR_4)
{
 struct rds_info_message VAR_5;

 VAR_5.seq = FUNC_1(VAR_0->i_hdr.h_sequence);
 VAR_5.len = FUNC_0(VAR_0->i_hdr.h_len);

 if (VAR_4) {
  VAR_5.laddr = VAR_3;
  VAR_5.faddr = VAR_2;
  VAR_5.lport = VAR_0->i_hdr.h_dport;
  VAR_5.fport = VAR_0->i_hdr.h_sport;
 } else {
  VAR_5.laddr = VAR_2;
  VAR_5.faddr = VAR_3;
  VAR_5.lport = VAR_0->i_hdr.h_sport;
  VAR_5.fport = VAR_0->i_hdr.h_dport;
 }

 FUNC_2(VAR_1, &VAR_5, sizeof(VAR_5));
}
