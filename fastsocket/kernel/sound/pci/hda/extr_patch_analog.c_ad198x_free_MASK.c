
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {int gen; } ;


 int FUNC_0 (struct ad198x_spec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct ad198x_spec *VAR_1 = VAR_0->spec;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->gen);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
