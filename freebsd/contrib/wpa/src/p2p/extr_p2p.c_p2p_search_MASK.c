
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct p2p_data {scalar_t__ find_type; int find_specified_freq; int find_dev_id; int req_dev_types; int num_req_dev_types; TYPE_1__* cfg; scalar_t__ find_pending_full; scalar_t__ drv_in_listen; } ;
typedef enum p2p_scan_type { ____Placeholder_p2p_scan_type } p2p_scan_type ;
struct TYPE_2__ {int (* p2p_scan ) (int ,int,int,int ,int ,int ,int ) ;int cb_ctx; int (* stop_listen ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct p2p_data*) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 int FUNC_2 (struct p2p_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct p2p_data *VAR_6)
{
 int VAR_7 = 0;
 enum p2p_scan_type VAR_8;
 u16 VAR_9 = VAR_0;
 int VAR_10;

 if (VAR_6->drv_in_listen) {
  FUNC_1(VAR_6, "Driver is still in Listen state - wait for it to end before continuing");
  return;
 }
 VAR_6->cfg->stop_listen(VAR_6->cfg->cb_ctx);

 if (VAR_6->find_pending_full &&
     (VAR_6->find_type == VAR_1 ||
      VAR_6->find_type == VAR_2)) {
  VAR_8 = VAR_3;
  FUNC_1(VAR_6, "Starting search (pending full scan)");
  VAR_6->find_pending_full = 0;
 } else if ((VAR_6->find_type == VAR_1 &&
     (VAR_7 = FUNC_2(VAR_6)) > 0) ||
     (VAR_6->find_type == VAR_2 &&
      (VAR_7 = VAR_6->find_specified_freq) > 0)) {
  VAR_8 = VAR_5;
  FUNC_1(VAR_6, "Starting search (+ freq %u)", VAR_7);
 } else {
  VAR_8 = VAR_4;
  FUNC_1(VAR_6, "Starting search");
 }

 VAR_10 = VAR_6->cfg->p2p_scan(VAR_6->cfg->cb_ctx, VAR_8, VAR_7,
     VAR_6->num_req_dev_types, VAR_6->req_dev_types,
     VAR_6->find_dev_id, VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Scan request schedule failed");
  FUNC_0(VAR_6);
 }
}
