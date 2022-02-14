
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_spdif_out {scalar_t__ nid; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {TYPE_1__ spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 struct hda_spdif_out* FUNC_0 (TYPE_1__*,int) ;

struct hda_spdif_out *FUNC_1(struct hda_codec *VAR_0,
            hda_nid_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->spdif_out.used; VAR_2++) {
  struct hda_spdif_out *VAR_3 =
    FUNC_0(&VAR_0->spdif_out, VAR_2);
  if (VAR_3->nid == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
