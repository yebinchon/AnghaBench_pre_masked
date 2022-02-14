
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct link_status {scalar_t__ logical_link_status; scalar_t__ qos_link_speed; int phys_port_speed; int member_0; } ;
struct TYPE_9__ {int qos_link_speed; TYPE_1__** eq; int mq; int link_speed; int ifp; scalar_t__ link_status; } ;
struct TYPE_8__ {int eq_id; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct link_status*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(POCE_SOFTC VAR_6)
{
 struct link_status VAR_7 = { 0 };
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_6, &VAR_7);
 if (VAR_8)
  return 1;

 if (VAR_7.logical_link_status == VAR_4) {
  VAR_6->link_status = VAR_4;
  FUNC_0(VAR_6->ifp, VAR_2);
 } else {
  VAR_6->link_status = VAR_3;
  FUNC_0(VAR_6->ifp, VAR_1);
 }

 VAR_6->link_speed = VAR_7.phys_port_speed;
 VAR_6->qos_link_speed = (uint32_t )VAR_7.qos_link_speed * 10;

 VAR_8 = FUNC_5(VAR_6->mq);




 FUNC_4(VAR_6);
 FUNC_1(VAR_6, VAR_6->eq[0]->eq_id, 0, VAR_5, VAR_0);




 FUNC_2(VAR_6);

 return VAR_8;
}
