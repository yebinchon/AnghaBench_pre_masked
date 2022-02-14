
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ext_channel_count; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;



__attribute__((used)) static bool FUNC_0(struct hda_codec *VAR_0)
{
 struct via_spec *VAR_1 = VAR_0->spec;
 return VAR_1->gen.ext_channel_count > 2;
}
