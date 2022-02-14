
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int ifname; int connected; } ;
union fst_event_extra {TYPE_1__ peer_state; } ;
typedef int u8 ;
struct fst_iface {int dummy; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct fst_iface*,int *,union fst_event_extra*) ;
 int FUNC_1 (struct fst_iface*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct fst_iface *VAR_3,
          Boolean VAR_4,
          const u8 *VAR_5)
{
 union fst_event_extra VAR_6;

 VAR_6.peer_state.connected = VAR_4;
 FUNC_3(VAR_6.peer_state.ifname, FUNC_1(VAR_3),
     sizeof(VAR_6.peer_state.ifname));
 FUNC_2(VAR_6.peer_state.addr, VAR_5, VAR_0);

 FUNC_0(VAR_2, VAR_1,
         VAR_3, ((void*)0), &VAR_6);
}
