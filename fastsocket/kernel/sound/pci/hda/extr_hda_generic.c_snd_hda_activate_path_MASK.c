
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; int depth; int * idx; scalar_t__* multi; int * path; } ;
struct hda_gen_spec {scalar_t__ power_down_unused; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,struct nid_path*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,struct nid_path*,int,int) ;
 scalar_t__ FUNC_2 (struct hda_codec*,struct nid_path*,int) ;
 scalar_t__ FUNC_3 (struct hda_codec*,struct nid_path*,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ,int ) ;

void FUNC_7(struct hda_codec *VAR_3, struct nid_path *VAR_4,
      bool VAR_5, bool VAR_6)
{
 struct hda_gen_spec *VAR_7 = VAR_3->spec;
 int VAR_8;

 if (!VAR_5)
  VAR_4->active = 0;

 for (VAR_8 = VAR_4->depth - 1; VAR_8 >= 0; VAR_8--) {
  hda_nid_t VAR_9 = VAR_4->path[VAR_8];
  if (VAR_5 && VAR_7->power_down_unused) {

   if (!FUNC_4(VAR_3, VAR_9, VAR_0))
    FUNC_5(VAR_3, VAR_9, 0,
          VAR_2,
          VAR_0);
  }
  if (VAR_5 && VAR_4->multi[VAR_8])
   FUNC_6(VAR_3, VAR_9, 0,
         VAR_1,
         VAR_4->idx[VAR_8]);
  if (FUNC_2(VAR_3, VAR_4, VAR_8))
   FUNC_0(VAR_3, VAR_4, VAR_8, VAR_5, VAR_6);
  if (FUNC_3(VAR_3, VAR_4, VAR_8))
   FUNC_1(VAR_3, VAR_4, VAR_8, VAR_5);
 }

 if (VAR_5)
  VAR_4->active = 1;
}
