
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int * ev; } ;


 int FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].ev != ((void*)0); VAR_2++)
  if (VAR_1 & VAR_0[VAR_2].mask)
   FUNC_0(VAR_0[VAR_2].ev, "YES");
}
