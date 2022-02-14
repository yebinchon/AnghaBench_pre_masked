
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt_maxformat; int ** dt_formats; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

void
FUNC_2(dtrace_hdl_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->dt_maxformat; VAR_1++) {
  if (VAR_0->dt_formats[VAR_1] != ((void*)0))
   FUNC_0(VAR_0->dt_formats[VAR_1]);
 }

 FUNC_1(VAR_0->dt_formats);
 VAR_0->dt_formats = ((void*)0);
}
