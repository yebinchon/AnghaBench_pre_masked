
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* outputc ) (int,int) ;} ;
struct TYPE_3__ {int midi_dev; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_1__** VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(int VAR_3)
{
 int VAR_4 = VAR_1[VAR_3]->midi_dev;
 int VAR_5 = 0;

 if (!VAR_2[VAR_3])
  return;

 VAR_2[VAR_3] = 0;

 while (!VAR_0[VAR_4]->outputc(VAR_4, 0xf7) &&
        VAR_5 < 1000)
  VAR_5++;

 VAR_2[VAR_3] = 0;
}
