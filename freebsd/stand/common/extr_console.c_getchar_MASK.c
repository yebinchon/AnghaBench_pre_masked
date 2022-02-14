
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; int (* c_in ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 () ;

int
FUNC_1(void)
{
    int VAR_3;
    int VAR_4;


    for(;;)
 for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
     if ((VAR_2[VAR_3]->c_flags & (VAR_1 | VAR_0)) ==
  (VAR_1 | VAR_0) &&
  ((VAR_4 = VAR_2[VAR_3]->c_in()) != -1))
  return(VAR_4);
}
