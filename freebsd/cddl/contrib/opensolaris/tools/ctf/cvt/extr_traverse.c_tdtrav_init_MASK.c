
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vgen; void* private; int * postops; int * preops; int * firstops; } ;
typedef TYPE_1__ tdtrav_data_t ;
typedef int tdtrav_cb_f ;


 int * VAR_0 ;

void
FUNC_0(tdtrav_data_t *VAR_1, int *VAR_2, tdtrav_cb_f *VAR_3,
    tdtrav_cb_f *VAR_4, tdtrav_cb_f *VAR_5, void *VAR_6)
{
 VAR_1->vgen = ++(*VAR_2);
 VAR_1->firstops = VAR_3 ? VAR_3 : VAR_0;
 VAR_1->preops = VAR_4 ? VAR_4 : VAR_0;
 VAR_1->postops = VAR_5 ? VAR_5 : VAR_0;
 VAR_1->private = VAR_6;
}
