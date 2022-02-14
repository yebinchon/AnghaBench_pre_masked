
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; scalar_t__ (* c_ready ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_0 () ;

int
FUNC_1(void)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
 if ((VAR_2[VAR_3]->c_flags & (VAR_1 | VAR_0)) ==
     (VAR_1 | VAR_0) &&
     (VAR_2[VAR_3]->c_ready() != 0))
  return(1);
    return(0);
}
