
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advertisement_state_machine {scalar_t__ state; int type; } ;
struct upnp_wps_device_sm {struct advertisement_state_machine advertisement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct upnp_wps_device_sm*,int ) ;
 int FUNC_1 (int ,int,int ,int *,struct upnp_wps_device_sm*) ;
 int FUNC_2 () ;

int FUNC_3(struct upnp_wps_device_sm *VAR_2)
{
 struct advertisement_state_machine *VAR_3 = &VAR_2->advertisement;
 int VAR_4;

 FUNC_0(VAR_2, 0);





 VAR_3->type = VAR_0;
 VAR_3->state = 0;



 VAR_4 = (100 * (FUNC_2() & 0xFF)) >> 8;
 return FUNC_1(0, VAR_4,
          VAR_1,
          ((void*)0), VAR_2);
}
