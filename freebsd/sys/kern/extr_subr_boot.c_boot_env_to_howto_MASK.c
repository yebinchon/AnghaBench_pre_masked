
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int * ev; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int
FUNC_3(void)
{
 int VAR_1, VAR_2;
 char *VAR_3;

 for (VAR_2 = 0, VAR_1 = 0; VAR_0[VAR_1].ev != ((void*)0); VAR_1++) {
  VAR_3 = FUNC_1(VAR_0[VAR_1].ev);
  if (VAR_3 != ((void*)0) && FUNC_2(VAR_3, "no") != 0)
   VAR_2 |= VAR_0[VAR_1].mask;
  FUNC_0(VAR_3);
 }
 return (VAR_2);
}
