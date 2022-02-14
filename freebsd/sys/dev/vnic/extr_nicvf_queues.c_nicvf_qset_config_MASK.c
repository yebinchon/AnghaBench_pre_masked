
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cfg; int num; int msg; } ;
union nic_mbx {TYPE_1__ qs; } ;
struct queue_set {int vnic_id; scalar_t__ enable; } ;
struct qs_cfg {int ena; int vnic; } ;
struct nicvf {int vf_id; int dev; struct queue_set* qs; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

void
FUNC_2(struct nicvf *VAR_1, boolean_t VAR_2)
{
 union nic_mbx VAR_3 = {};
 struct queue_set *VAR_4;
 struct qs_cfg *VAR_5;

 VAR_4 = VAR_1->qs;
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_1->dev,
      "Qset is still not allocated, don't init queues\n");
  return;
 }

 VAR_4->enable = VAR_2;
 VAR_4->vnic_id = VAR_1->vf_id;


 VAR_3.qs.msg = VAR_0;
 VAR_3.qs.num = VAR_4->vnic_id;

 VAR_3.qs.cfg = 0;
 VAR_5 = (struct qs_cfg *)&VAR_3.qs.cfg;
 if (VAR_4->enable) {
  VAR_5->ena = 1;
  VAR_5->vnic = VAR_4->vnic_id;
 }
 FUNC_1(VAR_1, &VAR_3);
}
