
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_4__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_6__ {TYPE_2__ app_sc; TYPE_1__ daemon_sc; int req_free_list; } ;
typedef TYPE_3__ hv_vss_sc ;
typedef int hv_vss_req_internal ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 hv_vss_sc *VAR_4 = (hv_vss_sc*)FUNC_6(VAR_3);
 hv_vss_req_internal* VAR_5;

 while (!FUNC_0(&VAR_4->req_free_list)) {
  VAR_5 = FUNC_1(&VAR_4->req_free_list);
  FUNC_2(VAR_5, VAR_1);
  FUNC_7(VAR_5, VAR_0);
 }

 while (!FUNC_3(&VAR_4->daemon_sc.to_notify_queue)) {
  VAR_5 = FUNC_4(&VAR_4->daemon_sc.to_notify_queue);
  FUNC_5(&VAR_4->daemon_sc.to_notify_queue, VAR_2);
  FUNC_7(VAR_5, VAR_0);
 }

 while (!FUNC_3(&VAR_4->daemon_sc.to_ack_queue)) {
  VAR_5 = FUNC_4(&VAR_4->daemon_sc.to_ack_queue);
  FUNC_5(&VAR_4->daemon_sc.to_ack_queue, VAR_2);
  FUNC_7(VAR_5, VAR_0);
 }

 while (!FUNC_3(&VAR_4->app_sc.to_notify_queue)) {
  VAR_5 = FUNC_4(&VAR_4->app_sc.to_notify_queue);
  FUNC_5(&VAR_4->app_sc.to_notify_queue, VAR_2);
  FUNC_7(VAR_5, VAR_0);
 }

 while (!FUNC_3(&VAR_4->app_sc.to_ack_queue)) {
  VAR_5 = FUNC_4(&VAR_4->app_sc.to_ack_queue);
  FUNC_5(&VAR_4->app_sc.to_ack_queue, VAR_2);
  FUNC_7(VAR_5, VAR_0);
 }
 return (0);
}
