
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int midi_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__** VAR_0 ;

int
FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0[VAR_1]->midi_dev;

 if (VAR_3 < 0 || VAR_3 > 127)
  VAR_3 = 0;
 if (VAR_2 < 0 || VAR_2 > 15)
  return 0;

 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_4, 0xc0 | (VAR_2 & 0x0f)))
  return 0;
 FUNC_1(VAR_4, 0xc0 | (VAR_2 & 0x0f));


 FUNC_1(VAR_4, VAR_3);

 return 0;
}
