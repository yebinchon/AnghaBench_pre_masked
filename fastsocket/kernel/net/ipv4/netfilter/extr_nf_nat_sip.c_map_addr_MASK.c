
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


union nf_inet_addr {scalar_t__ ip; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {TYPE_10__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_17__ {scalar_t__ port; } ;
struct TYPE_18__ {TYPE_6__ udp; } ;
struct TYPE_16__ {scalar_t__ ip; } ;
struct TYPE_19__ {TYPE_7__ u; TYPE_5__ u3; } ;
struct TYPE_13__ {scalar_t__ port; } ;
struct TYPE_14__ {TYPE_2__ udp; } ;
struct TYPE_12__ {scalar_t__ ip; } ;
struct TYPE_15__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct TYPE_20__ {TYPE_8__ src; TYPE_4__ dst; } ;
struct TYPE_11__ {TYPE_9__ tuple; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (char*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0,
      const char **VAR_1, unsigned int *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      union nf_inet_addr *VAR_5, __be16 VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_2(VAR_0, &VAR_7);
 enum ip_conntrack_dir VAR_9 = FUNC_0(VAR_7);
 char VAR_10[sizeof("nnn.nnn.nnn.nnn:nnnnn")];
 unsigned int VAR_11;
 __be32 VAR_12;
 __be16 VAR_13;

 if (VAR_8->tuplehash[VAR_9].tuple.src.u3.ip == VAR_5->ip &&
     VAR_8->tuplehash[VAR_9].tuple.src.u.udp.port == VAR_6) {
  VAR_12 = VAR_8->tuplehash[!VAR_9].tuple.dst.u3.ip;
  VAR_13 = VAR_8->tuplehash[!VAR_9].tuple.dst.u.udp.port;
 } else if (VAR_8->tuplehash[VAR_9].tuple.dst.u3.ip == VAR_5->ip &&
     VAR_8->tuplehash[VAR_9].tuple.dst.u.udp.port == VAR_6) {
  VAR_12 = VAR_8->tuplehash[!VAR_9].tuple.src.u3.ip;
  VAR_13 = VAR_8->tuplehash[!VAR_9].tuple.src.u.udp.port;
 } else
  return 1;

 if (VAR_12 == VAR_5->ip && VAR_13 == VAR_6)
  return 1;

 VAR_11 = FUNC_4(VAR_10, "%pI4:%u", &VAR_12, FUNC_3(VAR_13));

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_10, VAR_11);
}
