
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int depth; scalar_t__* path; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (struct nid_path*,int) ;
 struct nid_path* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static struct nid_path *FUNC_2(struct hda_codec *VAR_0,
         hda_nid_t VAR_1, hda_nid_t VAR_2,
         int VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_0->spec;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->paths.used; VAR_5++) {
  struct nid_path *VAR_6 = FUNC_1(&VAR_4->paths, VAR_5);
  if (VAR_6->depth <= 0)
   continue;
  if ((!VAR_1 || VAR_6->path[0] == VAR_1) &&
      (!VAR_2 || VAR_6->path[VAR_6->depth - 1] == VAR_2)) {
   if (!VAR_3 ||
       (VAR_3 > 0 && FUNC_0(VAR_6, VAR_3)) ||
       (VAR_3 < 0 && !FUNC_0(VAR_6, VAR_3)))
    return VAR_6;
  }
 }
 return ((void*)0);
}
