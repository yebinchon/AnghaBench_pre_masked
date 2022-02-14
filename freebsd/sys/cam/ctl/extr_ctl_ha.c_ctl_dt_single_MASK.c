
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wire_dt ;
struct ha_softc {int ha_lock; int ha_dts; } ;
struct ha_dt_msg_wire {scalar_t__ command; int remote; int local; int size; } ;
struct ctl_ha_dt_req {scalar_t__ command; int size; int local; int * callback; int remote; } ;
typedef int ctl_ha_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ctl_ha_dt_req*,int ) ;
 int FUNC_1 (int ,struct ha_dt_msg_wire*,int,int ) ;
 int FUNC_2 (int ,struct ha_dt_msg_wire*,int,int ,int ,int ) ;
 struct ha_softc VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

ctl_ha_status
FUNC_5(struct ctl_ha_dt_req *VAR_6)
{
 struct ha_softc *VAR_7 = &VAR_4;
 struct ha_dt_msg_wire VAR_8;
 ctl_ha_status VAR_9;

 VAR_8.command = VAR_6->command;
 VAR_8.size = VAR_6->size;
 VAR_8.local = VAR_6->local;
 VAR_8.remote = VAR_6->remote;
 if (VAR_6->command == VAR_1 && VAR_6->callback != ((void*)0)) {
  FUNC_3(&VAR_7->ha_lock);
  FUNC_0(&VAR_7->ha_dts, VAR_6, VAR_5);
  FUNC_4(&VAR_7->ha_lock);
  FUNC_1(VAR_0, &VAR_8, sizeof(VAR_8),
      VAR_3);
  return (VAR_2);
 }
 if (VAR_6->command == VAR_1) {
  VAR_9 = FUNC_1(VAR_0, &VAR_8,
      sizeof(VAR_8), VAR_3);
 } else {
  VAR_9 = FUNC_2(VAR_0, &VAR_8,
      sizeof(VAR_8), VAR_6->local, VAR_6->size, VAR_3);
 }
 return (VAR_9);
}
