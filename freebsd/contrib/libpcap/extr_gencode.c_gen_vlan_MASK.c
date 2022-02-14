
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_10__ {int constant_part; } ;
struct TYPE_9__ {int constant_part; int is_variable; } ;
struct TYPE_12__ {scalar_t__ label_stack_depth; int linktype; scalar_t__ vlan_stack_depth; TYPE_3__* bpf_pcap; TYPE_2__ off_outermostlinkhdr; TYPE_1__ off_linkhdr; } ;
typedef TYPE_4__ compiler_state_t ;
struct TYPE_11__ {int bpf_codegen_flags; } ;


 int VAR_0 ;







 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct block* FUNC_1 (TYPE_4__*,int) ;
 struct block* FUNC_2 (TYPE_4__*,int) ;

struct block *
FUNC_3(compiler_state_t *VAR_1, int VAR_2)
{
 struct block *VAR_3;


 if (VAR_1->label_stack_depth > 0)
  FUNC_0(VAR_1, "no VLAN match after MPLS");
 switch (VAR_1->linktype) {

 case 134:
 case 130:
 case 129:
   VAR_3 = FUNC_2(VAR_1, VAR_2);
                break;

 case 133:
 case 128:
 case 131:
 case 132:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;

 default:
  FUNC_0(VAR_1, "no VLAN support for data link type %d",
        VAR_1->linktype);

 }

        VAR_1->vlan_stack_depth++;

 return (VAR_3);
}
