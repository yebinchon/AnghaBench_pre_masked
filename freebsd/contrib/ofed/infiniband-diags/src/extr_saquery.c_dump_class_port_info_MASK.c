
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int base_ver; int class_ver; int trap_qkey; int trap_hop_qp; int trap_pkey; int trap_lid; int trap_tc_sl_fl; int trap_gid; int redir_qkey; int redir_qp; int redir_pkey; int redir_lid; int redir_tc_sl_fl; int redir_gid; int cap_mask; } ;
typedef TYPE_1__ ib_class_port_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (char*,int,int,int,int,int,char*,int,int,int,int,int,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(ib_class_port_info_t *VAR_2)
{
 char VAR_3[VAR_1];
 char VAR_4[VAR_1];

 FUNC_5("SA ClassPortInfo:\n"
        "\t\tBase version.............%d\n"
        "\t\tClass version............%d\n"
        "\t\tCapability mask..........0x%04X\n"
        "\t\tCapability mask 2........0x%08X\n"
        "\t\tResponse time value......0x%02X\n"
        "\t\tRedirect GID.............%s\n"
        "\t\tRedirect TC/SL/FL........0x%08X\n"
        "\t\tRedirect LID.............%u\n"
        "\t\tRedirect PKey............0x%04X\n"
        "\t\tRedirect QP..............0x%08X\n"
        "\t\tRedirect QKey............0x%08X\n"
        "\t\tTrap GID.................%s\n"
        "\t\tTrap TC/SL/FL............0x%08X\n"
        "\t\tTrap LID.................%u\n"
        "\t\tTrap PKey................0x%04X\n"
        "\t\tTrap HL/QP...............0x%08X\n"
        "\t\tTrap QKey................0x%08X\n",
        VAR_2->base_ver, VAR_2->class_ver, FUNC_0(VAR_2->cap_mask),
        FUNC_2(VAR_2), FUNC_3(VAR_2),
        FUNC_4(VAR_0, &(VAR_2->redir_gid), VAR_3, sizeof VAR_3),
        FUNC_1(VAR_2->redir_tc_sl_fl), FUNC_0(VAR_2->redir_lid),
        FUNC_0(VAR_2->redir_pkey), FUNC_1(VAR_2->redir_qp),
        FUNC_1(VAR_2->redir_qkey),
        FUNC_4(VAR_0, &(VAR_2->trap_gid), VAR_4, sizeof VAR_4),
        FUNC_1(VAR_2->trap_tc_sl_fl), FUNC_0(VAR_2->trap_lid),
        FUNC_0(VAR_2->trap_pkey), FUNC_1(VAR_2->trap_hop_qp),
        FUNC_1(VAR_2->trap_qkey));
}
