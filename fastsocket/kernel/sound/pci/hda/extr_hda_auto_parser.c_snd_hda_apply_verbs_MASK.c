
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_verb {int dummy; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {TYPE_1__ verbs; } ;


 struct hda_verb** FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb*) ;

void FUNC_2(struct hda_codec *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->verbs.used; VAR_1++) {
  struct hda_verb **VAR_2 = FUNC_0(&VAR_0->verbs, VAR_1);
  FUNC_1(VAR_0, *VAR_2);
 }
}
