
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gen; } ;
struct hda_codec {int no_trigger_sense; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sigmatel_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(&VAR_3->gen);
 VAR_2->spec = VAR_3;
 VAR_2->no_trigger_sense = 1;
 return 0;
}
