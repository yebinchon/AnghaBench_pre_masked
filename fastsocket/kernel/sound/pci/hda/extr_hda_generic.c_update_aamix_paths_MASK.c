
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__* path; } ;
struct hda_gen_spec {scalar_t__ alt_dac_nid; scalar_t__ indep_hp_enabled; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct nid_path*) ;
 int FUNC_1 (struct hda_codec*,struct nid_path*,int,int) ;
 struct nid_path* FUNC_2 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1, bool VAR_2,
          int VAR_3, int VAR_4,
          int VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_1->spec;
 struct nid_path *VAR_7, *VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_3);
 VAR_8 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_7 || !VAR_8)
  return;




 if (VAR_5 == VAR_0 && VAR_6->indep_hp_enabled &&
     VAR_8->path[0] != VAR_6->alt_dac_nid)
  VAR_2 = 0;

 if (VAR_2) {
  FUNC_1(VAR_1, VAR_7, 0, 1);
  FUNC_1(VAR_1, VAR_8, 1, 1);
  FUNC_0(VAR_1, VAR_7);
 } else {
  FUNC_1(VAR_1, VAR_8, 0, 0);
  FUNC_1(VAR_1, VAR_7, 1, 0);
  FUNC_0(VAR_1, VAR_8);
 }
}
