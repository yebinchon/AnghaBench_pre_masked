
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int owner; int (* close ) (int) ;int (* outputc ) (int,int) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_1__** VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (int *) ;

void FUNC_10(int VAR_9, struct file *VAR_10)
{
 int VAR_11;

 VAR_9 = VAR_9 >> 4;
 VAR_11 = FUNC_8(VAR_10);

 if (VAR_9 < 0 || VAR_9 >= VAR_6 || VAR_2[VAR_9] == ((void*)0))
  return;





 if (VAR_11 != VAR_0)
 {
  VAR_2[VAR_9]->outputc(VAR_9, 0xfe);




  while (!FUNC_5(VAR_1) && FUNC_0(VAR_4[VAR_9]))
     FUNC_3(&VAR_5[VAR_9]);




  FUNC_2(VAR_9);


 }

 VAR_2[VAR_9]->close(VAR_9);

 VAR_7--;
 if (VAR_7 == 0)
  FUNC_1(&VAR_8);
 FUNC_9(VAR_3[VAR_9]);
 FUNC_9(VAR_4[VAR_9]);
 VAR_3[VAR_9] = ((void*)0);
 VAR_4[VAR_9] = ((void*)0);

 FUNC_4(VAR_2[VAR_9]->owner);
}
