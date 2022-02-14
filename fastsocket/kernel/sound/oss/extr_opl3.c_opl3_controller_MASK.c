
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_voice; TYPE_1__* voc; } ;
struct TYPE_3__ {int bender_range; int volume; int panning; } ;






 int FUNC_0 (int,int,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1 (int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0->nr_voice)
  return;

 switch (VAR_3)
 {
  case 129:
   FUNC_0(VAR_1, VAR_2, VAR_4);
   break;

  case 128:
   VAR_0->voc[VAR_2].bender_range = VAR_4;
   break;

  case 131:
   VAR_0->voc[VAR_2].volume = VAR_4 / 128;
   break;

  case 130:
   VAR_0->voc[VAR_2].panning = (VAR_4 * 2) - 128;
   break;
 }
}
