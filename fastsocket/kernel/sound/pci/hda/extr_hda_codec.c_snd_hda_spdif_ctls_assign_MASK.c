
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_spdif_out {scalar_t__ nid; unsigned short ctls; } ;
struct hda_codec {int spdif_mutex; int spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,unsigned short,unsigned short) ;
 struct hda_spdif_out* FUNC_3 (int *,int) ;

void FUNC_4(struct hda_codec *VAR_0, int VAR_1, hda_nid_t VAR_2)
{
 struct hda_spdif_out *VAR_3;
 unsigned short VAR_4;

 FUNC_0(&VAR_0->spdif_mutex);
 VAR_3 = FUNC_3(&VAR_0->spdif_out, VAR_1);
 if (VAR_3->nid != VAR_2) {
  VAR_3->nid = VAR_2;
  VAR_4 = VAR_3->ctls;
  FUNC_2(VAR_0, VAR_2, VAR_4 & 0xff, (VAR_4 >> 8) & 0xff);
 }
 FUNC_1(&VAR_0->spdif_mutex);
}
