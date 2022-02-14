
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; } ;
struct hda_gen_spec {int mixer_nid; int * private_dac_nids; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct badness_table {scalar_t__ no_dac; scalar_t__ no_primary_dac; scalar_t__ shared_surr_main; scalar_t__ shared_clfe; scalar_t__ shared_surr; scalar_t__ shared_primary; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,struct nid_path*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int) ;
 scalar_t__ FUNC_3 (struct hda_codec*,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int) ;
 struct nid_path* FUNC_5 (struct hda_codec*,int ,int ,int ) ;
 struct nid_path* FUNC_6 (struct hda_codec*,int) ;
 int FUNC_7 (struct hda_codec*,struct nid_path*) ;
 int FUNC_8 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_0, int VAR_1,
      const hda_nid_t *VAR_2, hda_nid_t *VAR_3,
      int *VAR_4,
      const struct badness_table *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_0->spec;
 int VAR_7, VAR_8;
 int VAR_9 = 0;
 hda_nid_t VAR_10;

 if (!VAR_1)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct nid_path *VAR_11;
  hda_nid_t VAR_12 = VAR_2[VAR_7];

  VAR_11 = FUNC_6(VAR_0, VAR_4[VAR_7]);
  if (VAR_11) {
   VAR_9 += FUNC_0(VAR_0, VAR_11);
   continue;
  }

  VAR_3[VAR_7] = FUNC_4(VAR_0, VAR_12, 0);
  if (!VAR_3[VAR_7] && !VAR_7) {

   for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
    if (FUNC_3(VAR_0, VAR_3[VAR_8], VAR_12)) {
     VAR_3[0] = VAR_3[VAR_8];
     VAR_3[VAR_8] = 0;
     FUNC_2(VAR_0, VAR_4[VAR_8]);
     VAR_4[VAR_8] = 0;
     break;
    }
   }
  }
  VAR_10 = VAR_3[VAR_7];
  if (!VAR_10) {
   if (VAR_1 > 2)
    VAR_10 = FUNC_8(VAR_0, FUNC_1(VAR_0, VAR_7), VAR_12);
   if (!VAR_10)
    VAR_10 = FUNC_8(VAR_0, VAR_3[0], VAR_12);
   if (!VAR_10)
    VAR_10 = FUNC_8(VAR_0, FUNC_1(VAR_0, VAR_7), VAR_12);
   if (VAR_10) {
    if (!VAR_7)
     VAR_9 += VAR_5->shared_primary;
    else if (VAR_7 == 1)
     VAR_9 += VAR_5->shared_surr;
    else
     VAR_9 += VAR_5->shared_clfe;
   } else if (FUNC_3(VAR_0, VAR_6->private_dac_nids[0], VAR_12)) {
    VAR_10 = VAR_6->private_dac_nids[0];
    VAR_9 += VAR_5->shared_surr_main;
   } else if (!VAR_7)
    VAR_9 += VAR_5->no_primary_dac;
   else
    VAR_9 += VAR_5->no_dac;
  }
  if (!VAR_10)
   continue;
  VAR_11 = FUNC_5(VAR_0, VAR_10, VAR_12, -VAR_6->mixer_nid);
  if (!VAR_11 && !VAR_7 && VAR_6->mixer_nid) {

   VAR_11 = FUNC_5(VAR_0, VAR_10, VAR_12, 0);
  }
  if (!VAR_11) {
   VAR_10 = VAR_3[VAR_7] = 0;
   VAR_9 += VAR_5->no_dac;
  } else {

   VAR_11->active = 1;
   VAR_4[VAR_7] = FUNC_7(VAR_0, VAR_11);
   VAR_9 += FUNC_0(VAR_0, VAR_11);
  }
 }

 return VAR_9;
}
