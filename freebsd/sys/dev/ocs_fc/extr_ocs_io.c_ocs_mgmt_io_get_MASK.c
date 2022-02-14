
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qualifier ;
typedef int ocs_textbuf_t ;
struct TYPE_2__ {int instance_index; int xfer_req; int exp_xfer_len; int auto_resp; int transferred; int tag; int hw_tag; int tgt_task_tag; int init_task_tag; int display_name; } ;
typedef TYPE_1__ ocs_io_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *,int ,char*,char*,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(ocs_textbuf_t *VAR_1, char *VAR_2, char *VAR_3, void *VAR_4)
{
 char VAR_5[80];
 int VAR_6 = -1;
 ocs_io_t *VAR_7 = (ocs_io_t *) VAR_4;

 FUNC_5(VAR_5, sizeof(VAR_5), "%s/io[%d]", VAR_2, VAR_7->instance_index);


 if (FUNC_4(VAR_3, VAR_5, FUNC_6(VAR_5)) == 0) {
  char *VAR_8 = VAR_3 + FUNC_6(VAR_5) +1;


  if (FUNC_3(VAR_8, "display_name") == 0) {
   FUNC_2(VAR_1, VAR_0, "display_name", VAR_7->display_name);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "init_task_tag") == 0) {
   FUNC_1(VAR_1, VAR_0, "init_task_tag", "0x%x", VAR_7->init_task_tag);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "tgt_task_tag") == 0) {
   FUNC_1(VAR_1, VAR_0, "tgt_task_tag", "0x%x", VAR_7->tgt_task_tag);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "hw_tag") == 0) {
   FUNC_1(VAR_1, VAR_0, "hw_tag", "0x%x", VAR_7->hw_tag);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "tag") == 0) {
   FUNC_1(VAR_1, VAR_0, "tag", "0x%x", VAR_7->tag);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "transferred") == 0) {
   FUNC_1(VAR_1, VAR_0, "transferred", "%zu", VAR_7->transferred);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "auto_resp") == 0) {
   FUNC_0(VAR_1, VAR_0, "auto_resp", VAR_7->auto_resp);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "exp_xfer_len") == 0) {
   FUNC_1(VAR_1, VAR_0, "exp_xfer_len", "%d", VAR_7->exp_xfer_len);
   VAR_6 = 0;
  } else if (FUNC_3(VAR_8, "xfer_req") == 0) {
   FUNC_1(VAR_1, VAR_0, "xfer_req", "%d", VAR_7->xfer_req);
   VAR_6 = 0;
  }
 }

 return VAR_6;
}
