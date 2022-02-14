
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_cm_id {TYPE_2__* verbs; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int transport_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;

int FUNC_3(struct rdma_cm_id *VAR_1)
{
 switch (VAR_1->verbs->device->transport_type) {
 case 129:
  return FUNC_1(VAR_1);
 case 128:
  return FUNC_2(VAR_1);
 default:
  return FUNC_0(VAR_0);
 }
}
