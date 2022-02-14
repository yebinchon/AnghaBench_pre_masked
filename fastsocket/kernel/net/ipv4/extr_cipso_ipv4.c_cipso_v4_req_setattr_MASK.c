
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct request_sock {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; int cipso; int __data; } ;
struct inet_request_sock {int opt; } ;
struct cipso_v4_doi {int dummy; } ;
struct TYPE_2__ {int rcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned char*,int,struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*) ;
 TYPE_1__* FUNC_2 (struct ip_options*) ;
 struct inet_request_sock* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (struct ip_options*) ;
 unsigned char* FUNC_6 (int,int ) ;
 struct ip_options* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,unsigned char*,int) ;
 int VAR_4 ;
 struct ip_options* FUNC_9 (int *,struct ip_options*) ;

int FUNC_10(struct request_sock *VAR_5,
    const struct cipso_v4_doi *VAR_6,
    const struct netlbl_lsm_secattr *VAR_7)
{
 int VAR_8 = -VAR_2;
 unsigned char *VAR_9 = ((void*)0);
 u32 VAR_10;
 u32 VAR_11;
 struct ip_options *VAR_12 = ((void*)0);
 struct inet_request_sock *VAR_13;




 VAR_10 = VAR_0;
 VAR_9 = FUNC_6(VAR_10, VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto req_setattr_failure;
 }

 VAR_8 = FUNC_1(VAR_9, VAR_10, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto req_setattr_failure;
 VAR_10 = VAR_8;





 VAR_11 = (VAR_10 + 3) & ~3;
 VAR_12 = FUNC_7(VAR_11, VAR_3);
 if (VAR_12 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto req_setattr_failure;
 }
 FUNC_8(VAR_12->__data, VAR_9, VAR_10);
 VAR_12->optlen = VAR_11;
 VAR_12->cipso = sizeof(struct iphdr);
 FUNC_4(VAR_9);
 VAR_9 = ((void*)0);

 VAR_13 = FUNC_3(VAR_5);
 VAR_12 = FUNC_9(&VAR_13->opt, VAR_12);
 if (VAR_12)
  FUNC_0(&FUNC_2(VAR_12)->rcu, VAR_4);

 return 0;

req_setattr_failure:
 FUNC_4(VAR_9);
 FUNC_5(VAR_12);
 return VAR_8;
}
