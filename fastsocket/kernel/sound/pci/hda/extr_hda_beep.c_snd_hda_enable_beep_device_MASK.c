
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct hda_beep* beep; } ;
struct hda_beep {int enabled; scalar_t__ mode; int unregister_work; int register_work; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_beep*) ;

int FUNC_4(struct hda_codec *VAR_2, int VAR_3)
{
 struct hda_beep *VAR_4 = VAR_2->beep;
 if (!VAR_4)
  return 0;
 VAR_3 = !!VAR_3;
 if (VAR_4->enabled != VAR_3) {
  VAR_4->enabled = VAR_3;
  if (!VAR_3)
   FUNC_3(VAR_4);
  if (VAR_4->mode == VAR_0) {
   if (VAR_3) {
    FUNC_0(&VAR_4->unregister_work);
    FUNC_2(&VAR_4->register_work);
   } else {
    FUNC_1(&VAR_4->unregister_work,
            VAR_1);
   }
  }
  return 1;
 }
 return 0;
}
