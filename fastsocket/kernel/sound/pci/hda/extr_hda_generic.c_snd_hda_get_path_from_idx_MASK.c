
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 struct nid_path* FUNC_0 (TYPE_1__*,int) ;

struct nid_path *FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;

 if (VAR_1 <= 0 || VAR_1 > VAR_2->paths.used)
  return ((void*)0);
 return FUNC_0(&VAR_2->paths, VAR_1 - 1);
}
