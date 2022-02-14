
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sflow_ethernet_counter_t {int symbol_errors; int mac_receive_errors; int frame_too_longs; int carrier_sense_errors; int mac_transmit_errors; int excessive_collisions; int late_collisions; int deferred_transmissions; int test_errors; int multiple_collision_frames; int single_collision_frames; int fcserrors; int alignerrors; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sflow_ethernet_counter_t const) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
                             const u_char *VAR_1, u_int VAR_2)
{
    const struct sflow_ethernet_counter_t *VAR_3;

    if (VAR_2 < sizeof(struct sflow_ethernet_counter_t))
 return 1;

    VAR_3 = (const struct sflow_ethernet_counter_t *)VAR_1;
    FUNC_2(*VAR_3);
    FUNC_1((VAR_0, "\n\t      align errors %u, fcs errors %u, single collision %u, multiple collision %u, test error %u",
    FUNC_0(VAR_3->alignerrors),
    FUNC_0(VAR_3->fcserrors),
    FUNC_0(VAR_3->single_collision_frames),
    FUNC_0(VAR_3->multiple_collision_frames),
    FUNC_0(VAR_3->test_errors)));
    FUNC_1((VAR_0, "\n\t      deferred %u, late collision %u, excessive collision %u, mac trans error %u",
    FUNC_0(VAR_3->deferred_transmissions),
    FUNC_0(VAR_3->late_collisions),
    FUNC_0(VAR_3->excessive_collisions),
    FUNC_0(VAR_3->mac_transmit_errors)));
    FUNC_1((VAR_0, "\n\t      carrier error %u, frames too long %u, mac receive errors %u, symbol errors %u",
    FUNC_0(VAR_3->carrier_sense_errors),
    FUNC_0(VAR_3->frame_too_longs),
    FUNC_0(VAR_3->mac_receive_errors),
    FUNC_0(VAR_3->symbol_errors)));

    return 0;

trunc:
    return 1;
}
