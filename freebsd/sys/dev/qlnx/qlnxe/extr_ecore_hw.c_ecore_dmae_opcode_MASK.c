
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_dmae_cmd; } ;
struct ecore_hwfn {int rel_pf_id; int port_id; TYPE_2__ dmae_info; } ;
struct ecore_dmae_params {int src_pfid; int dst_pfid; int port_id; int src_vfid; int dst_vfid; } ;
struct TYPE_3__ {int opcode_b; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_0 (struct ecore_dmae_params*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_32,
         const u8 VAR_33,
         const u8 VAR_34,
         struct ecore_dmae_params *VAR_35)
{
 u8 VAR_36, VAR_37, VAR_38;
 u16 VAR_39 = 0;
 u32 VAR_40 = 0;





 VAR_40 |= (VAR_33 ? VAR_19
       : VAR_20) <<
    VAR_23;
 VAR_36 = FUNC_0(VAR_35, VAR_28) ?
     VAR_35->src_pfid : VAR_32->rel_pf_id;
 VAR_40 |= (VAR_36 & VAR_21) <<
    VAR_22;


 VAR_40 |= (VAR_34 ? VAR_6
       : VAR_7) <<
    VAR_10;
 VAR_37 = FUNC_0(VAR_35, VAR_27) ?
     VAR_35->dst_pfid : VAR_32->rel_pf_id;
 VAR_40 |= (VAR_37 & VAR_8) <<
    VAR_9;
 VAR_40 |= VAR_2 << VAR_3;
 VAR_40 |= VAR_17 <<
    VAR_18;

 if (FUNC_0(VAR_35, VAR_0))
  VAR_40 |= 1 << VAR_1;




 VAR_40 |= VAR_14 << VAR_15;

 VAR_38 = (FUNC_0(VAR_35, VAR_29)) ?
    VAR_35->port_id : VAR_32->port_id;
 VAR_40 |= VAR_38 << VAR_16;


 VAR_40 |= VAR_17 <<
    VAR_18;


 VAR_40 |= VAR_4 <<
    VAR_5;


 if (FUNC_0(VAR_35, VAR_31)) {
  VAR_40 |= (1 << VAR_26);
  VAR_39 |= (VAR_35->src_vfid << VAR_25);
 } else {
  VAR_39 |= (VAR_24 <<
        VAR_25);
 }
 if (FUNC_0(VAR_35, VAR_30)) {
  VAR_40 |= 1 << VAR_13;
  VAR_39 |= VAR_35->dst_vfid << VAR_12;
 } else {
  VAR_39 |= VAR_11 <<
       VAR_12;
 }

 VAR_32->dmae_info.p_dmae_cmd->opcode = FUNC_2(VAR_40);
 VAR_32->dmae_info.p_dmae_cmd->opcode_b = FUNC_1(VAR_39);
}
