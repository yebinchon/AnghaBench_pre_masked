
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_beep {int codec; scalar_t__ playing; int nid; int beep_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hda_beep *VAR_1)
{
 FUNC_0(&VAR_1->beep_work);
 if (VAR_1->playing) {

  FUNC_1(VAR_1->codec, VAR_1->nid, 0,
        VAR_0, 0);
  VAR_1->playing = 0;
  FUNC_2(VAR_1->codec);
 }
}
