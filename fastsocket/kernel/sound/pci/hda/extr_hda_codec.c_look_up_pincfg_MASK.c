
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {int used; } ;
struct hda_pincfg {scalar_t__ nid; } ;
struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 struct hda_pincfg* FUNC_0 (struct snd_array*,int) ;

__attribute__((used)) static struct hda_pincfg *FUNC_1(struct hda_codec *VAR_0,
      struct snd_array *VAR_1,
      hda_nid_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->used; VAR_3++) {
  struct hda_pincfg *VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4->nid == VAR_2)
   return VAR_4;
 }
 return ((void*)0);
}
