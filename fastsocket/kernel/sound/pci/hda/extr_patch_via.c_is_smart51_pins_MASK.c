
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int multi_ios; TYPE_1__* multi_io; } ;
struct via_spec {TYPE_2__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_3__ {scalar_t__ pin; } ;



__attribute__((used)) static bool FUNC_0(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct via_spec *VAR_2 = VAR_0->spec;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->gen.multi_ios; VAR_3++)
  if (VAR_2->gen.multi_io[VAR_3].pin == VAR_1)
   return 1;
 return 0;
}
