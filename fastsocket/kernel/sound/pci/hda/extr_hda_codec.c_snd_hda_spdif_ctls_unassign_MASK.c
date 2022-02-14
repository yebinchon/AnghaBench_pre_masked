
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hda_spdif_out {scalar_t__ nid; } ;
struct hda_codec {int spdif_mutex; int spdif_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hda_spdif_out* FUNC_2 (int *,int) ;

void FUNC_3(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_spdif_out *VAR_2;

 FUNC_0(&VAR_0->spdif_mutex);
 VAR_2 = FUNC_2(&VAR_0->spdif_out, VAR_1);
 VAR_2->nid = (u16)-1;
 FUNC_1(&VAR_0->spdif_mutex);
}
