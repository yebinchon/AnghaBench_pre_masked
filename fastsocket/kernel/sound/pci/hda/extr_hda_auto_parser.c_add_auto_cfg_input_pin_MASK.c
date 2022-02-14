
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {size_t num_inputs; TYPE_1__* inputs; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int type; int pin; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct auto_pin_cfg *VAR_1, hda_nid_t VAR_2,
       int VAR_3)
{
 if (VAR_1->num_inputs < VAR_0) {
  VAR_1->inputs[VAR_1->num_inputs].pin = VAR_2;
  VAR_1->inputs[VAR_1->num_inputs].type = VAR_3;
  VAR_1->num_inputs++;
 }
}
