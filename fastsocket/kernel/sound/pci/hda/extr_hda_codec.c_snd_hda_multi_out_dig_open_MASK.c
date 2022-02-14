
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_multi_out {scalar_t__ dig_out_used; int dig_out_nid; } ;
struct hda_codec {int spdif_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hda_codec *VAR_2,
          struct hda_multi_out *VAR_3)
{
 FUNC_1(&VAR_2->spdif_mutex);
 if (VAR_3->dig_out_used == VAR_0)

  FUNC_0(VAR_2, VAR_3->dig_out_nid);
 VAR_3->dig_out_used = VAR_1;
 FUNC_2(&VAR_2->spdif_mutex);
 return 0;
}
