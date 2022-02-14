
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int al_elements; } ;
typedef TYPE_1__ alist_t ;
struct TYPE_6__ {int (* aid_func ) (void*,void*,void*) ;void* aid_priv; } ;
typedef TYPE_2__ alist_iter_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;

int
FUNC_1(alist_t *VAR_1, int (*VAR_2)(void *, void *, void *), void *VAR_3)
{
 alist_iter_data_t VAR_4;

 VAR_4.aid_func = VAR_2;
 VAR_4.aid_priv = VAR_3;

 return (FUNC_0(VAR_1->al_elements, VAR_0, &VAR_4));
}
