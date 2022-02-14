
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int sa_lock; } ;
typedef TYPE_1__ sa_handle_t ;
struct TYPE_7__ {void* sa_data; int sa_length; int * sa_data_func; int sa_attr; } ;
typedef TYPE_2__ sa_bulk_attr_t ;
typedef int sa_attr_type_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int,int *) ;

int
FUNC_3(sa_handle_t *VAR_0, sa_attr_type_t VAR_1,
    void *VAR_2, uint32_t VAR_3, dmu_tx_t *VAR_4)
{
 int VAR_5;
 sa_bulk_attr_t VAR_6;

 VAR_6.sa_attr = VAR_1;
 VAR_6.sa_data_func = ((void*)0);
 VAR_6.sa_length = VAR_3;
 VAR_6.sa_data = VAR_2;

 FUNC_0(&VAR_0->sa_lock);
 VAR_5 = FUNC_2(VAR_0, &VAR_6, 1, VAR_4);
 FUNC_1(&VAR_0->sa_lock);
 return (VAR_5);
}
