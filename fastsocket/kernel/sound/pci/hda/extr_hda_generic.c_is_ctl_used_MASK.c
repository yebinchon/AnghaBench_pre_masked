
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {unsigned int* ctls; } ;
struct TYPE_2__ {int used; } ;
struct hda_gen_spec {TYPE_1__ paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 unsigned int VAR_0 ;
 struct nid_path* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_1->spec;
 int VAR_5;

 VAR_2 &= VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4->paths.used; VAR_5++) {
  struct nid_path *VAR_6 = FUNC_0(&VAR_4->paths, VAR_5);
  if ((VAR_6->ctls[VAR_3] & VAR_0) == VAR_2)
   return 1;
 }
 return 0;
}
