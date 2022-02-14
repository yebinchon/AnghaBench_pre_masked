
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int * path; scalar_t__ active; } ;
struct hda_gen_spec {int power_down_unused; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3, struct nid_path *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_3->spec;
 bool VAR_6 = 0;
 int VAR_7;

 if (!VAR_5->power_down_unused || VAR_4->active)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_4->depth; VAR_7++) {
  hda_nid_t VAR_8 = VAR_4->path[VAR_7];
  if (!FUNC_2(VAR_3, VAR_8, VAR_0) &&
      !FUNC_0(VAR_3, VAR_8)) {
   FUNC_4(VAR_3, VAR_8, 0,
         VAR_2,
         VAR_0);
   VAR_6 = 1;
  }
 }

 if (VAR_6) {
  FUNC_1(10);
  FUNC_3(VAR_3, VAR_4->path[0], 0,
       VAR_1, 0);
 }
}
