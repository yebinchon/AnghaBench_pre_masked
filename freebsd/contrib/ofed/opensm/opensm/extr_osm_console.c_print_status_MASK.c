
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int sm_priority; int sweep_interval; } ;
struct TYPE_14__ {int sweeping_enabled; int ignore_existing_lfts; int subnet_initialization_error; int in_sweep_hop_0; int first_time_master_sweep; int coming_out_of_standby; TYPE_4__ opt; int sm_state; } ;
struct TYPE_12__ {scalar_t__ sa_mads_ignored; scalar_t__ sa_mads_rcvd_unknown; scalar_t__ sa_mads_sent; scalar_t__ sa_mads_rcvd; scalar_t__ sa_mads_outstanding; scalar_t__ qp0_mads_rcvd_unknown; scalar_t__ qp0_unicasts_sent; scalar_t__ qp0_mads_sent; scalar_t__ qp0_mads_rcvd; scalar_t__ qp0_mads_outstanding_on_wire; scalar_t__ qp0_mads_outstanding; } ;
struct TYPE_10__ {int state; } ;
struct TYPE_15__ {char* osm_version; int lock; TYPE_5__ subn; TYPE_3__ stats; int perfmgr; int plugin_list; TYPE_2__* routing_engine_used; TYPE_1__ sa; } ;
typedef TYPE_6__ osm_opensm_t ;
struct TYPE_16__ {char* plugin_name; } ;
typedef TYPE_7__ osm_epi_plugin_t ;
typedef int cl_list_item_t ;
struct TYPE_11__ {int type; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (int *,char*,...) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(osm_opensm_t * VAR_1, FILE * VAR_2)
{
 cl_list_item_t *VAR_3;

 if (VAR_2) {
  const char *VAR_4;

  FUNC_0(&VAR_1->lock);
  FUNC_6(VAR_2, "   OpenSM Version       : %s\n", VAR_1->osm_version);
  FUNC_6(VAR_2, "   SM State             : %s\n",
   FUNC_11(VAR_1->subn.sm_state));
  FUNC_6(VAR_2, "   SM Priority          : %d\n",
   VAR_1->subn.opt.sm_priority);
  FUNC_6(VAR_2, "   SA State             : %s\n",
   FUNC_10(VAR_1->sa.state));

  VAR_4 = VAR_1->routing_engine_used ?
   FUNC_9(VAR_1->routing_engine_used->type) :
   FUNC_9(VAR_0);
  FUNC_6(VAR_2, "   Routing Engine       : %s\n", VAR_4);

  FUNC_6(VAR_2, "   Loaded event plugins :");
  if (FUNC_3(&VAR_1->plugin_list) ==
   FUNC_2(&VAR_1->plugin_list)) {
   FUNC_6(VAR_2, " <none>");
  }
  for (VAR_3 = FUNC_3(&VAR_1->plugin_list);
       VAR_3 != FUNC_2(&VAR_1->plugin_list);
       VAR_3 = FUNC_4(VAR_3))
   FUNC_6(VAR_2, " %s",
    ((osm_epi_plugin_t *)VAR_3)->plugin_name);
  FUNC_6(VAR_2, "\n");






  FUNC_6(VAR_2, "\n   MAD stats\n"
   "   ---------\n"
   "   QP0 MADs outstanding           : %u\n"
   "   QP0 MADs outstanding (on wire) : %u\n"
   "   QP0 MADs rcvd                  : %u\n"
   "   QP0 MADs sent                  : %u\n"
   "   QP0 unicasts sent              : %u\n"
   "   QP0 unknown MADs rcvd          : %u\n"
   "   SA MADs outstanding            : %u\n"
   "   SA MADs rcvd                   : %u\n"
   "   SA MADs sent                   : %u\n"
   "   SA unknown MADs rcvd           : %u\n"
   "   SA MADs ignored                : %u\n",
   (uint32_t)VAR_1->stats.qp0_mads_outstanding,
   (uint32_t)VAR_1->stats.qp0_mads_outstanding_on_wire,
   (uint32_t)VAR_1->stats.qp0_mads_rcvd,
   (uint32_t)VAR_1->stats.qp0_mads_sent,
   (uint32_t)VAR_1->stats.qp0_unicasts_sent,
   (uint32_t)VAR_1->stats.qp0_mads_rcvd_unknown,
   (uint32_t)VAR_1->stats.sa_mads_outstanding,
   (uint32_t)VAR_1->stats.sa_mads_rcvd,
   (uint32_t)VAR_1->stats.sa_mads_sent,
   (uint32_t)VAR_1->stats.sa_mads_rcvd_unknown,
   (uint32_t)VAR_1->stats.sa_mads_ignored);
  FUNC_6(VAR_2, "\n   Subnet flags\n"
   "   ------------\n"
   "   Sweeping enabled               : %d\n"
   "   Sweep interval (seconds)       : %u\n"
   "   Ignore existing lfts           : %d\n"
   "   Subnet Init errors             : %d\n"
   "   In sweep hop 0                 : %d\n"
   "   First time master sweep        : %d\n"
   "   Coming out of standby          : %d\n",
   VAR_1->subn.sweeping_enabled,
   VAR_1->subn.opt.sweep_interval,
   VAR_1->subn.ignore_existing_lfts,
   VAR_1->subn.subnet_initialization_error,
   VAR_1->subn.in_sweep_hop_0,
   VAR_1->subn.first_time_master_sweep,
   VAR_1->subn.coming_out_of_standby);
  FUNC_5(VAR_1, VAR_2);
  FUNC_6(VAR_2, "\n");
  FUNC_1(&VAR_1->lock);
 }
}
