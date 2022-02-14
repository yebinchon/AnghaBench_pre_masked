
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* gid; int pkey_index; int flow_label; scalar_t__ traffic_class; scalar_t__ hop_limit; scalar_t__ gid_index; int grh_present; int sl; int lid; int qkey; int qpn; } ;
typedef TYPE_1__ ib_mad_addr_t ;


 char FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int,int,int,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(ib_mad_addr_t * VAR_0)
{

 char VAR_1[64];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof VAR_0->gid; VAR_2++) {
  VAR_1[VAR_2 * 2] = ((VAR_0->gid[VAR_2] >> 4) < 10 ? '0' + (VAR_0->gid[VAR_2] >> 4) : 'a' + ((VAR_0->gid[VAR_2] >> 4) -10));
  VAR_1[VAR_2 * 2 + 1] = ((VAR_0->gid[VAR_2] & 0xf) < 10 ? '0' + (VAR_0->gid[VAR_2] & 0xf) : 'a' + ((VAR_0->gid[VAR_2] & 0xf) -10));
 }
 VAR_1[VAR_2 * 2] = 0;
 FUNC_1("qpn %d qkey 0x%x lid %u sl %d\n"
        "grh_present %d gid_index %d hop_limit %d traffic_class %d flow_label 0x%x pkey_index 0x%x\n"
        "Gid 0x%s",
        FUNC_3(VAR_0->qpn), FUNC_3(VAR_0->qkey), FUNC_2(VAR_0->lid), VAR_0->sl,
        VAR_0->grh_present, (int)VAR_0->gid_index, (int)VAR_0->hop_limit,
        (int)VAR_0->traffic_class, VAR_0->flow_label, VAR_0->pkey_index,
        VAR_1);
}
