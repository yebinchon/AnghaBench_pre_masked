
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hv_vss_req_internal {int callout; } ;
struct TYPE_5__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_4__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_6__ {int pending_mutex; int req_free_list; TYPE_2__ app_sc; TYPE_1__ daemon_sc; } ;
typedef TYPE_3__ hv_vss_sc ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct hv_vss_req_internal*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 struct hv_vss_req_internal* FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 hv_vss_sc *VAR_5 = (hv_vss_sc*)FUNC_4(VAR_4);
 int VAR_6;
 const int VAR_7 = 4;
 struct hv_vss_req_internal* VAR_8;

 FUNC_0(&VAR_5->req_free_list);
 FUNC_2(&VAR_5->daemon_sc.to_notify_queue);
 FUNC_2(&VAR_5->daemon_sc.to_ack_queue);
 FUNC_2(&VAR_5->app_sc.to_notify_queue);
 FUNC_2(&VAR_5->app_sc.to_ack_queue);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_8 = FUNC_5(sizeof(struct hv_vss_req_internal),
      VAR_0, VAR_1|VAR_2);
  FUNC_1(&VAR_5->req_free_list, VAR_8, VAR_3);
  FUNC_3(&VAR_8->callout, &VAR_5->pending_mutex, 0);
 }
 return (0);
}
