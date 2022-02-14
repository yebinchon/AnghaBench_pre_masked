
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int cap_sync_hook; } ;
struct alc_spec {int inv_dmic_fixup; TYPE_1__ gen; int inv_dmic_pin; scalar_t__ inv_dmic_muted; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 struct alc_spec *VAR_5 = VAR_3->spec;

 if (!FUNC_0(&VAR_5->gen, ((void*)0), &VAR_2))
  return -VAR_0;
 VAR_5->inv_dmic_fixup = 1;
 VAR_5->inv_dmic_muted = 0;
 VAR_5->inv_dmic_pin = VAR_4;
 VAR_5->gen.cap_sync_hook = VAR_1;
 return 0;
}
