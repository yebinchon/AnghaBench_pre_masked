
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_22__ {int link_speed_active; int link_speed_enabled; } ;
struct TYPE_21__ {scalar_t__ link_width_active; scalar_t__ link_width_enabled; int capability_mask; } ;
struct TYPE_19__ {TYPE_5__ ext_port_info; TYPE_4__ port_info; } ;
typedef TYPE_2__ osm_physp_t ;
struct TYPE_18__ {scalar_t__ node_type; int node_guid; } ;
struct TYPE_20__ {int print_desc; TYPE_1__ node_info; } ;
typedef TYPE_3__ osm_node_t ;
typedef TYPE_4__ ib_port_info_t ;
typedef TYPE_5__ ib_mlnx_ext_port_info_t ;
struct TYPE_23__ {scalar_t__ node_type_lim; int ports_unknown_width; int unknown_width_ports; int ports_2X; int ports_12X; int ports_8X; int ports_4X; int ports_1X; int ports_unknown_speed; int unknown_speed_ports; int ports_edr; int ports_fdr; int ports_reduced_speed; int reduced_speed_ports; int ports_unenabled_speed; int unenabled_speed_ports; int ports_qdr; int ports_fdr10; int ports_ddr; int ports_sdr; int ports_reduced_width; int reduced_width_ports; int ports_unenabled_width; int unenabled_width_ports; int total_ports; int ports_disabled; int disabled_ports; int ports_active; int ports_down; int total_nodes; } ;
typedef TYPE_6__ fabric_stats_t ;
typedef int cl_map_item_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 scalar_t__ VAR_3 ;





 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(cl_map_item_t * const VAR_7, void *VAR_8)
{
 fabric_stats_t *VAR_9 = (fabric_stats_t *) VAR_8;
 osm_node_t *VAR_10 = (osm_node_t *) VAR_7;
 osm_physp_t *VAR_11;
 ib_port_info_t *VAR_12;
 uint8_t VAR_13 = FUNC_9(VAR_10);
 uint8_t VAR_14 = 0;


 if (VAR_9->node_type_lim != 0
     && VAR_9->node_type_lim != VAR_10->node_info.node_type)
  return;

 VAR_9->total_nodes++;

 if (FUNC_11(VAR_10) == VAR_4) {
  VAR_11 = FUNC_10(VAR_10, 0);
  VAR_12 = &VAR_11->port_info;
 } else
  VAR_12 = ((void*)0);

 for (VAR_14 = 1; VAR_14 < VAR_13; VAR_14++) {
  osm_physp_t *VAR_15 = FUNC_10(VAR_10, VAR_14);
  ib_port_info_t *VAR_16 = ((void*)0);
  ib_mlnx_ext_port_info_t *VAR_17 = ((void*)0);
  uint8_t VAR_18 = 0;
  uint8_t VAR_19 = 0;
  uint8_t VAR_20 = 0;
  uint8_t VAR_21 = 0;
  uint8_t VAR_22 = 0;
  uint8_t VAR_23 = 0;

  if (!VAR_15)
   continue;

  VAR_16 = &VAR_15->port_info;
  VAR_17 = &VAR_15->ext_port_info;
  if (!VAR_12)
   VAR_12 = VAR_16;
  VAR_18 = FUNC_2(VAR_16);
  VAR_19 = FUNC_3(VAR_16);
  VAR_20 = VAR_16->link_width_active;
  VAR_21 = VAR_16->link_width_enabled;
  VAR_22 = FUNC_8(VAR_16);
  VAR_23 = FUNC_7(VAR_16);

  if (VAR_22 == VAR_2)
   VAR_9->ports_down++;
  else if (VAR_22 == VAR_1)
   VAR_9->ports_active++;
  if (VAR_23 == VAR_6) {
   FUNC_0(&(VAR_9->disabled_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_disabled++;
  }

  VAR_9->total_ports++;

  if (VAR_22 == VAR_2)
   continue;

  if (!(VAR_20 & VAR_21)) {
   FUNC_0(&(VAR_9->unenabled_width_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_unenabled_width++;
  }
  else if ((VAR_21 ^ VAR_20) > VAR_20) {
   FUNC_0(&(VAR_9->reduced_width_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_reduced_width++;
  }


  if (!(VAR_18 & VAR_19)) {
   FUNC_0(&(VAR_9->unenabled_speed_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_unenabled_speed++;
  }
  else if ((VAR_19 ^ VAR_18) > VAR_18) {
   FUNC_0(&(VAR_9->reduced_speed_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_reduced_speed++;
  }

  switch (VAR_18) {
  case 138:
   VAR_9->ports_sdr++;
   break;
  case 137:
   VAR_9->ports_ddr++;
   break;
  case 139:
   if (!(VAR_12->capability_mask & VAR_5) ||
       !FUNC_4(VAR_16)) {
    if (VAR_17->link_speed_active & VAR_0)
     VAR_9->ports_fdr10++;
    else {
     VAR_9->ports_qdr++;

     if (VAR_17->link_speed_enabled & VAR_0) {
      FUNC_0(&(VAR_9->reduced_speed_ports),
          FUNC_1(VAR_10->node_info.node_guid),
          VAR_14, VAR_10->print_desc);
      VAR_9->ports_reduced_speed++;
     }
    }
   }
   break;
  case 136:
   break;
  default:
   FUNC_0(&(VAR_9->unknown_speed_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_unknown_speed++;
   break;
  }
  if (VAR_12->capability_mask & VAR_5 &&
      FUNC_6(VAR_16) &&
      (VAR_19 = FUNC_5(VAR_16)) != VAR_3 &&
      VAR_18 == 139) {
   VAR_18 = FUNC_4(VAR_16);
   if (!(VAR_18 & VAR_19)) {
    FUNC_0(&(VAR_9->unenabled_speed_ports),
        FUNC_1(VAR_10->node_info.node_guid),
        VAR_14, VAR_10->print_desc);
    VAR_9->ports_unenabled_speed++;
   }
   else if ((VAR_19 ^ VAR_18) > VAR_18) {
    FUNC_0(&(VAR_9->reduced_speed_ports),
        FUNC_1(VAR_10->node_info.node_guid),
        VAR_14, VAR_10->print_desc);
    VAR_9->ports_reduced_speed++;
   }
   switch (VAR_18) {
   case 135:
    VAR_9->ports_fdr++;
    break;
   case 134:
    VAR_9->ports_edr++;
    break;
   case 133:
    break;
   default:
    FUNC_0(&(VAR_9->unknown_speed_ports),
        FUNC_1(VAR_10->node_info.node_guid),
        VAR_14, VAR_10->print_desc);
    VAR_9->ports_unknown_speed++;
    break;
   }
  }
  switch (VAR_20) {
  case 131:
   VAR_9->ports_1X++;
   break;
  case 129:
   VAR_9->ports_4X++;
   break;
  case 128:
   VAR_9->ports_8X++;
   break;
  case 132:
   VAR_9->ports_12X++;
   break;
  case 130:
   VAR_9->ports_2X++;
   break;
  default:
   FUNC_0(&(VAR_9->unknown_width_ports),
       FUNC_1(VAR_10->node_info.node_guid),
       VAR_14, VAR_10->print_desc);
   VAR_9->ports_unknown_width++;
   break;
  }
 }
}
