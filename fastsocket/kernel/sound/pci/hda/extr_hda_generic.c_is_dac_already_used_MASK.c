
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {scalar_t__* path; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 struct nid_path* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->paths.used; VAR_3++) {
  struct nid_path *VAR_4 = FUNC_0(&VAR_2->paths, VAR_3);
  if (VAR_4->path[0] == VAR_1)
   return 1;
 }
 return 0;
}
