
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_entries; } ;
struct pyrf_evlist {TYPE_1__ evlist; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;



__attribute__((used)) static Py_ssize_t FUNC_0(PyObject *VAR_0)
{
 struct pyrf_evlist *VAR_1 = (void *)VAR_0;

 return VAR_1->evlist.nr_entries;
}
