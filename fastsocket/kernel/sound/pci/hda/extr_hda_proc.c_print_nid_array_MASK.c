
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; scalar_t__ index; int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_array {int used; struct hda_nid_item* list; } ;
struct hda_nid_item {scalar_t__ nid; int flags; scalar_t__ index; struct snd_kcontrol* kctl; } ;
struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_info_buffer*,char*,int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_5(struct snd_info_buffer *VAR_1,
       struct hda_codec *VAR_2, hda_nid_t VAR_3,
       struct snd_array *VAR_4)
{
 int VAR_5;
 struct hda_nid_item *VAR_6 = VAR_4->list, *VAR_7;
 struct snd_kcontrol *VAR_8;
 for (VAR_5 = 0; VAR_5 < VAR_4->used; VAR_5++) {
  VAR_7 = &VAR_6[VAR_5];
  if (VAR_7->nid == VAR_3) {
   VAR_8 = VAR_7->kctl;
   FUNC_4(VAR_1,
     "  Control: name=\"%s\", index=%i, device=%i\n",
     VAR_8->id.name, VAR_8->id.index + VAR_7->index,
     VAR_8->id.device);
   if (VAR_7->flags & VAR_0)
    FUNC_4(VAR_1,
      "    ControlAmp: chs=%lu, dir=%s, "
      "idx=%lu, ofs=%lu\n",
      FUNC_0(VAR_8),
      FUNC_1(VAR_8) ? "Out" : "In",
      FUNC_2(VAR_8),
      FUNC_3(VAR_8));
  }
 }
}
