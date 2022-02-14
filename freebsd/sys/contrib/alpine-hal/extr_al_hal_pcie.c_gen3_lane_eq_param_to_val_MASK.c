
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct al_pcie_gen3_lane_eq_params {int downstream_port_transmitter_preset; int downstream_port_receiver_preset_hint; int upstream_port_transmitter_preset; int upstream_port_receiver_preset_hint; } ;



__attribute__((used)) static uint16_t
FUNC_0(const struct al_pcie_gen3_lane_eq_params *VAR_0)
{
 uint16_t VAR_1 = 0;

 VAR_1 = VAR_0->downstream_port_transmitter_preset & 0xF;
 VAR_1 |= (VAR_0->downstream_port_receiver_preset_hint & 0x7) << 4;
 VAR_1 |= (VAR_0->upstream_port_transmitter_preset & 0xF) << 8;
 VAR_1 |= (VAR_0->upstream_port_receiver_preset_hint & 0x7) << 12;

 return VAR_1;
}
