
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int dummy; } ;
struct hda_codec {int verbs; } ;


 int VAR_0 ;
 struct hda_verb** FUNC_0 (int *) ;

int FUNC_1(struct hda_codec *VAR_1,
        const struct hda_verb *VAR_2)
{
 const struct hda_verb **VAR_3;
 VAR_3 = FUNC_0(&VAR_1->verbs);
 if (!VAR_3)
  return -VAR_0;
 *VAR_3 = VAR_2;
 return 0;
}
