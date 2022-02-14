
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_spec {int gen; } ;
struct hda_codec {struct via_spec* spec; } ;


 int FUNC_0 (struct via_spec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct via_spec *VAR_1 = VAR_0->spec;

 if (!VAR_1)
  return;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->gen);
 FUNC_0(VAR_1);
}
