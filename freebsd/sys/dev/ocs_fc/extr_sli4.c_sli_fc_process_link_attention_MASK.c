
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int link_arg; int (* link ) (int ,void*) ;int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_6__ {int speed; int topology; int status; int medium; int member_0; } ;
typedef TYPE_2__ sli4_link_event_t ;
struct TYPE_7__ {int attn_type; int topology; int port_speed; int event_type; int event_tag; int logical_link_speed; int shared_link_status; int port_fault; int link_number; } ;
typedef TYPE_3__ sli4_link_attention_t ;
typedef int int32_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,void*) ;

int32_t
FUNC_3(sli4_t *VAR_8, void *VAR_9)
{
 sli4_link_attention_t *VAR_10 = VAR_9;
 sli4_link_event_t VAR_11 = { 0 };

 FUNC_0(VAR_8->os, "link_number=%d attn_type=%#x topology=%#x port_speed=%#x "
   "port_fault=%#x shared_link_status=%#x logical_link_speed=%#x "
   "event_tag=%#x\n", VAR_10->link_number, VAR_10->attn_type,
   VAR_10->topology, VAR_10->port_speed, VAR_10->port_fault,
   VAR_10->shared_link_status, VAR_10->logical_link_speed,
   VAR_10->event_tag);

 if (!VAR_8->link) {
  return 0;
 }

 VAR_11.medium = VAR_0;

 switch (VAR_10->attn_type) {
 case 129:
  VAR_11.status = VAR_3;
  break;
 case 130:
  VAR_11.status = VAR_1;
  break;
 case 128:
  FUNC_0(VAR_8->os, "attn_type: no hard alpa\n");
  VAR_11.status = VAR_2;
  break;
 default:
  FUNC_1(VAR_8->os, "attn_type: unknown\n");
  break;
 }

 switch (VAR_10->event_type) {
 case 136:
  break;
 case 135:
  FUNC_0(VAR_8->os, "event_type: FC shared link event \n");
  break;
 default:
  FUNC_1(VAR_8->os, "event_type: unknown\n");
  break;
 }

 switch (VAR_10->topology) {
 case 132:
  VAR_11.topology = VAR_7;
  break;
 case 134:
  VAR_11.topology = VAR_4;
  break;
 case 133:
  FUNC_0(VAR_8->os, "topology Internal loopback\n");
  VAR_11.topology = VAR_6;
  break;
 case 131:
  FUNC_0(VAR_8->os, "topology serdes loopback\n");
  VAR_11.topology = VAR_5;
  break;
 default:
  FUNC_1(VAR_8->os, "topology: unknown\n");
  break;
 }

 VAR_11.speed = VAR_10->port_speed * 1000;

 VAR_8->link(VAR_8->link_arg, (void *)&VAR_11);

 return 0;
}
