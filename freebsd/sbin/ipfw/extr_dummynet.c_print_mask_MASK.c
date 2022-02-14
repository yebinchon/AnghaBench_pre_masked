
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_flow_id {int proto; int src_ip; int src_port; int dst_ip; int dst_port; int flow_id6; int dst_ip6; int src_ip6; scalar_t__ extra; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct ipfw_flow_id*) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(struct ipfw_flow_id *VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  FUNC_2("    "
      "mask: %s 0x%02x 0x%08x/0x%04x -> 0x%08x/0x%04x\n",
      VAR_1->extra ? "queue," : "",
      VAR_1->proto,
      VAR_1->src_ip, VAR_1->src_port,
      VAR_1->dst_ip, VAR_1->dst_port);
 } else {
  char VAR_2[255];
  FUNC_2("\n        mask: %sproto: 0x%02x, flow_id: 0x%08x,  ",
      VAR_1->extra ? "queue," : "",
      VAR_1->proto, VAR_1->flow_id6);
  FUNC_1(VAR_0, &(VAR_1->src_ip6), VAR_2, sizeof(VAR_2));
  FUNC_2("%s/0x%04x -> ", VAR_2, VAR_1->src_port);
  FUNC_1(VAR_0, &(VAR_1->dst_ip6), VAR_2, sizeof(VAR_2));
  FUNC_2("%s/0x%04x\n", VAR_2, VAR_1->dst_port);
 }
}
