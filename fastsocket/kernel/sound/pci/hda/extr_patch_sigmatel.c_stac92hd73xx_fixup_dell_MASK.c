
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {scalar_t__ eapd_switch; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1)
{
 struct sigmatel_spec *VAR_2 = VAR_1->spec;

 FUNC_0(VAR_1, VAR_0);
 VAR_2->eapd_switch = 0;
}
