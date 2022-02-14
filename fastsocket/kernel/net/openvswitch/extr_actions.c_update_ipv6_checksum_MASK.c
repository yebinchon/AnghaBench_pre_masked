
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct udphdr {scalar_t__ check; } ;
struct tcphdr {int dummy; } ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ check; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,struct sk_buff*,int *,int const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct udphdr* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_4, u8 VAR_5,
     __be32 VAR_6[4], const __be32 VAR_7[4])
{
 int VAR_8 = VAR_4->len - FUNC_2(VAR_4);

 if (VAR_5 == VAR_2) {
  if (FUNC_1(VAR_8 >= sizeof(struct tcphdr)))
   FUNC_0(&FUNC_3(VAR_4)->check, VAR_4,
        VAR_6, VAR_7, 1);
 } else if (VAR_5 == VAR_3) {
  if (FUNC_1(VAR_8 >= sizeof(struct udphdr))) {
   struct udphdr *VAR_9 = FUNC_4(VAR_4);

   if (VAR_9->check || VAR_4->ip_summed == VAR_0) {
    FUNC_0(&VAR_9->check, VAR_4,
         VAR_6, VAR_7, 1);
    if (!VAR_9->check)
     VAR_9->check = VAR_1;
   }
  }
 }
}
