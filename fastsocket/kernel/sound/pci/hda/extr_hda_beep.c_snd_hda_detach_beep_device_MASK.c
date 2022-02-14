
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct hda_beep* beep; } ;
struct hda_beep {scalar_t__ dev; int unregister_work; int register_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_beep*) ;
 int FUNC_3 (struct hda_beep*) ;

void FUNC_4(struct hda_codec *VAR_0)
{
 struct hda_beep *VAR_1 = VAR_0->beep;
 if (VAR_1) {
  FUNC_1(&VAR_1->register_work);
  FUNC_0(&VAR_1->unregister_work);
  if (VAR_1->dev)
   FUNC_3(VAR_1);
  VAR_0->beep = ((void*)0);
  FUNC_2(VAR_1);
 }
}
