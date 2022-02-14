
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct hda_jack_tbl {int phantom_jack; int type; TYPE_2__* jack; struct snd_kcontrol* kctl; } ;
struct hda_codec {TYPE_1__* bus; } ;
typedef int hda_nid_t ;
struct TYPE_5__ {int private_free; struct hda_jack_tbl* private_data; } ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 struct hda_jack_tbl* FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (int ,char const*,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 struct snd_kcontrol* FUNC_6 (char const*,int,struct hda_codec*) ;
 int FUNC_7 (int ,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_2, hda_nid_t VAR_3,
     const char *VAR_4, int VAR_5, bool VAR_6)
{
 struct hda_jack_tbl *VAR_7;
 struct snd_kcontrol *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_7)
  return 0;
 if (VAR_7->kctl)
  return 0;
 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_7->kctl = VAR_8;
 VAR_7->phantom_jack = !!VAR_6;

 VAR_10 = FUNC_2(VAR_2, VAR_3);
 FUNC_7(VAR_2->bus->card, VAR_8, VAR_10);
 return 0;
}
