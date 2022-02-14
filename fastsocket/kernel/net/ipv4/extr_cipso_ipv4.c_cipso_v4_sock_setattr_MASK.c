
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; int cipso; int __data; } ;
struct inet_sock {int opt; scalar_t__ is_icsk; } ;
struct inet_connection_sock {int icsk_ext_hdr_len; int icsk_pmtu_cookie; int (* icsk_sync_mss ) (struct sock*,int ) ;} ;
struct cipso_v4_doi {int dummy; } ;
struct TYPE_2__ {int rcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned char*,int,struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*) ;
 TYPE_1__* FUNC_2 (struct ip_options*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (struct ip_options*) ;
 unsigned char* FUNC_7 (int,int ) ;
 struct ip_options* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,unsigned char*,int) ;
 int VAR_4 ;
 int FUNC_10 (int ,struct ip_options*) ;
 struct ip_options* FUNC_11 (int ) ;
 int FUNC_12 (struct sock*,int ) ;

int FUNC_13(struct sock *VAR_5,
     const struct cipso_v4_doi *VAR_6,
     const struct netlbl_lsm_secattr *VAR_7)
{
 int VAR_8 = -VAR_2;
 unsigned char *VAR_9 = ((void*)0);
 u32 VAR_10;
 u32 VAR_11;
 struct ip_options *VAR_12, *VAR_13 = ((void*)0);
 struct inet_sock *VAR_14;
 struct inet_connection_sock *VAR_15;





 if (VAR_5 == ((void*)0))
  return 0;




 VAR_10 = VAR_0;
 VAR_9 = FUNC_7(VAR_10, VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto socket_setattr_failure;
 }

 VAR_8 = FUNC_1(VAR_9, VAR_10, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto socket_setattr_failure;
 VAR_10 = VAR_8;





 VAR_11 = (VAR_10 + 3) & ~3;
 VAR_13 = FUNC_8(VAR_11, VAR_3);
 if (VAR_13 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto socket_setattr_failure;
 }
 FUNC_9(VAR_13->__data, VAR_9, VAR_10);
 VAR_13->optlen = VAR_11;
 VAR_13->cipso = sizeof(struct iphdr);
 FUNC_5(VAR_9);
 VAR_9 = ((void*)0);

 VAR_14 = FUNC_4(VAR_5);
 VAR_12 = FUNC_11(VAR_14->opt);
 if (VAR_14->is_icsk) {
  VAR_15 = FUNC_3(VAR_5);
  if (VAR_12)
   VAR_15->icsk_ext_hdr_len -= VAR_12->optlen;
  VAR_15->icsk_ext_hdr_len += VAR_13->optlen;
  VAR_15->icsk_sync_mss(VAR_5, VAR_15->icsk_pmtu_cookie);
 }
 FUNC_10(VAR_14->opt, VAR_13);
 if (VAR_12)
  FUNC_0(&FUNC_2(VAR_12)->rcu, VAR_4);

 return 0;

socket_setattr_failure:
 FUNC_5(VAR_9);
 FUNC_6(VAR_13);
 return VAR_8;
}
