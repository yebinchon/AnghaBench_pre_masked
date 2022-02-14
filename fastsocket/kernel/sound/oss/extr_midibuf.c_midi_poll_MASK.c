
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* outputc ) (int,int) ;} ;
struct TYPE_7__ {int* queue; size_t head; int len; } ;
struct TYPE_6__ {scalar_t__ expires; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 TYPE_2__** VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 FUNC_2(&VAR_2, VAR_10);
 if (VAR_7)
 {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   if (VAR_3[VAR_11] != ((void*)0) && VAR_4[VAR_11] != ((void*)0))
   {
    while (FUNC_0(VAR_4[VAR_11]))
    {
     int VAR_12;
     int VAR_13 = VAR_4[VAR_11]->queue[VAR_4[VAR_11]->head];

     FUNC_3(&VAR_2,VAR_10);
     VAR_12 = VAR_3[VAR_11]->outputc(VAR_11, VAR_13);
     FUNC_2(&VAR_2, VAR_10);
     if (!VAR_12)
      break;
     VAR_4[VAR_11]->head = (VAR_4[VAR_11]->head + 1) % VAR_0;
     VAR_4[VAR_11]->len--;
    }

    if (FUNC_0(VAR_4[VAR_11]) < 100)
     FUNC_5(&VAR_5[VAR_11]);
   }
  VAR_8.expires = (1) + VAR_1;
  FUNC_1(&VAR_8);



 }
 FUNC_3(&VAR_2, VAR_10);
}
