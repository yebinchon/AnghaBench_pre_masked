
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_kern_async_event {int element; int event_type; } ;
struct TYPE_4__ {int (* async_event ) (struct ibv_async_event*) ;} ;
struct ibv_context {TYPE_2__ ops; int async_fd; } ;
struct TYPE_3__ {int port_num; void* wq; void* srq; void* qp; void* cq; } ;
struct ibv_async_event {TYPE_1__ element; int event_type; } ;
 int FUNC_0 (int ,struct ibv_kern_async_event*,int) ;
 int FUNC_1 (struct ibv_async_event*) ;

int FUNC_2(struct ibv_context *VAR_0,
     struct ibv_async_event *VAR_1)
{
 struct ibv_kern_async_event VAR_2;

 if (FUNC_0(VAR_0->async_fd, &VAR_2, sizeof VAR_2) != sizeof VAR_2)
  return -1;

 VAR_1->event_type = VAR_2.event_type;

 switch (VAR_1->event_type) {
 case 138:
  VAR_1->element.cq = (void *) (uintptr_t) VAR_2.element;
  break;

 case 134:
 case 132:
 case 135:
 case 139:
 case 131:
 case 137:
 case 136:
 case 133:
  VAR_1->element.qp = (void *) (uintptr_t) VAR_2.element;
  break;

 case 130:
 case 129:
  VAR_1->element.srq = (void *) (uintptr_t) VAR_2.element;
  break;

 case 128:
  VAR_1->element.wq = (void *) (uintptr_t) VAR_2.element;
  break;
 default:
  VAR_1->element.port_num = VAR_2.element;
  break;
 }

 if (VAR_0->ops.async_event)
  VAR_0->ops.async_event(VAR_1);

 return 0;
}
