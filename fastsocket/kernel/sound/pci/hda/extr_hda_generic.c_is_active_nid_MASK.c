
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int depth; scalar_t__* path; unsigned int* idx; int active; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 struct nid_path* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_1->spec;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->paths.used; VAR_7++) {
  struct nid_path *VAR_8 = FUNC_0(&VAR_5->paths, VAR_7);
  if (!VAR_8->active)
   continue;
  for (VAR_6 = 0; VAR_6 < VAR_8->depth; VAR_6++) {
   if (VAR_8->path[VAR_6] == VAR_2) {
    if (VAR_3 == VAR_0 || VAR_8->idx[VAR_6] == VAR_4)
     return 1;
    break;
   }
  }
 }
 return 0;
}
