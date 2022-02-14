
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int mode; int srcmask; int dstmask; } ;
struct xt_hashlimit_htable {int family; TYPE_3__ cfg; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_7__ {int src; int dst; } ;
struct TYPE_6__ {void* src; void* dst; } ;
struct dsthash_dst {void* dst_port; void* src_port; TYPE_2__ ip6; TYPE_1__ ip; } ;
typedef int _ports ;
typedef void* __be16 ;
struct TYPE_10__ {int protocol; int saddr; int daddr; } ;
struct TYPE_9__ {int nexthdr; int saddr; int daddr; } ;


 int FUNC_0 () ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 (struct sk_buff const*) ;
 TYPE_4__* FUNC_3 (struct sk_buff const*) ;
 unsigned int FUNC_4 (struct sk_buff const*,int,int*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct dsthash_dst*,int ,int) ;
 void** FUNC_8 (struct sk_buff const*,unsigned int,int,void***) ;

__attribute__((used)) static int
FUNC_9(const struct xt_hashlimit_htable *VAR_4,
     struct dsthash_dst *VAR_5,
     const struct sk_buff *VAR_6, unsigned int VAR_7)
{
 __be16 VAR_8[2], *VAR_9;
 u8 VAR_10;

 FUNC_7(VAR_5, 0, sizeof(*VAR_5));

 switch (VAR_4->family) {
 case 129:
  if (VAR_4->cfg.mode & VAR_0)
   VAR_5->ip.dst = FUNC_5(FUNC_2(VAR_6)->daddr,
                 VAR_4->cfg.dstmask);
  if (VAR_4->cfg.mode & VAR_2)
   VAR_5->ip.src = FUNC_5(FUNC_2(VAR_6)->saddr,
                 VAR_4->cfg.srcmask);

  if (!(VAR_4->cfg.mode &
        (VAR_1 | VAR_3)))
   return 0;
  VAR_10 = FUNC_2(VAR_6)->protocol;
  break;
 default:
  FUNC_0();
  return 0;
 }

 switch (VAR_10) {
 case 132:
 case 131:
 case 130:
 case 133:
 case 134:
  VAR_9 = FUNC_8(VAR_6, VAR_7, sizeof(VAR_8),
        &VAR_8);
  break;
 default:
  VAR_8[0] = VAR_8[1] = 0;
  VAR_9 = VAR_8;
  break;
 }
 if (!VAR_9)
  return -1;
 if (VAR_4->cfg.mode & VAR_3)
  VAR_5->src_port = VAR_9[0];
 if (VAR_4->cfg.mode & VAR_1)
  VAR_5->dst_port = VAR_9[1];
 return 0;
}
