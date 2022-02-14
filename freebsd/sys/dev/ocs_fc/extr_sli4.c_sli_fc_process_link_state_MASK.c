
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int link_arg; int (* link ) (int ,void*) ;int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_6__ {scalar_t__ link_type; int port_link_status; int port_speed; } ;
typedef TYPE_2__ sli4_link_state_t ;
struct TYPE_7__ {int speed; int status; int medium; int topology; int member_0; } ;
typedef TYPE_3__ sli4_link_event_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,void*) ;

int32_t
FUNC_2(sli4_t *VAR_8, void *VAR_9)
{
 sli4_link_state_t *VAR_10 = VAR_9;
 sli4_link_event_t VAR_11 = { 0 };
 int32_t VAR_12 = 0;

 if (!VAR_8->link) {

  return 0;
 }

 if (VAR_0 == VAR_10->link_type) {
  VAR_11.topology = VAR_7;
  VAR_11.medium = VAR_1;
 } else {

  FUNC_0(VAR_8->os, "unsupported link type %#x\n",
    VAR_10->link_type);
  VAR_11.topology = VAR_6;
  VAR_11.medium = VAR_2;
  VAR_12 = -1;
 }

 switch (VAR_10->port_link_status) {
 case 129:
 case 131:
  VAR_11.status = VAR_3;
  break;
 case 128:
 case 130:
  VAR_11.status = VAR_5;
  break;
 default:
  FUNC_0(VAR_8->os, "unsupported link status %#x\n",
    VAR_10->port_link_status);
  VAR_11.status = VAR_4;
  VAR_12 = -1;
 }

 switch (VAR_10->port_speed) {
 case 0:
  VAR_11.speed = 0;
  break;
 case 1:
  VAR_11.speed = 10;
  break;
 case 2:
  VAR_11.speed = 100;
  break;
 case 3:
  VAR_11.speed = 1000;
  break;
 case 4:
  VAR_11.speed = 10000;
  break;
 case 5:
  VAR_11.speed = 20000;
  break;
 case 6:
  VAR_11.speed = 25000;
  break;
 case 7:
  VAR_11.speed = 40000;
  break;
 case 8:
  VAR_11.speed = 100000;
  break;
 default:
  FUNC_0(VAR_8->os, "unsupported port_speed %#x\n",
    VAR_10->port_speed);
  VAR_12 = -1;
 }

 VAR_8->link(VAR_8->link_arg, (void *)&VAR_11);

 return VAR_12;
}
