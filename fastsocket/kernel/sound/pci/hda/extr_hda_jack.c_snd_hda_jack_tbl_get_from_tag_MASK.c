
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {unsigned char tag; } ;
struct TYPE_2__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;



struct hda_jack_tbl *
FUNC_0(struct hda_codec *VAR_0, unsigned char VAR_1)
{
 struct hda_jack_tbl *VAR_2 = VAR_0->jacktbl.list;
 int VAR_3;

 if (!VAR_1 || !VAR_2)
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0->jacktbl.used; VAR_3++, VAR_2++)
  if (VAR_2->tag == VAR_1)
   return VAR_2;
 return ((void*)0);
}
