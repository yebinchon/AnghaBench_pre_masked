
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; } ;
struct TYPE_11__ {int key; } ;
struct TYPE_12__ {TYPE_4__ gre; scalar_t__ all; } ;
struct TYPE_13__ {TYPE_5__ u; } ;
struct TYPE_8__ {int key; } ;
struct TYPE_9__ {TYPE_1__ gre; scalar_t__ all; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ src; TYPE_3__ dst; } ;
struct net {int dummy; } ;
struct gre_hdr_pptp {scalar_t__ version; int call_id; int protocol; } ;
struct gre_hdr {scalar_t__ version; int call_id; int protocol; } ;
typedef int _grehdr ;
typedef int __be16 ;
struct TYPE_14__ {scalar_t__ dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct net* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net*,struct nf_conntrack_tuple*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_7__* FUNC_4 (struct sk_buff const*) ;
 struct gre_hdr_pptp* FUNC_5 (struct sk_buff const*,unsigned int,int,struct gre_hdr_pptp*) ;

__attribute__((used)) static bool FUNC_6(const struct sk_buff *VAR_2, unsigned int VAR_3,
        struct nf_conntrack_tuple *VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_2->dev ? VAR_2->dev : FUNC_4(VAR_2)->dev);
 const struct gre_hdr_pptp *VAR_6;
 struct gre_hdr_pptp VAR_7;
 __be16 VAR_8;
 const struct gre_hdr *VAR_9;
 struct gre_hdr VAR_10;


 VAR_9 = FUNC_5(VAR_2, VAR_3, sizeof(VAR_10), &VAR_10);
 if (!VAR_9 || VAR_9->version != VAR_1) {

  VAR_4->src.u.all = 0;
  VAR_4->dst.u.all = 0;
  return 1;
 }


 VAR_6 = FUNC_5(VAR_2, VAR_3, 8, &VAR_7);
 if (!VAR_6)
  return 1;

 if (FUNC_2(VAR_9->protocol) != VAR_0) {
  FUNC_3("GRE_VERSION_PPTP but unknown proto\n");
  return 0;
 }

 VAR_4->dst.u.gre.key = VAR_6->call_id;
 VAR_8 = FUNC_1(VAR_5, VAR_4);
 VAR_4->src.u.gre.key = VAR_8;

 return 1;
}
