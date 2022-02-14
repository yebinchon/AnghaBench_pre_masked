
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int init_amp; int (* init_hook ) (struct hda_codec*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;

 if (VAR_2->init_hook)
  VAR_2->init_hook(VAR_1);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_2->init_amp);

 FUNC_3(VAR_1);

 FUNC_2(VAR_1, VAR_0);

 return 0;
}
