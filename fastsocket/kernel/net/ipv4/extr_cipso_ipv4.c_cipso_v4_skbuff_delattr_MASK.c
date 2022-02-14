
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {scalar_t__ cipso; int is_changed; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 int FUNC_3 (unsigned char*,int ,unsigned char) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_1)
{
 int VAR_2;
 struct iphdr *VAR_3;
 struct ip_options *VAR_4 = &FUNC_0(VAR_1)->opt;
 unsigned char *VAR_5;

 if (VAR_4->cipso == 0)
  return 0;


 VAR_2 = FUNC_4(VAR_1, FUNC_5(VAR_1));
 if (VAR_2 < 0)
  return VAR_2;





 VAR_3 = FUNC_1(VAR_1);
 VAR_5 = (unsigned char *)VAR_3 + VAR_4->cipso;
 FUNC_3(VAR_5, VAR_0, VAR_5[1]);
 VAR_4->cipso = 0;
 VAR_4->is_changed = 1;

 FUNC_2(VAR_3);

 return 0;
}
