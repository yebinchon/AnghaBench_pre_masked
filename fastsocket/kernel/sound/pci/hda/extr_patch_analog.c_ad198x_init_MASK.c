
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {int num_init_verbs; int * init_verbs; } ;


 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0)
{
 struct ad198x_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_init_verbs; VAR_2++)
  FUNC_0(VAR_0, VAR_1->init_verbs[VAR_2]);
 return 0;
}
