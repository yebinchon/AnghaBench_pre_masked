
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_2__ {int xfer_req; int exp_xfer_len; int auto_resp; int transferred; int tag; int hw_tag; int tgt_task_tag; int init_task_tag; int display_name; } ;
typedef TYPE_1__ ocs_io_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *,int ,char*,char*,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;

void
FUNC_3(ocs_textbuf_t *VAR_1, void *VAR_2)
{
 ocs_io_t *VAR_3 = (ocs_io_t *) VAR_2;

 FUNC_2(VAR_1, VAR_0, "display_name", VAR_3->display_name);
 FUNC_1(VAR_1, VAR_0, "init_task_tag", "0x%x", VAR_3->init_task_tag);
 FUNC_1(VAR_1, VAR_0, "tgt_task_tag", "0x%x", VAR_3->tgt_task_tag);
 FUNC_1(VAR_1, VAR_0, "hw_tag", "0x%x", VAR_3->hw_tag);
 FUNC_1(VAR_1, VAR_0, "tag", "0x%x", VAR_3->tag);
 FUNC_1(VAR_1, VAR_0, "transferred", "%zu", VAR_3->transferred);
 FUNC_0(VAR_1, VAR_0, "auto_resp", VAR_3->auto_resp);
 FUNC_1(VAR_1, VAR_0, "exp_xfer_len", "%d", VAR_3->exp_xfer_len);
 FUNC_1(VAR_1, VAR_0, "xfer_req", "%d", VAR_3->xfer_req);

}
