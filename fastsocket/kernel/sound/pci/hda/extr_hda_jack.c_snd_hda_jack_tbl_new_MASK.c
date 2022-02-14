
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {int jack_dirty; int tag; int nid; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;
typedef int hda_nid_t ;


 struct hda_jack_tbl* FUNC_0 (TYPE_1__*) ;
 struct hda_jack_tbl* FUNC_1 (struct hda_codec*,int ) ;

struct hda_jack_tbl *
FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_jack_tbl *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(&VAR_0->jacktbl);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->nid = VAR_1;
 VAR_2->jack_dirty = 1;
 VAR_2->tag = VAR_0->jacktbl.used;
 return VAR_2;
}
