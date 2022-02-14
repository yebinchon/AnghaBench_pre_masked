
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int active; } ;
struct hda_gen_spec {int multi_ios; TYPE_1__* multi_io; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int ctl_in; int pin; } ;


 int FUNC_0 (struct hda_gen_spec*) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,struct nid_path*,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->multi_ios; VAR_2++) {
  hda_nid_t VAR_3 = VAR_1->multi_io[VAR_2].pin;
  struct nid_path *VAR_4;
  VAR_4 = FUNC_1(VAR_0, VAR_2);
  if (!VAR_4)
   continue;
  if (!VAR_1->multi_io[VAR_2].ctl_in)
   VAR_1->multi_io[VAR_2].ctl_in =
    FUNC_3(VAR_0, VAR_3);
  FUNC_2(VAR_0, VAR_4, VAR_4->active,
          FUNC_0(VAR_1));
 }
}
