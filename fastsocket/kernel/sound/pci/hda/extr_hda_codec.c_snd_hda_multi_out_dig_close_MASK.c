
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_multi_out {scalar_t__ dig_out_used; } ;
struct hda_codec {int spdif_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct hda_codec *VAR_0,
    struct hda_multi_out *VAR_1)
{
 FUNC_0(&VAR_0->spdif_mutex);
 VAR_1->dig_out_used = 0;
 FUNC_1(&VAR_0->spdif_mutex);
 return 0;
}
