
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_2__ {int dig_out_nid; } ;
struct conexant_spec {TYPE_1__ multiout; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int const) ;
 int FUNC_2 (struct hda_codec*,int const,int *,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1,
        const hda_nid_t *VAR_2,
        int VAR_3)
{
 struct conexant_spec *VAR_4 = VAR_1->spec;
 hda_nid_t *VAR_5 = &VAR_4->multiout.dig_out_nid;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2++) {
  unsigned int VAR_7 = FUNC_1(VAR_1, *VAR_2);
  if (FUNC_0(VAR_7) == VAR_0)
   continue;
  if (FUNC_2(VAR_1, *VAR_2, VAR_5, 1) != 1)
   continue;
 }
}
