
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qg_numqueues; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int VAR_4 ;
 int FUNC_2 () ;

void
FUNC_3()
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_1[VAR_5] != ((void*)0); VAR_5++)
 {
  int VAR_8;

  VAR_6++;
  for (VAR_8 = 0; VAR_8 < VAR_1[VAR_5]->qg_numqueues; VAR_8++)
  {
   if (VAR_3)
    FUNC_2();
   VAR_7 += FUNC_0(VAR_5, VAR_8);
   VAR_6++;
  }
 }
 if (VAR_6 > 1)
  (void) FUNC_1(VAR_4, VAR_2,
         "\t\tTotal requests: %d\n",
         VAR_7);
}
