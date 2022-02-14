
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; int (* c_out ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int) ;

void
FUNC_1(int VAR_3)
{
    int VAR_4;


    if (VAR_3 == '\n')
 FUNC_1('\r');

    for (VAR_4 = 0; VAR_2[VAR_4] != ((void*)0); VAR_4++)
 if ((VAR_2[VAR_4]->c_flags & (VAR_1 | VAR_0)) ==
     (VAR_1 | VAR_0))
     VAR_2[VAR_4]->c_out(VAR_3);
}
