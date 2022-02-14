
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int protocol; int frag_off; int id; int daddr; int saddr; } ;
struct audit_buffer {int dummy; } ;
typedef int _iph ;


 int VAR_0 ;
 int FUNC_0 (struct audit_buffer*,char*,...) ;
 int FUNC_1 (struct audit_buffer*,struct sk_buff*,int ,int) ;
 int FUNC_2 (int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*,int ,int,struct iphdr*) ;

__attribute__((used)) static void FUNC_4(struct audit_buffer *VAR_1, struct sk_buff *VAR_2)
{
 struct iphdr VAR_3;
 const struct iphdr *VAR_4;

 VAR_4 = FUNC_3(VAR_2, 0, sizeof(VAR_3), &VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_1, " truncated=1");
  return;
 }

 FUNC_0(VAR_1, " saddr=%pI4 daddr=%pI4 ipid=%hu proto=%hhu",
  &VAR_4->saddr, &VAR_4->daddr, FUNC_2(VAR_4->id), VAR_4->protocol);

 if (FUNC_2(VAR_4->frag_off) & VAR_0) {
  FUNC_0(VAR_1, " frag=1");
  return;
 }

 FUNC_1(VAR_1, VAR_2, VAR_4->protocol, VAR_4->ihl * 4);
}
