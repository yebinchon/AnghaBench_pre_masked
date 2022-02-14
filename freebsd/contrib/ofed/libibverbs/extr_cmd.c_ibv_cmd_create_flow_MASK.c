
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ibv_qp {TYPE_4__* context; int handle; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct ibv_kern_spec {TYPE_1__ hdr; } ;
struct TYPE_6__ {int size; } ;
struct ibv_flow_spec {TYPE_2__ hdr; } ;
struct ibv_flow_attr {int num_of_specs; int flags; int port; int priority; int type; } ;
struct ibv_flow {int handle; TYPE_4__* context; } ;
struct ibv_create_flow_resp {int flow_handle; } ;
struct TYPE_7__ {int num_of_specs; int size; int flags; int port; int priority; int type; } ;
struct ibv_create_flow {TYPE_3__ flow_attr; int qp_handle; } ;
typedef int resp ;
struct TYPE_8__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_flow*,size_t,size_t,int ,struct ibv_create_flow_resp*,int) ;
 int FUNC_1 (struct ibv_create_flow_resp*,int) ;
 struct ibv_create_flow* FUNC_2 (size_t) ;
 int VAR_1 ;
 int FUNC_3 (struct ibv_flow*) ;
 int FUNC_4 (void*,void*) ;
 struct ibv_flow* FUNC_5 (int) ;
 int FUNC_6 (struct ibv_create_flow*,int ,size_t) ;
 size_t FUNC_7 (int ,struct ibv_create_flow*,size_t) ;

struct ibv_flow *FUNC_8(struct ibv_qp *VAR_2,
         struct ibv_flow_attr *VAR_3)
{
 struct ibv_create_flow *VAR_4;
 struct ibv_create_flow_resp VAR_5;
 struct ibv_flow *VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;
 void *VAR_12;

 VAR_7 = sizeof(*VAR_4) + (VAR_3->num_of_specs *
      sizeof(struct ibv_kern_spec));
 VAR_4 = FUNC_2(VAR_7);
 VAR_6 = FUNC_5(sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);
 FUNC_6(VAR_4, 0, VAR_7);

 VAR_4->qp_handle = VAR_2->handle;

 VAR_4->flow_attr.type = VAR_3->type;
 VAR_4->flow_attr.priority = VAR_3->priority;
 VAR_4->flow_attr.num_of_specs = VAR_3->num_of_specs;
 VAR_4->flow_attr.port = VAR_3->port;
 VAR_4->flow_attr.flags = VAR_3->flags;

 VAR_11 = VAR_4 + 1;
 VAR_12 = VAR_3 + 1;
 for (VAR_9 = 0; VAR_9 < VAR_3->num_of_specs; VAR_9++) {
  VAR_10 = FUNC_4(VAR_12, VAR_11);
  if (VAR_10) {
   VAR_1 = VAR_10;
   goto err;
  }
  VAR_4->flow_attr.size +=
   ((struct ibv_kern_spec *)VAR_11)->hdr.size;
  VAR_11 += ((struct ibv_kern_spec *)VAR_11)->hdr.size;
  VAR_12 += ((struct ibv_flow_spec *)VAR_12)->hdr.size;
 }

 VAR_8 = sizeof(*VAR_4) + VAR_4->flow_attr.size;
 FUNC_0(VAR_4, VAR_8, VAR_8, VAR_0,
      &VAR_5, sizeof(VAR_5));
 if (FUNC_7(VAR_2->context->cmd_fd, VAR_4, VAR_8) != VAR_8)
  goto err;

 (void) FUNC_1(&VAR_5, sizeof(VAR_5));

 VAR_6->context = VAR_2->context;
 VAR_6->handle = VAR_5.flow_handle;
 return VAR_6;
err:
 FUNC_3(VAR_6);
 return ((void*)0);
}
