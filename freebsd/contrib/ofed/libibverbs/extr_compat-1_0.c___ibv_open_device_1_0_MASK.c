
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_device_1_0 {int real_device; } ;
struct TYPE_2__ {int post_srq_recv; int post_recv; int post_send; int req_notify_cq; int poll_cq; } ;
struct ibv_context_1_0 {TYPE_1__ ops; struct ibv_context* real_context; struct ibv_device_1_0* device; } ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (struct ibv_context_1_0*) ;
 struct ibv_context* FUNC_1 (int ) ;
 struct ibv_context_1_0* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct ibv_context_1_0 *FUNC_3(struct ibv_device_1_0 *VAR_5)
{
 struct ibv_context *VAR_6;
 struct ibv_context_1_0 *VAR_7;

 VAR_7 = FUNC_2(sizeof *VAR_7);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_5->real_device);
 if (!VAR_6) {
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_7->device = VAR_5;
 VAR_7->real_context = VAR_6;

 VAR_7->ops.poll_cq = VAR_0;
 VAR_7->ops.req_notify_cq = VAR_4;
 VAR_7->ops.post_send = VAR_2;
 VAR_7->ops.post_recv = VAR_1;
 VAR_7->ops.post_srq_recv = VAR_3;

 return VAR_7;
}
