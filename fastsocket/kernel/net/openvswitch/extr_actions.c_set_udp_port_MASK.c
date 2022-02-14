
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ rxhash; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *,int ,scalar_t__*) ;
 struct udphdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_2, __be16 *VAR_3, __be16 VAR_4)
{
 struct udphdr *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->check && VAR_2->ip_summed != VAR_0) {
  FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5->check);

  if (!VAR_5->check)
   VAR_5->check = VAR_1;
 } else {
  *VAR_3 = VAR_4;
  VAR_2->rxhash = 0;
 }
}
