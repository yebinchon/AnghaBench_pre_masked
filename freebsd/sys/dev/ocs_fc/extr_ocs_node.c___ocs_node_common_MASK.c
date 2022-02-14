
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int refound; int display_name; struct TYPE_19__* ocs; struct TYPE_19__* els_req_cnt; struct TYPE_19__* els_cmpl_cnt; int attached; struct TYPE_19__* app; } ;
typedef TYPE_5__ ocs_t ;
typedef int ocs_sm_event_t ;
typedef TYPE_5__ ocs_sm_ctx_t ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_20__ {int io; TYPE_4__* header; TYPE_2__* payload; } ;
typedef TYPE_8__ ocs_node_cb_t ;
struct TYPE_21__ {int ox_id; } ;
typedef TYPE_9__ fc_header_t ;
struct TYPE_17__ {TYPE_9__* virt; } ;
struct TYPE_18__ {TYPE_3__ dma; } ;
struct TYPE_15__ {scalar_t__ virt; } ;
struct TYPE_16__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_9__*) ;
 int FUNC_3 (TYPE_5__*,char*,int ,char const*,int ) ;
 int FUNC_4 (TYPE_5__*,char*,int ,char const*,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_7 (int) ;

void *
FUNC_8(const char *VAR_7, ocs_sm_ctx_t *VAR_8, ocs_sm_event_t VAR_9, void *VAR_10)
{
 ocs_node_t *VAR_11 = ((void*)0);
 ocs_t *VAR_12 = ((void*)0);
 ocs_node_cb_t *VAR_13 = VAR_10;
 FUNC_0(VAR_8, ((void*)0));
 FUNC_0(VAR_8->app, ((void*)0));
 VAR_11 = VAR_8->app;
 FUNC_0(VAR_11->ocs, ((void*)0));
 VAR_12 = VAR_11->ocs;

 switch(VAR_9) {
 case 154:
 case 138:
 case 153:
 case 133:
 case 144:
 case 152:
  break;

 case 143:
  VAR_11->refound = 1;
  break;


 case 146:
  VAR_11->attached = VAR_6;
  break;

 case 145:
 case 147:
  VAR_11->attached = VAR_0;
  break;




 case 131:
 case 132:
  FUNC_0(VAR_11->els_cmpl_cnt, ((void*)0));
  VAR_11->els_cmpl_cnt--;
  break;




 case 129:
 case 130:
 case 128:
 case 155:
  FUNC_0(VAR_11->els_req_cnt, ((void*)0));
  VAR_11->els_req_cnt--;
  break;

 case 156: {
  fc_header_t *VAR_14 = VAR_13->header->dma.virt;


  FUNC_3(VAR_12, "[%s] (%s) ELS x%02x, LS_RJT not supported\n",
         VAR_11->display_name, VAR_7, ((uint8_t*)VAR_13->payload->dma.virt)[0]);
  FUNC_6(VAR_13->io, FUNC_1(VAR_14->ox_id),
   VAR_4, VAR_3, 0,
   ((void*)0), ((void*)0));
  break;
 }

 case 141:
 case 150:
 case 148:
 case 140:
 case 139:
 case 142:
 case 151:
 case 157:
 case 135:
 case 134: {
  fc_header_t *VAR_15 = VAR_13->header->dma.virt;

  FUNC_3(VAR_12, "[%s] (%s) %s sending ELS_RJT\n",
         VAR_11->display_name, VAR_7, FUNC_7(VAR_9));

  FUNC_6(VAR_13->io, FUNC_1(VAR_15->ox_id),
   VAR_5, VAR_3, 0,
   ((void*)0), ((void*)0));

  break;
 }
 case 149:
 case 136:
 case 137: {
  fc_header_t *VAR_16 = VAR_13->header->dma.virt;
  FUNC_3(VAR_12, "[%s] (%s) %s sending CT_REJECT\n",
         VAR_11->display_name, VAR_7, FUNC_7(VAR_9));
  FUNC_5(VAR_13->io, VAR_16->ox_id, VAR_13->payload->dma.virt, VAR_2, VAR_1, 0);
  break;
 }

 case 158: {
  fc_header_t *VAR_17 = VAR_13->header->dma.virt;
  FUNC_3(VAR_12, "[%s] (%s) %s sending BA_ACC\n",
         VAR_11->display_name, VAR_7, FUNC_7(VAR_9));


  FUNC_2(VAR_13->io, VAR_17);
  break;
 }

 default:
  FUNC_4(VAR_11->ocs, "[%s] %-20s %-20s not handled\n", VAR_11->display_name, VAR_7,
   FUNC_7(VAR_9));
  break;
 }
 return ((void*)0);
}
