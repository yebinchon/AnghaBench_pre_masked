
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xen_intr_handle_t ;
struct notify_data {int action; int * notify_evtchn_handle; int index; int event_channel_port; } ;
struct ioctl_gntdev_unmap_notify {int action; int index; int event_channel_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static int
FUNC_2(struct notify_data *VAR_2,
    struct ioctl_gntdev_unmap_notify *VAR_3)
{
 xen_intr_handle_t VAR_4 = ((void*)0);





 if (VAR_3->action & VAR_1)
  if (FUNC_0(VAR_3->event_channel_port,
      &VAR_4) != 0)
   return (VAR_0);

 if (VAR_2->action & VAR_1)
  FUNC_1(&VAR_2->notify_evtchn_handle);

 VAR_2->action = VAR_3->action;
 VAR_2->event_channel_port = VAR_3->event_channel_port;
 VAR_2->index = VAR_3->index;
 VAR_2->notify_evtchn_handle = VAR_4;

 return (0);
}
