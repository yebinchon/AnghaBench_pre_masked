
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_10__ {char* display_name; char* io_type; char* hio_type; char* cmd_tgt; char* cmd_ini; char* send_abts; char* init_task_tag; char* tgt_task_tag; char* hw_tag; char* tag; char* timeout; char* tmf_cmd; char* abort_rx_id; char* transferred; char* auto_resp; char* exp_xfer_len; char* xfer_req; char* seq_init; int instance_index; TYPE_2__* hio; int link; int io_pending_link; int io_alloc_link; int ref; TYPE_1__* node; } ;
typedef TYPE_3__ ocs_io_t ;
struct TYPE_9__ {char* reqtag; char* indicator; char* type; } ;
struct TYPE_8__ {char* display_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 char* FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_3__*) ;
 int FUNC_7 (int *,int ,TYPE_3__*) ;

void
FUNC_8(ocs_textbuf_t *VAR_1, ocs_io_t *VAR_2)
{
 FUNC_1(VAR_1, "io", VAR_2->instance_index);
 FUNC_2(VAR_1, "display_name", "%s", VAR_2->display_name);
 FUNC_2(VAR_1, "node_name", "%s", VAR_2->node->display_name);

 FUNC_2(VAR_1, "ref_count", "%d", FUNC_5(&VAR_2->ref));
 FUNC_2(VAR_1, "io_type", "%d", VAR_2->io_type);
 FUNC_2(VAR_1, "hio_type", "%d", VAR_2->hio_type);
 FUNC_2(VAR_1, "cmd_tgt", "%d", VAR_2->cmd_tgt);
 FUNC_2(VAR_1, "cmd_ini", "%d", VAR_2->cmd_ini);
 FUNC_2(VAR_1, "send_abts", "%d", VAR_2->send_abts);
 FUNC_2(VAR_1, "init_task_tag", "0x%x", VAR_2->init_task_tag);
 FUNC_2(VAR_1, "tgt_task_tag", "0x%x", VAR_2->tgt_task_tag);
 FUNC_2(VAR_1, "hw_tag", "0x%x", VAR_2->hw_tag);
 FUNC_2(VAR_1, "tag", "0x%x", VAR_2->tag);
 FUNC_2(VAR_1, "timeout", "%d", VAR_2->timeout);
 FUNC_2(VAR_1, "tmf_cmd", "%d", VAR_2->tmf_cmd);
 FUNC_2(VAR_1, "abort_rx_id", "0x%x", VAR_2->abort_rx_id);

 FUNC_2(VAR_1, "busy", "%d", FUNC_3(VAR_2));
 FUNC_2(VAR_1, "transferred", "%zu", VAR_2->transferred);
 FUNC_2(VAR_1, "auto_resp", "%d", VAR_2->auto_resp);
 FUNC_2(VAR_1, "exp_xfer_len", "%d", VAR_2->exp_xfer_len);
 FUNC_2(VAR_1, "xfer_req", "%d", VAR_2->xfer_req);
 FUNC_2(VAR_1, "seq_init", "%d", VAR_2->seq_init);

 FUNC_2(VAR_1, "alloc_link", "%d", FUNC_4(&VAR_2->io_alloc_link));
 FUNC_2(VAR_1, "pending_link", "%d", FUNC_4(&VAR_2->io_pending_link));
 FUNC_2(VAR_1, "backend_link", "%d", FUNC_4(&VAR_2->link));

 if (VAR_2->hio) {
  FUNC_2(VAR_1, "hw_tag", "%#x", VAR_2->hio->reqtag);
  FUNC_2(VAR_1, "hw_xri", "%#x", VAR_2->hio->indicator);
  FUNC_2(VAR_1, "hw_type", "%#x", VAR_2->hio->type);
 } else {
  FUNC_2(VAR_1, "hw_tag", "%s", "pending");
  FUNC_2(VAR_1, "hw_xri", "%s", "pending");
  FUNC_2(VAR_1, "hw_type", "%s", "pending");
 }

 FUNC_6(VAR_1, VAR_0, VAR_2);
 FUNC_7(VAR_1, VAR_0, VAR_2);

 FUNC_0(VAR_1, "io", VAR_2->instance_index);
}
