
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
union event_ring_elem {TYPE_1__ message; } ;
struct TYPE_5__ {int lock; } ;
struct ecore_raw_obj {int (* clear_pending ) (struct ecore_raw_obj*) ;} ;
struct ecore_vlan_mac_obj {TYPE_2__ exe_queue; struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,unsigned long*) ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*,TYPE_2__*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ecore_raw_obj*) ;

__attribute__((used)) static int FUNC_7(struct bxe_softc *VAR_4,
       struct ecore_vlan_mac_obj *VAR_5,
       union event_ring_elem *VAR_6,
       unsigned long *VAR_7)
{
 struct ecore_raw_obj *VAR_8 = &VAR_5->raw;
 int VAR_9;




 FUNC_0(&VAR_5->exe_queue.lock);


 FUNC_3(VAR_4, &VAR_5->exe_queue);


 VAR_8->clear_pending(VAR_8);

 FUNC_1(&VAR_5->exe_queue.lock);


 if (VAR_6->message.error)
  return VAR_0;


 if (FUNC_2(VAR_3, VAR_7)) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
 }


 if (!FUNC_5(&VAR_5->exe_queue))
  return VAR_1;

 return VAR_2;
}
