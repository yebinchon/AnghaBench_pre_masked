
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* outputc ) (int,unsigned char) ;} ;
struct TYPE_3__ {int midi_dev; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,unsigned char) ;
 int FUNC_2 (int,unsigned char) ;
 TYPE_1__** VAR_1 ;
 int* VAR_2 ;

int
FUNC_3(int VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_1[VAR_3]->midi_dev;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   {
    switch (VAR_4[VAR_7])
      {
      case 0xf0:
       if (!FUNC_0(VAR_6, 0xf0))
        return 0;
       VAR_2[VAR_3] = 1;
       break;

      case 0xf7:
       if (!VAR_2[VAR_3])
        return 0;
       VAR_2[VAR_3] = 0;
       break;

      default:
       if (!VAR_2[VAR_3])
        return 0;

       if (VAR_4[VAR_7] & 0x80)
         {
          VAR_4[VAR_7] = 0xf7;
          VAR_2[VAR_3] = 0;
         }
      }

    if (!VAR_0[VAR_6]->outputc(VAR_6, VAR_4[VAR_7]))
      {




       int VAR_8 = 0;

       VAR_4[VAR_7] = 0xf7;
       VAR_2[VAR_3] = 0;

       while (!VAR_0[VAR_6]->outputc(VAR_6, VAR_4[VAR_7]) &&
       VAR_8 < 1000)
        VAR_8++;
      }
    if (!VAR_2[VAR_3])
     return 0;
   }

 return 0;
}
