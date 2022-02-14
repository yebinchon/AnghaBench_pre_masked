
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int sa_lock; } ;
typedef TYPE_1__ sa_handle_t ;
struct TYPE_8__ {int * sa_data_func; int sa_length; void* sa_data; int sa_attr; } ;
typedef TYPE_2__ sa_bulk_attr_t ;
typedef int sa_attr_type_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

int
FUNC_4(sa_handle_t *VAR_0, sa_attr_type_t VAR_1, void *VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 sa_bulk_attr_t VAR_5;

 VAR_5.sa_attr = VAR_1;
 VAR_5.sa_data = VAR_2;
 VAR_5.sa_length = VAR_3;
 VAR_5.sa_data_func = ((void*)0);

 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->sa_lock);
 VAR_4 = FUNC_3(VAR_0, &VAR_5, 1);
 FUNC_2(&VAR_0->sa_lock);
 return (VAR_4);
}
