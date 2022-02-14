
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct hv_vss_req_internal {int dummy; } ;
struct TYPE_5__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_6__ {int to_ack_queue; int to_notify_queue; } ;
struct TYPE_7__ {TYPE_1__ app_sc; TYPE_2__ daemon_sc; } ;
typedef TYPE_3__ hv_vss_sc ;


 int FUNC_0 (struct hv_vss_req_internal*,int *,int ,struct hv_vss_req_internal*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct hv_vss_req_internal*
FUNC_1(hv_vss_sc *VAR_1, uint64_t VAR_2)
{
 struct hv_vss_req_internal *VAR_3, *VAR_4;
 FUNC_0(VAR_3, &VAR_1->daemon_sc.to_notify_queue,
     VAR_0, VAR_4, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_3, &VAR_1->daemon_sc.to_ack_queue,
      VAR_0, VAR_4, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_3, &VAR_1->app_sc.to_notify_queue,
      VAR_0, VAR_4, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_3, &VAR_1->app_sc.to_ack_queue, VAR_0,
      VAR_4, VAR_2);
 return (VAR_3);
}
