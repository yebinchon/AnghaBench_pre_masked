
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; int dev; } ;
struct TYPE_3__ {int dst; } ;
struct rtable {scalar_t__ rt_type; TYPE_1__ u; } ;
struct iphdr {int daddr; int tos; int saddr; } ;
struct ip_options {int srr; int is_changed; int srr_is_hit; int is_strictroute; } ;
typedef int __be32 ;
struct TYPE_4__ {struct ip_options opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct rtable*) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (struct sk_buff*,int *) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 struct rtable* FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct sk_buff *VAR_5)
{
 struct ip_options *VAR_6 = &(FUNC_0(VAR_5)->opt);
 int VAR_7, VAR_8;
 __be32 VAR_9;
 struct iphdr *VAR_10 = FUNC_3(VAR_5);
 unsigned char *VAR_11 = FUNC_8(VAR_5) + VAR_6->srr;
 struct rtable *VAR_12 = FUNC_9(VAR_5);
 struct rtable *VAR_13;
 int VAR_14;

 if (!VAR_6->srr)
  return 0;

 if (VAR_5->pkt_type != VAR_2)
  return -VAR_0;
 if (VAR_12->rt_type == VAR_4) {
  if (!VAR_6->is_strictroute)
   return 0;
  FUNC_2(VAR_5, VAR_1, 0, FUNC_1(16<<24));
  return -VAR_0;
 }
 if (VAR_12->rt_type != VAR_3)
  return -VAR_0;

 for (VAR_8=VAR_11[2], VAR_7 = VAR_11[1]; VAR_8 <= VAR_7; VAR_8 += 4) {
  if (VAR_8 + 3 > VAR_7) {
   FUNC_2(VAR_5, VAR_1, 0, FUNC_1((VAR_6->srr+2)<<24));
   return -VAR_0;
  }
  FUNC_6(&VAR_9, &VAR_11[VAR_8-1], 4);

  VAR_12 = FUNC_9(VAR_5);
  FUNC_7(VAR_5, ((void*)0));
  VAR_14 = FUNC_4(VAR_5, VAR_9, VAR_10->saddr, VAR_10->tos, VAR_5->dev);
  VAR_13 = FUNC_9(VAR_5);
  if (VAR_14 || (VAR_13->rt_type != VAR_4 && VAR_13->rt_type != VAR_3)) {
   FUNC_5(VAR_13);
   FUNC_7(VAR_5, &VAR_12->u.dst);
   return -VAR_0;
  }
  FUNC_5(VAR_12);
  if (VAR_13->rt_type != VAR_3)
   break;

  FUNC_6(&VAR_10->daddr, &VAR_11[VAR_8-1], 4);
  VAR_6->is_changed = 1;
 }
 if (VAR_8 <= VAR_7) {
  VAR_6->srr_is_hit = 1;
  VAR_6->is_changed = 1;
 }
 return 0;
}
