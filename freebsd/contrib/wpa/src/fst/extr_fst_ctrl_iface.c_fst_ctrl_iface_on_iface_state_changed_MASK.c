
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int group_id; int ifname; int attached; } ;
union fst_event_extra {TYPE_1__ iface_state; } ;
struct fst_iface {int dummy; } ;
typedef int extra ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fst_iface*,int ,int ,union fst_event_extra*) ;
 int FUNC_1 (struct fst_iface*) ;
 int FUNC_2 (struct fst_iface*) ;
 int FUNC_3 (union fst_event_extra*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct fst_iface *VAR_2,
        Boolean VAR_3)
{
 union fst_event_extra VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.iface_state.attached = VAR_3;
 FUNC_4(VAR_4.iface_state.ifname, FUNC_2(VAR_2),
     sizeof(VAR_4.iface_state.ifname));
 FUNC_4(VAR_4.iface_state.group_id, FUNC_1(VAR_2),
     sizeof(VAR_4.iface_state.group_id));

 FUNC_0(VAR_2, VAR_1,
         VAR_0, &VAR_4);
}
