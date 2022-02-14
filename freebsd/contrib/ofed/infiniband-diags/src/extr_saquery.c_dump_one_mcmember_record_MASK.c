
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct query_params {int dummy; } ;
typedef int mgid ;
struct TYPE_5__ {int raw; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_6__ {int mtu; int tclass; int rate; int pkt_life; int proxy_join; int pkey; int mlid; int qkey; TYPE_2__ port_gid; TYPE_1__ mgid; int scope_state; int sl_flow_hop; } ;
typedef TYPE_3__ ib_member_rec_t ;
typedef int gid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ,int*,int*,int*) ;
 char* FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (char*,char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, struct query_params *VAR_3)
{
 char VAR_4[VAR_1], VAR_5[VAR_1];
 ib_member_rec_t *VAR_6 = VAR_2;
 uint32_t VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10, VAR_11;
 FUNC_3(VAR_6->sl_flow_hop, &VAR_8, &VAR_7, &VAR_9);
 FUNC_2(VAR_6->scope_state, &VAR_10, &VAR_11);
 FUNC_5("MCMember Record dump:\n"
        "\t\tMGID....................%s\n"
        "\t\tPortGid.................%s\n"
        "\t\tqkey....................0x%x\n"
        "\t\tmlid....................0x%x\n"
        "\t\tmtu.....................0x%x\n"
        "\t\tTClass..................0x%x\n"
        "\t\tpkey....................0x%x\n"
        "\t\trate....................0x%x\n"
        "\t\tpkt_life................0x%x\n"
        "\t\tSL......................0x%x\n"
        "\t\tFlowLabel...............0x%x\n"
        "\t\tHopLimit................0x%x\n"
        "\t\tScope...................0x%x\n"
        "\t\tJoinState...............0x%x\n"
        "\t\tProxyJoin...............0x%x\n",
        FUNC_4(VAR_0, VAR_6->mgid.raw, VAR_4, sizeof(VAR_4)),
        FUNC_4(VAR_0, VAR_6->port_gid.raw, VAR_5, sizeof(VAR_5)),
        FUNC_1(VAR_6->qkey), FUNC_0(VAR_6->mlid), VAR_6->mtu, VAR_6->tclass,
        FUNC_0(VAR_6->pkey), VAR_6->rate, VAR_6->pkt_life, VAR_8,
        VAR_7, VAR_9, VAR_10, VAR_11, VAR_6->proxy_join);
}
