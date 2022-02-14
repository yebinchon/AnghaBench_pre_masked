
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; int len; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_2__ {int cscov; scalar_t__ partial_cov; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct udphdr*) ;

__attribute__((used)) static inline int FUNC_6(struct sk_buff *VAR_3, struct udphdr *VAR_4,
     int VAR_5)
{
 const struct iphdr *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3)->partial_cov = 0;
 FUNC_0(VAR_3)->cscov = VAR_3->len;

 if (VAR_5 == VAR_2) {
  VAR_7 = FUNC_5(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_4->check == 0) {
  VAR_3->ip_summed = VAR_1;
 } else if (VAR_3->ip_summed == VAR_0) {
  if (!FUNC_1(VAR_6->saddr, VAR_6->daddr, VAR_3->len,
          VAR_5, VAR_3->csum))
   VAR_3->ip_summed = VAR_1;
 }
 if (!FUNC_4(VAR_3))
  VAR_3->csum = FUNC_2(VAR_6->saddr, VAR_6->daddr,
            VAR_3->len, VAR_5, 0);




 return 0;
}
