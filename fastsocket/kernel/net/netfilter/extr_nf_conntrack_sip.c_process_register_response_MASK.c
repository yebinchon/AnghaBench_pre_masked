
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {unsigned int register_cseq; } ;
struct TYPE_7__ {TYPE_1__ ct_sip_info; } ;
struct nf_conn_help {TYPE_2__ help; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __be16 ;
struct TYPE_8__ {int u3; } ;
struct TYPE_9__ {TYPE_3__ dst; } ;
struct TYPE_10__ {TYPE_4__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct nf_conn*,char const*,unsigned int*,unsigned int,int ,int*,unsigned int*,unsigned int*,union nf_inet_addr*,int *) ;
 int FUNC_3 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,int *,int *,unsigned int*) ;
 int FUNC_4 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_5 (struct sk_buff*,int*) ;
 int FUNC_6 (int *,union nf_inet_addr*) ;
 struct nf_conn_help* FUNC_7 (struct nf_conn*) ;
 scalar_t__ FUNC_8 (struct nf_conn*,union nf_inet_addr*,int ,unsigned int) ;
 unsigned int FUNC_9 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4,
         const char **VAR_5, unsigned int *VAR_6,
         unsigned int VAR_7, unsigned int VAR_8)
{
 enum ip_conntrack_info VAR_9;
 struct nf_conn *VAR_10 = FUNC_5(VAR_4, &VAR_9);
 struct nf_conn_help *VAR_11 = FUNC_7(VAR_10);
 enum ip_conntrack_dir VAR_12 = FUNC_0(VAR_9);
 union nf_inet_addr VAR_13;
 __be16 VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17 = 0;
 unsigned int VAR_18 = 0;
 int VAR_19 = 0, VAR_20;
 if (VAR_11->help.ct_sip_info.register_cseq != VAR_7)
  return VAR_0;

 if (VAR_8 >= 100 && VAR_8 <= 199)
  return VAR_0;
 if (VAR_8 < 200 || VAR_8 > 299)
  goto flush;

 if (FUNC_1(VAR_10, *VAR_5, 0, *VAR_6, VAR_3,
         &VAR_15, &VAR_16) > 0)
  VAR_18 = FUNC_9(*VAR_5 + VAR_15, ((void*)0), 10);

 while (1) {
  unsigned int VAR_21 = VAR_18;

  VAR_20 = FUNC_2(VAR_10, *VAR_5, &VAR_17, *VAR_6,
           VAR_2, &VAR_19,
           &VAR_15, &VAR_16,
           &VAR_13, &VAR_14);
  if (VAR_20 < 0)
   return VAR_1;
  else if (VAR_20 == 0)
   break;


  if (!FUNC_6(&VAR_10->tuplehash[VAR_12].tuple.dst.u3, &VAR_13))
   continue;

  VAR_20 = FUNC_3(VAR_10, *VAR_5,
         VAR_15 + VAR_16,
         *VAR_6, "expires=",
         ((void*)0), ((void*)0), &VAR_21);
  if (VAR_20 < 0)
   return VAR_1;
  if (VAR_21 == 0)
   break;
  if (FUNC_8(VAR_10, &VAR_13, VAR_14, VAR_21))
   return VAR_0;
 }

flush:
 FUNC_4(VAR_10, 0);
 return VAR_0;
}
