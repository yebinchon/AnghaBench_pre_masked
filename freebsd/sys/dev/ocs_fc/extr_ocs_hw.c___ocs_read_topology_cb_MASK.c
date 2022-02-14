
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int link_speed; } ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_13__ {int attention_type; int topology; TYPE_3__ link_current; int acquired_al_pa; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_cmd_read_topology_t ;
struct TYPE_12__ {int speed; int * loop_map; int medium; int topology; int fc_id; int status; } ;
struct TYPE_10__ {int * virt; } ;
struct TYPE_14__ {int os; TYPE_4__ link; TYPE_2__ loop_map; } ;
typedef TYPE_6__ ocs_hw_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_10, int32_t VAR_11, uint8_t *VAR_12, void *VAR_13)
{
 sli4_cmd_read_topology_t *VAR_14 = (sli4_cmd_read_topology_t *)VAR_12;

 if (VAR_11 || VAR_14->hdr.status) {
  FUNC_2(VAR_10->os, "bad status cqe=%#x mqe=%#x\n",
    VAR_11, VAR_14->hdr.status);
  FUNC_0(VAR_10->os, VAR_12, VAR_0);
  return -1;
 }

 switch (VAR_14->attention_type) {
 case 135:
  VAR_10->link.status = VAR_6;
  break;
 case 137:
  VAR_10->link.status = VAR_3;
  break;
 case 136:
  VAR_10->link.status = VAR_5;
  break;
 default:
  VAR_10->link.status = VAR_4;
  break;
 }

 switch (VAR_14->topology) {
 case 134:
  VAR_10->link.topology = VAR_9;
  break;
 case 138:
  VAR_10->link.topology = VAR_7;
  if (VAR_6 == VAR_10->link.status) {
   VAR_10->link.loop_map = VAR_10->loop_map.virt;
  }
  VAR_10->link.fc_id = VAR_14->acquired_al_pa;
  break;
 default:
  VAR_10->link.topology = VAR_8;
  break;
 }

 VAR_10->link.medium = VAR_2;

 switch (VAR_14->link_current.link_speed) {
 case 132:
  VAR_10->link.speed = 1 * 1000;
  break;
 case 131:
  VAR_10->link.speed = 2 * 1000;
  break;
 case 129:
  VAR_10->link.speed = 4 * 1000;
  break;
 case 128:
  VAR_10->link.speed = 8 * 1000;
  break;
 case 133:
  VAR_10->link.speed = 16 * 1000;
  VAR_10->link.loop_map = ((void*)0);
  break;
 case 130:
  VAR_10->link.speed = 32 * 1000;
  VAR_10->link.loop_map = ((void*)0);
  break;
 }

 FUNC_0(VAR_10->os, VAR_12, VAR_0);

 FUNC_1(VAR_10, VAR_1);

 return 0;
}
