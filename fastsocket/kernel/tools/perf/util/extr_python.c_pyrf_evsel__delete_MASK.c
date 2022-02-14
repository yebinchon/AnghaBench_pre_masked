
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pyrf_evsel {TYPE_1__* ob_type; int evsel; } ;
struct TYPE_2__ {int (* tp_free ) (int *) ;} ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pyrf_evsel *VAR_0)
{
 FUNC_0(&VAR_0->evsel);
 VAR_0->ob_type->tp_free((PyObject*)VAR_0);
}
