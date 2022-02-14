
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* converter; } ;
struct TYPE_5__ {TYPE_1__* chn_info; scalar_t__ emulation; scalar_t__ sysex_ptr; } ;
struct TYPE_4__ {int bender_value; int bender_range; int controllers; scalar_t__ pgm_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_6 ;
 TYPE_2__** VAR_7 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_8;

 VAR_2 = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  if (VAR_3[VAR_8] && VAR_3[VAR_8]->converter != ((void*)0))
  {
   VAR_7[VAR_2++] = VAR_3[VAR_8]->converter;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {
  int VAR_9;

  VAR_7[VAR_8]->sysex_ptr = 0;
  VAR_7[VAR_8]->emulation = 0;

  for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
  {
   VAR_7[VAR_8]->chn_info[VAR_9].pgm_num = 0;
   FUNC_0(VAR_8,
    VAR_7[VAR_8]->chn_info[VAR_9].controllers,0);
   VAR_7[VAR_8]->chn_info[VAR_9].bender_value = (1 << 7);
   VAR_7[VAR_8]->chn_info[VAR_9].bender_range = 200;
  }
 }
 VAR_1 = 0;
 VAR_6 = VAR_0;
}
