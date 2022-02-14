
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_pin_cfg {scalar_t__ line_out_type; int const* speaker_pins; int const* line_out_pins; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline const hda_nid_t *FUNC_0(const struct auto_pin_cfg *VAR_1)
{
 return (VAR_1->line_out_type == VAR_0) ?
        VAR_1->line_out_pins : VAR_1->speaker_pins;
}
