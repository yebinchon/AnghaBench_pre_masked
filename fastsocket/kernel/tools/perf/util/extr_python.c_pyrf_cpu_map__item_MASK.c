
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pyrf_cpu_map {TYPE_1__* cpus; } ;
struct TYPE_2__ {size_t nr; int * map; } ;
typedef size_t Py_ssize_t ;
typedef int PyObject ;


 int * FUNC_0 (char*,int ) ;

__attribute__((used)) static PyObject *FUNC_1(PyObject *VAR_0, Py_ssize_t VAR_1)
{
 struct pyrf_cpu_map *VAR_2 = (void *)VAR_0;

 if (VAR_1 >= VAR_2->cpus->nr)
  return ((void*)0);

 return FUNC_0("i", VAR_2->cpus->map[VAR_1]);
}
