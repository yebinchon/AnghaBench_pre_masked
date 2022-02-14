
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int midi_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int* VAR_0 ;
 TYPE_1__** VAR_1 ;

void
FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_1[VAR_2]->midi_dev;
 int VAR_7, VAR_8;

 if (VAR_4 < 0 || VAR_4 > 127)
  return;
 if (VAR_3 < 0 || VAR_3 > 15)
  return;

 FUNC_0(VAR_2);

 VAR_8 = VAR_0[VAR_6] & 0xf0;
 VAR_7 = VAR_0[VAR_6] & 0x0f;

 if (VAR_8 != 0xb0 || VAR_7 != VAR_3)
   {
    if (!FUNC_2(VAR_6, 0xb0 | (VAR_3 & 0x0f)))
     return;
    FUNC_1(VAR_6, 0xb0 | (VAR_3 & 0x0f));
 } else if (!FUNC_2(VAR_6, VAR_4))
  return;

 FUNC_1(VAR_6, VAR_4);
 FUNC_1(VAR_6, VAR_5 & 0x7f);
}
