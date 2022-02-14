
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {struct nm256* private_data; } ;
struct nm256 {int in_resume; int reset_workaround_2; int reset_workaround; } ;
struct TYPE_3__ {int value; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct snd_ac97*,int ,int ) ;
 int FUNC_2 (struct nm256*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct snd_ac97 *VAR_1)
{
 struct nm256 *VAR_2 = VAR_1->private_data;


 FUNC_2(VAR_2, 0x6c0, 1);
 if (! VAR_2->reset_workaround) {

  FUNC_2(VAR_2, 0x6cc, 0x87);
 }
 if (! VAR_2->reset_workaround_2) {

  FUNC_2(VAR_2, 0x6cc, 0x80);
  FUNC_2(VAR_2, 0x6cc, 0x0);
 }
 if (! VAR_2->in_resume) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {



   FUNC_1(VAR_1, VAR_0[VAR_3].reg,
          VAR_0[VAR_3].value);
  }
 }
}
