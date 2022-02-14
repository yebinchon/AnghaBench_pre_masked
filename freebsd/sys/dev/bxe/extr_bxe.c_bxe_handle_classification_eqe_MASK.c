
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t echo; } ;
struct TYPE_7__ {TYPE_2__ eth_event; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
union event_ring_elem {TYPE_4__ message; } ;
typedef size_t uint32_t ;
struct ecore_vlan_mac_obj {int (* complete ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,union event_ring_elem*,unsigned long*) ;} ;
struct bxe_softc {TYPE_1__* sp_objs; } ;
struct TYPE_5__ {struct ecore_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_2 (unsigned long*,int ) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_vlan_mac_obj*,union event_ring_elem*,unsigned long*) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_4,
                              union event_ring_elem *VAR_5)
{
    unsigned long VAR_6 = 0;
    int VAR_7 = 0;
    uint32_t VAR_8 = VAR_5->message.data.eth_event.echo & VAR_0;
    struct ecore_vlan_mac_obj *VAR_9;


    FUNC_2(&VAR_6, VAR_3);

    switch (FUNC_4(VAR_5->message.data.eth_event.echo) >> VAR_1) {
    case 129:
        FUNC_0(VAR_4, VAR_2, "Got SETUP_MAC completions\n");
        VAR_9 = &VAR_4->sp_objs[VAR_8].mac_obj;
        break;

    case 128:
        FUNC_0(VAR_4, VAR_2, "Got SETUP_MCAST completions\n");




        FUNC_3(VAR_4);
        return;

    default:
        FUNC_1(VAR_4, "Unsupported classification command: %d\n",
              VAR_5->message.data.eth_event.echo);
        return;
    }

    VAR_7 = VAR_9->complete(VAR_4, VAR_9, VAR_5, &VAR_6);

    if (VAR_7 < 0) {
        FUNC_1(VAR_4, "Failed to schedule new commands (%d)\n", VAR_7);
    } else if (VAR_7 > 0) {
        FUNC_0(VAR_4, VAR_2, "Scheduled next pending commands...\n");
    }
}
