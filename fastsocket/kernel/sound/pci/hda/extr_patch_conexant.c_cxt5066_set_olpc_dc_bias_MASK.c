
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {size_t dc_input_bias; } ;
struct TYPE_4__ {TYPE_1__* items; } ;
struct TYPE_3__ {int index; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_1->spec;



 return FUNC_0(VAR_1, 0x1a,
  VAR_0.items[VAR_2->dc_input_bias].index);
}
