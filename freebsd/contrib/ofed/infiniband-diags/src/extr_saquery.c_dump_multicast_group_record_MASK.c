
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct query_params {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {int mtu; int rate; int pkey; int mlid; TYPE_1__ mgid; int sl_flow_hop; } ;
typedef TYPE_2__ ib_member_rec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int *,int *) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (char*,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, struct query_params *VAR_3)
{
 char VAR_4[VAR_1];
 ib_member_rec_t *VAR_5 = VAR_2;
 uint8_t VAR_6;
 FUNC_1(VAR_5->sl_flow_hop, &VAR_6, ((void*)0), ((void*)0));
 FUNC_3("MCMemberRecord group dump:\n"
        "\t\tMGID....................%s\n"
        "\t\tMlid....................0x%X\n"
        "\t\tMtu.....................0x%X\n"
        "\t\tpkey....................0x%X\n"
        "\t\tRate....................0x%X\n"
        "\t\tSL......................0x%X\n",
        FUNC_2(VAR_0, VAR_5->mgid.raw, VAR_4, sizeof VAR_4),
        FUNC_0(VAR_5->mlid),
        VAR_5->mtu, FUNC_0(VAR_5->pkey), VAR_5->rate, VAR_6);
}
