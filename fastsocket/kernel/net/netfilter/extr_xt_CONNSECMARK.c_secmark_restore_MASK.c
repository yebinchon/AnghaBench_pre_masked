
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ secmark; } ;
struct nf_conn {scalar_t__ secmark; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 struct nf_conn* FUNC_0 (struct sk_buff*,int*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0)
{
 if (!VAR_0->secmark) {
  const struct nf_conn *VAR_1;
  enum ip_conntrack_info VAR_2;

  VAR_1 = FUNC_0(VAR_0, &VAR_2);
  if (VAR_1 && VAR_1->secmark)
   VAR_0->secmark = VAR_1->secmark;
 }
}
