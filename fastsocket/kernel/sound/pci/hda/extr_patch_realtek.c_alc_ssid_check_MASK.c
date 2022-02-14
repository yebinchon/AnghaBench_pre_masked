
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int init_amp; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int const,int const,int const,int const) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1, const hda_nid_t *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3])) {
  struct alc_spec *VAR_3 = VAR_1->spec;
  FUNC_1("realtek: "
      "Enable default setup for auto mode as fallback\n");
  VAR_3->init_amp = VAR_0;
 }
}
