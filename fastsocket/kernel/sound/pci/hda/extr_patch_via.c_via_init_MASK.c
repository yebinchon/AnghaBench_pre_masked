
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_spec {int num_iverbs; int * init_verbs; } ;
struct hda_codec {struct via_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_0)
{
 struct via_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_iverbs; VAR_2++)
  FUNC_3(VAR_0, VAR_1->init_verbs[VAR_2]);


 FUNC_1(VAR_0);
 FUNC_0(VAR_0, 1);

 FUNC_2(VAR_0);

 FUNC_4(VAR_0);

 return 0;
}
