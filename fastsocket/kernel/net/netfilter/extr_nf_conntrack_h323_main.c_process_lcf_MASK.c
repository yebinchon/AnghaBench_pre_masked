
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_expect {int tuple; int helper; int flags; } ;
struct nf_conn {TYPE_3__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;
struct TYPE_9__ {int callSignalAddress; } ;
struct TYPE_6__ {int u3; } ;
struct TYPE_7__ {TYPE_1__ src; } ;
struct TYPE_8__ {TYPE_2__ tuple; } ;
typedef TYPE_4__ LocationConfirm ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct nf_conntrack_expect* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conntrack_expect*,int ,int ,int *,union nf_inet_addr*,int ,int *,int *) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_6 (struct nf_conntrack_expect*) ;
 int FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct nf_conn *VAR_5,
         enum ip_conntrack_info VAR_6,
         unsigned char **VAR_7, LocationConfirm *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_6);
 int VAR_10 = 0;
 __be16 VAR_11;
 union nf_inet_addr VAR_12;
 struct nf_conntrack_expect *VAR_13;

 FUNC_8("nf_ct_ras: LCF\n");

 if (!FUNC_1(VAR_5, *VAR_7, &VAR_8->callSignalAddress,
      &VAR_12, &VAR_11))
  return 0;


 if ((VAR_13 = FUNC_3(VAR_5)) == ((void*)0))
  return -1;
 FUNC_4(VAR_13, VAR_1, FUNC_7(VAR_5),
     &VAR_5->tuplehash[!VAR_9].tuple.src.u3, &VAR_12,
     VAR_0, ((void*)0), &VAR_11);
 VAR_13->flags = VAR_2;
 VAR_13->helper = VAR_3;

 if (FUNC_6(VAR_13) == 0) {
  FUNC_8("nf_ct_ras: expect Q.931 ");
  FUNC_2(&VAR_13->tuple);
 } else
  VAR_10 = -1;

 FUNC_5(VAR_13);



 return VAR_10;
}
