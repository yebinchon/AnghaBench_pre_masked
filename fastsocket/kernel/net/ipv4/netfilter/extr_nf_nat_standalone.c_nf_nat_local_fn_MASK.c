
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nf_conn {TYPE_8__* tuplehash; } ;
struct net_device {int dummy; } ;
struct iphdr {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_13__ {scalar_t__ all; } ;
struct TYPE_10__ {scalar_t__ ip; } ;
struct TYPE_14__ {TYPE_5__ u; TYPE_2__ u3; } ;
struct TYPE_11__ {scalar_t__ all; } ;
struct TYPE_9__ {scalar_t__ ip; } ;
struct TYPE_12__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct TYPE_15__ {TYPE_6__ src; TYPE_4__ dst; } ;
struct TYPE_16__ {TYPE_7__ tuple; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 unsigned int FUNC_5 (unsigned int,struct sk_buff*,struct net_device const*,struct net_device const*,int (*) (struct sk_buff*)) ;

__attribute__((used)) static unsigned int
FUNC_6(unsigned int VAR_4,
  struct sk_buff *VAR_5,
  const struct net_device *VAR_6,
  const struct net_device *VAR_7,
  int (*VAR_8)(struct sk_buff *))
{
 const struct nf_conn *VAR_9;
 enum ip_conntrack_info VAR_10;
 unsigned int VAR_11;


 if (VAR_5->len < sizeof(struct iphdr) ||
     FUNC_1(VAR_5) < sizeof(struct iphdr))
  return VAR_0;

 VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 != VAR_1 && VAR_11 != VAR_2 &&
     (VAR_9 = FUNC_4(VAR_5, &VAR_10)) != ((void*)0)) {
  enum ip_conntrack_dir VAR_12 = FUNC_0(VAR_10);

  if (VAR_9->tuplehash[VAR_12].tuple.dst.u3.ip !=
      VAR_9->tuplehash[!VAR_12].tuple.src.u3.ip) {
   if (FUNC_2(VAR_5, VAR_3))
    VAR_11 = VAR_1;
  }






 }
 return VAR_11;
}
