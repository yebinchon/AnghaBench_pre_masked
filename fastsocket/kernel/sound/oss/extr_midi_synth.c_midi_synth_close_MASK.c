
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) (int) ;int (* outputc ) (int,int) ;} ;
struct TYPE_3__ {int midi_dev; } ;


 int FUNC_0 (int) ;
 TYPE_2__** VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 TYPE_1__** VAR_1 ;

void
FUNC_3(int VAR_2)
{
 int VAR_3 = VAR_1[VAR_2]->midi_dev;

 FUNC_0(VAR_2);




 VAR_0[VAR_3]->outputc(VAR_3, 0xfe);

 VAR_0[VAR_3]->close(VAR_3);
}
